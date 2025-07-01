/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.class.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falberti <falberti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 13:39:30 by falberti          #+#    #+#             */
/*   Updated: 2025/07/01 13:57:03 by falberti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CLASS_HPP
#define BITCOINEXCHANGE_CLASS_HPP

# include <iostream>
# include <fstream>
# include <map>
# include <string>
# include <cstdlib>
# include <ctime>
# include <cstring>

class BitcoinExchange {
	private:
		std::map<std::string, float> _database;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& copy);
		BitcoinExchange& operator=(const BitcoinExchange& rhs);
		~BitcoinExchange();
		void initDb();
		void loadNewDb(char *av);
		void parseAndPush(std::string data);
		void findClosest(std::string date, float value);
		bool verifDate(std::string date);
		float verifValue(std::string value);
};

#endif