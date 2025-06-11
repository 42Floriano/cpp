/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:49:55 by falberti          #+#    #+#             */
/*   Updated: 2025/06/11 15:03:01 by falberti         ###   ########.fr       */
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
}

void BitcoinExchange::findClosest(std::string date, float value){}
bool BitcoinExchange::verifDate(std::string date){}
float BitcoinExchange::verifValue(std::string value){
	char *ptr;
	float val;

	val = strtof(value.c_str(), &ptr);;
	
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
