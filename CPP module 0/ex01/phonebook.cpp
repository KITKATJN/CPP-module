#include "header.hpp"

int	Phonebook::get_fill()
{
	return Phonebook::fill;
}

void	Phonebook::add_contact(int index)
{
	Phonebook::contacts[index].set_contact();
	if (fill < 8)
		Phonebook::fill++;
}

Phonebook::Phonebook()
{
	Phonebook::fill = 0;
}

std::string	truncate(std::string str)
{
	std::string	tmp;
	if (str.length() > 10){
		tmp = str.substr(0, 9) + ".";
		return tmp;
	}
	return str;
}

void	Phonebook::print_phonebook()
{
	for (int i = 0; i < this->fill; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(this->contacts[i].get_contact("firstname"));
		std::cout << "|" << std::setw(10) << truncate(this->contacts[i].get_contact("lastname"));
		std::cout << "|" << std::setw(10) << truncate(this->contacts[i].get_contact("nickname")) << "|" << std::endl;
	}
}

void	Phonebook::search_contact(int i)
{
	if (i > Phonebook::fill){
		std::cout << "Phonebook doen't contain as many contacts" << std::endl;
		return ;
	}
	else {
		i--;
		if (i < 0)
			std::cout << "index wrong!" << std::endl;
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(this->contacts[i].get_contact("firstname"));
		std::cout << "|" << std::setw(10) << truncate(this->contacts[i].get_contact("lastname"));
		std::cout << "|" << std::setw(10) << truncate(this->contacts[i].get_contact("nickname")) << "|" << std::endl;
	}
}
