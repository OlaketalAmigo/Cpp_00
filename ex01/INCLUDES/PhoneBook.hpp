#include <iostream>

#include "Contact.hpp"

#pragma once

#define FAILURE 1
#define SUCCESS 0

class PhoneBook
{
private:
	Contact contacts[8];
	int next_slot;
	void add_contact();
	void display_search();
	void set_contact(std::string *data);

public:
	PhoneBook();
	~PhoneBook();
	void getCmd(const std::string choice);
};