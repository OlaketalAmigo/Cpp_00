#include "PhoneBook.hpp"
#include <stdlib.h>
#include <cstring>

PhoneBook::PhoneBook()
{
	std::cout << "Je construit mon phonebook" << std::endl;
	next_slot = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Je detruit mon phonebook" << std::endl;
}

void PhoneBook::getCmd(const std::string choice)
{
	if (choice == "ADD")
		add_contact();
	else if (choice == "SEARCH")
		display_search();
	else if (choice == "EXIT")
		exit(0);
	return;
}

void PhoneBook::display_search()
{
	std::string buf;
	std::cout << "--------------------------------------------" << std ::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std ::endl;
	std::cout << "--------------------------------------------" << std ::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|         " << i;
		contacts[i].print();
		std::cout << "" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
	}
	std::cout << "Please select your index's contact" << std::endl;
	getline(std::cin, buf);
	getline(std::cin, buf);
	char a = buf[0];
	if (a >= 48 && a <= 55 && buf.size() == 1)
	{
		int index = a - 48;
		contacts[index].print_contact();
	}
	else
		std::cout << "Something is wrong with number, number must be between 1 and 8" << std::endl;
}

int check_anwer(std::string choice, int i)
{
	if (choice.empty() == true)
		return (FAILURE);
	else if (i == 0 || i == 1)
	{
		for (size_t i = 0; i < choice.size(); i++)
			if (isalpha(choice[i]) == false && choice[i] != 32 && choice[i] != 45)
			{
				return (FAILURE);
			}
	}
	else if (i == 3)
	{
		for (size_t i = 0; i < choice.size(); i++)
			if (isdigit(choice[i]) == false || i >= 10)
			{
				return (FAILURE);
			}
	}
	return (SUCCESS);
}

void PhoneBook::add_contact()
{
	std::string tab[5] = {"First name",
						  "Last name",
						  "Nickname",
						  "Phone Number",
						  "Darkest Secret"};
	std::string data[5];
	std::string choice;
	getline(std::cin, choice);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter " << tab[i] << std::endl;
		getline(std::cin, choice);
		if (std::cin.eof())
			exit(0);
		if (check_anwer(choice, i) == FAILURE)
		{
			std::cout << "Forbidden characters used" << std::endl;
			i -= 1;
			continue;
		}
		data[i] = choice;
	}
	set_contact(data);
}

void PhoneBook::set_contact(std::string *data)
{
	contacts[next_slot].set(data);
	next_slot++;
	if (next_slot == 8)
		next_slot = 0;
}