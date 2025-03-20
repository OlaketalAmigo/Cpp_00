#include <string>

#pragma once

class Contact
{
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	Contact();
	void set(std::string *data);
	void print();
	void print_contact();
	~Contact();
};