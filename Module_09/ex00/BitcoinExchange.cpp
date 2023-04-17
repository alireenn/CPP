#include "BitcoinExchange.hpp"

void    csv(std::map<std::string, std::string> &csv, std::ifstream &f) {
    std::string line;
    std::string date;
    std::string value;

    while (std::getline(f, line)) {
        date = line.substr(0, line.find(","));
        value = line.substr(line.find(",") + 1, line.length());
        csv[date] = value;
    }
}

std::string checkDigit(std::string &s) {
    for (std::string::const_iterator i = s.begin(); i != s.end(); ++i) {
        if (!isdigit(*i) && *i != '.')
            throw std::invalid_argument("Error: bad value");
    }
    return s;
}

bool   isDateValid(std::string &date) {
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    if (date[0] < '0' || date[0] > '9' || date[1] < '0' || date[1] > '9' || date[2] < '0' || date[2] > '9' || date[3] < '0' || date[3] > '9')
        return false;
    int y, m, d;
    if (sscanf(date.c_str(), "%d-%d-%d", &y, &m, &d) != 3)
        return false;
    if (m < 1 || m > 12 || d < 1 || d > 31)
        return false;
    return true;
}

BitcoinExchange::BitcoinExchange()
{
    std::ifstream   f;
    std::exception  e;

    try {
        f.open("data.csv");
        if (!f)
            throw e;
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    csv(this->_data, f);
    f.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &btc) {
    *this = btc;
}


void BitcoinExchange::doExchange(char *file)
{
    size_t pos;
    std::ifstream f;
    std::exception e;
    std::string line, before, after;

    try {
        f.open(file);
        if (!f)
            throw e;
    }
    catch (std::exception &e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    getline(f, line);
    if (line.compare("date | value") != 0)
    {
        std::cout << "Error: bad heading" << std::endl;
        return ;
    }
    while (getline(f, line))
    {
        pos = line.find(" | ");
        if (pos == std::string::npos) //npos e'una costante statica della classe string che rappresenta una posizione invalida o non trovata in una stringa
            std::cout << "Error: Separator \" | \" not found" << std::endl;
        else
        {
            before = line.substr(0, pos);
            after = line.substr(pos + 3, line.length());
            std::map<std::string, std::string>::iterator it = this->_data.find(before);
            if (!isDateValid(before))
                std::cout << "Error: bad date" << std::endl;
            else if (it != this->_data.end()) {
                try {
                    if (!isDateValid(before))
                        std::cout << "Error: bad date" << std::endl;
                    if (atof(before.c_str()) >= 0 && atof(after.c_str()) <= 1000) {               
                        checkDigit(after);
                    std::cout << before << " => " << after << " = " << atof(after.c_str()) * this->_data[before] << std::endl;
                    }
                    else
                        std::cout << "Error: bad value" << std::endl;
                }
                catch (std::invalid_argument &e) {
                    std::cout << "Error: bad value" << std::endl;
                }
            }
            else
                std::cout << "Error: don\'t found data in csv" << std::endl;
        }
    }
}
