/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:49:55 by falberti          #+#    #+#             */
/*   Updated: 2025/07/01 14:06:56 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.class.hpp"

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy) : _database(copy._database){}
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& rhs){
	if(this != &rhs){
		_database = rhs._database;
	}
	return *this;
}
BitcoinExchange::~BitcoinExchange(){}

void BitcoinExchange::parseAndPush(std::string data){
	std::string date;
	float value;

	date = data.substr(0, data.find(","));
	value = atof(data.substr(data.find(",")+1, data.length()).c_str());
	this->_database[date] = value;
}

void BitcoinExchange::initDb(){
	std::ifstream db("data.csv");
	std::string data;

	while(std::getline(db, data)){
		if(data != "date,exchange_rate")
			parseAndPush(data);
	}
	std::cout << "Main DB has been parsed and pushed succefully" << std::endl;
}

void BitcoinExchange::findClosest(std::string date, float value){
	std::map<std::string, float>::iterator i = this->_database.find(date);
	if(i != this->_database.end())
		std::cout << date << " => " << value << " = " << value*i->second << std::endl;
	else {
		std::map<std::string, float> ::iterator lower;
		for(i = this->_database.begin(); i != this->_database.end(); i++){
			if(i->first <= date)
				lower = i;
			else 
				break ;
		}
		if (i == this->_database.begin())
			std::cout << date << " => " << value << " = " << value*i->second << std::endl;
		else 
			std::cout << date << " => " << value << " = " << value*lower->second << std::endl;
	}

}

float BitcoinExchange::verifValue(std::string value){
	char *ptr;
	float val;

	val = strtof(value.c_str(), &ptr);
	if (value[0] == '.')
		return -1.0;
	if (*ptr == '\0')
	{
		if (val < 0.0) {
			std::cout << "Error: not a positive number" << std::endl;
			return -2.0;
		} else if (val > 1000) {
			std::cout << "Error: too large number " << std::endl;
			return -2.0;
		} else 
			return (val);
		
	} else 
		return -1.0;
	
}

bool BitcoinExchange::verifDate(std::string date){
	int year, month, day;
	struct tm t_date;
	memset(&t_date, 0, sizeof(struct tm));
	if (date.size() != 10)
		return false;
	for (int i = 0; i < 10; i++){
		if (i == 4 || i == 7){
			if (date[i] != '-')
				return false;
		} else {
			if (date[i] < '0' || date[i] > '9')
				return false;
		}
	}
	year = atoi(date.substr(0,4).c_str());
	month = atoi(date.substr(5,2).c_str());
	day = atoi(date.substr(8).c_str());

	t_date.tm_year = year - 1900;
	t_date.tm_mon = month -1;
	t_date.tm_mday = day;

	time_t cal = mktime(&t_date);
	if (cal == -1)
		return false;
	if (t_date.tm_year != year - 1900 || t_date.tm_mon != month -1 || t_date.tm_mday != day)
		return false;
	return true;
}

void BitcoinExchange::loadNewDb(char *av){
	std::ifstream file(av);
	std::string input;
	std::string date;
	float value;

	if(!file.is_open()){
		std::cout << "Error: file couldn't be open." << std::endl;
	}
	while (std::getline(file, input)){
		if(input.empty())
			continue;
		if (input != "date | value"){
			size_t pos = input.find("|");
			if (pos == std::string::npos || pos == 0 || pos == input.length() -1){
				std::cout << "Error: bad input -> " << input << std::endl;
				continue;
			}
			date = input.substr(0, pos - 1);
			if (!verifDate(date)){
				std::cout << "Error: bad input -> " << input << std::endl;
				continue;
			}
			value = verifValue(input.substr(pos + 2));
			if (value == -2.0)
				continue;
			if (value == -1.0){
				std::cout << "Error: bad input -> " << input << std::endl;
				continue;
			}
			findClosest(date, value);
		}
	}
}
