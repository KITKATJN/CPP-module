#include "header.hpp"

void Contact::set_contact()
{
	std::cout << "First name:" << std::endl;
	std::getline(std::cin, Contact::firstname);
	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, Contact::lastname);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, Contact::nickname);
	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, Contact::phone_number);
	std::cout << "Darkest secret:" << std::endl;
	std::getline(std::cin, Contact::darkest_secret);
	std::cout << "Contact add!" << std::endl;
}

std::string Contact::get_contact(std::string str_contact)
{
	std::string str = "Not valid input";
	if (str_contact == "firstname")
		return Contact::firstname;
	if (str_contact == "lastname")
		return Contact::lastname;
	if (str_contact == "darkest_secret")
		return Contact::darkest_secret;
	if (str_contact == "phone_number")
		return Contact::phone_number;
	if (str_contact == "nickname")
		return Contact::nickname;
	return str;
}
