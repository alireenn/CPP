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
#include <string>
#include <stdexcept>

/*You have to create a program which outputs the value of a certain amount of bitcoin
on a certain date.
This program must use a database in csv format which will represent bitcoin price
over time. This database is provided with this subject.
The program will take as input a second database, storing the different prices/dates
to evaluate.
Your program must respect these rules:
• The program name is btc.
• Your program must take a file as argument.
• Each line in this file must use the following format: "date | value".
• A valid date will always be in the following format: Year-Month-Day.
• A valid value must be either a float or a positive integer between 0 and 1000.*/

class BitcoinExchange
{
	private:
		std::map<std::string, std::string> _data;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &btc);
		~BitcoinExchange(){}; // Destructor
		// BitcoinExchange	&operator=(const BitcoinExchange &btc);


		void	doExchange(char *file);
};