#include "PhoneBook.hpp"
#include <stdlib.h>

int main(void)
{
	PhoneBook pog;
	std::string choice;

	std::cout << "Welcome to my amazing Phonebook !" << std::endl;
	while (1)
	{

		std::cout << "Type ADD, SEARCH or EXIT, anything else is useless !" << std::endl;
		std::cin >> choice;
		if (std::cin.eof())
			exit(0);
		pog.getCmd(choice);
	}
	return 0;
}