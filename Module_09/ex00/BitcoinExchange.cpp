#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string PathFile)
{
	ParseMap(PathFile);
}

BitcoinExchange::~BitcoinExchange()
{
}

static std::string  getFile(std::string path)
{
    std::ifstream   f;
    std::string     buff;
    std::string     res;
    f.open(path);
    if (!f)
    {
        res = "";
    }
    else
    {
        while (std::getline(f, buff))
        {
            if (f.eof())
                break;
            res += buff;
            res += "\n";
        }
        res += buff;
    }
    f.close();
    return (res);
}

void BitcoinExchange::ParseMap(std::string FilePath)
{
	std::string key, file, value, nl;
	int			i;
	nl = "\n";

	
	getFile(FilePath);

}
