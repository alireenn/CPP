#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    BitcoinExchange btc;

    if (ac != 2)
        std::cout << "Error: bad arguments" << std::endl;
    else
        btc.doExchange(av[1]);
}