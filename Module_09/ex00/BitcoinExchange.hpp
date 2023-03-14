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

#include <iostream>
#include <map>
#include <string>
#include <fstream>

class BitcoinExchange
{
	private:
		std::map<std::string, std::string> _data;
	public:
		BitcoinExchange(std::string PathFile);
		~BitcoinExchange();

		static std::string  getFile(std::string path);
		void				ParseMap(std::string FilePath);
		float				calculateOutput(std::string data);
		void				PrintMap(std::map<std::string, std::string> data);
};