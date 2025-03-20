#include "Contact.hpp"
#include <iostream>
#include <cstring>

Contact::Contact()
{
	std::cout << "Je construit mon contact" << std::endl;
}

void Contact::set(std::string *data)
{
	_first_name = data[0];
	_last_name = data[1];
	_nickname = data[2];
	_phone_number = data[3];
	_darkest_secret = data[4];
}

void Contact::print_contact()
{
	std::cout << _first_name << std::endl;
	std::cout << _last_name << std::endl;
	std::cout << _nickname << std::endl;
	std::cout << _phone_number << std::endl;
	std::cout << _darkest_secret << std::endl;
}

void print_2(std::string data)
{
	int a;
	int b;
	a = 10 - data.size();
	if (a == 0)
		std::cout << data;
	else if (a >= 1)
	{
		b = 0;
		while (b < a)
		{
			std::cout << " ";
			b++;
		}
		std::cout << data;
	}
	else
		std::cout << data.substr(0, 9) + ".";
	std::cout << "|";
}

void Contact::print()
{
	std::string index;
	std::cout << "|";
	print_2(_first_name);
	print_2(_last_name);
	print_2(_nickname);
}

Contact::~Contact()
{
	std::cout << "Je detruit mon contact" << std::endl;
}
