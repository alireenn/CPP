/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anovelli <anovelli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:59:19 by anovelli          #+#    #+#             */
/*   Updated: 2023/03/14 14:37:33 by anovelli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <map>
#include <list>
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
#include <cmath>

class BitcoinExchange
{
private:
	std::map<std::string, std::string> _data;

public:
	BitcoinExchange();
	BitcoinExchange(std::string PathFile);
	BitcoinExchange(const BitcoinExchange &btc);
	~BitcoinExchange();

	BitcoinExchange	&operator=(const BitcoinExchange &btc);

	std::map<std::string, std::string>	getMap();
	int									doExchange(char *path);
	void								parseMap(std::string path);

};