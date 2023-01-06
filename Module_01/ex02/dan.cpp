#include <iostream>
#include <iomanip>
#include <cstring>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr;
	std::string &ref = str;

	ptr = &str;
	std::cout << &str << std::endl;
	std::cout << &ptr << std::endl;
	std::cout << &ref << std::endl << std::endl;

	std::cout << str << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
}