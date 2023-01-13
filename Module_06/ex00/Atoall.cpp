#include "Atoall.hpp"

Atoall::Atoall()
{
	std::cout << "Default costructor called." << std::endl;
}

Atoall::Atoall(const Atoall &rhs)
{
	if (this != &rhs)
		*this = rhs;
}

Atoall::~Atoall()
{
	std::cout << "Default destructor called." << std::endl;
}

Atoall &Atoall::operator=(const Atoall &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	(void)rhs;
	return *this;
}

void Atoall::convert(const std::string &input)
{
	std::string stypes[6] = {"-inff", "+inff", "nanf", "nan", "-inf", "+inf"};	

	//difficli da mettere nella classe a causa dei messaggi "impossibile" quindi stampo direttamente 
	std::string _char = "";
	int 		_int = 0;
	float		_float = 0;
	double		_double = 0;

	/*
		se ha un carattere, è printabile e non è un digit allora dovrebbe essere un char ma chi sono io per dirlo
	*/
	if (std::isprint(input[0]) && !std::isdigit(input[0]) && input.length() == 1)
	{
		_char = input[0];
		std::cout << BOLDCYAN "Char: " RESET << CYAN << _char << RESET << std::endl;
		std::cout << BOLDGREEN "Int: " << GREEN << static_cast<int>(_char[0]) <<  RESET <<std::endl;
		std::cout << BOLDMAGENTA "Float: " << MAGENTA << static_cast<float>(_char[0]) << ".0f" RESET <<std::endl;
		std::cout << BOLDYELLOW "Double: " << YELLOW << static_cast<double>(_char[0]) << ".0" RESET <<std::endl;
			return;
	}
// int
// c_str() restituisce un puntatore a un array di caratteri che rappresenta la stringa in memoria.
// Il puntatore restituito punta alla prima posizione dell'array di caratteri che rappresenta la stringa 
// e può essere utilizzato per accedere a ogni singolo carattere della stringa.
	_int = std::atoi(input.c_str());

	//int o double?
	if (input[input.length() - 1] == 'f') //float
	{
		_float = std::atof(input.c_str());
		_double = static_cast<double>(_float);
	}
	else
	{
		_double = std::atof(input.c_str());
		_float = _double = static_cast<double>(_double);
	}
	//controllo se è un carattere speciale dellárray stypes
	for (int i = 0; i < 6; i++)
		if(input == stypes[i])
		{
			_char = "impossible";
			break ;
		}
	//stampabile?
	if (_char == "" && std::isprint(_int))
	{
		_char = "'";
		_char += static_cast<char>(_int);
		_char += "'";
	}
	else if (_char == "") //spoiler: no, non lo è
		_char = "Not displayable";
	
	std::cout << BOLDCYAN "Char: " RESET << CYAN << _char << RESET << std::endl;
	if (_char == "impossible")
		std::cout <<  BOLDGREEN "Int: " << GREEN "Impossible." RESET <<std::endl;
	else
		std::cout << BOLDGREEN "Int: " << GREEN << _int << RESET <<std::endl;
	if (_char == "impossible" && _float == 0)
	{
		std::cout <<  BOLDMAGENTA "Float: " << MAGENTA "Impossible." RESET << std::endl;
		std::cout <<  BOLDYELLOW "Double: " << YELLOW "Impossible." RESET << std::endl;
		return;
	}
	else
	{
		//verifico se la parte decimale del numero è uguale a 0. se _float è un numero intero, la parte decimale sarà 0 
		if (_char != "impossible" && _float - static_cast<int>(_float) == 0)
		{
			std::cout <<  BOLDMAGENTA "Float: " << MAGENTA << _float << ".0f" RESET <<std::endl;
			std::cout <<  BOLDYELLOW "Double: " << YELLOW << _double << ".0" RESET <<std::endl;			
		}
		else
		{
			std::cout <<  BOLDMAGENTA "Float: " << MAGENTA << _float << ".0f" RESET <<std::endl;
			std::cout <<  BOLDYELLOW "Double: " << YELLOW << _double << ".0" RESET <<std::endl;
		}
	}
	std::cout << std::endl;
}
