#include "header.hpp"

int main()
{
	Phonebook phonebook;
	std::string str;
	int index = 0;

	while (1)
	{
		std::cout << ">> ";
		std::getline(std::cin, str);
		if (str == "ADD")
		{
			phonebook.add_contact(index);
			if (index == NUM_CONTACTS - 1)
				index = -1;
			index++;
		}
		else if (str == "SEARCH")
		{
			if (phonebook.fill == 0)
				std::cout << "Phonebook clear, add some contact before search" << std::endl;
			else {
				phonebook.print_phonebook();
				std::cout << "Enter the desired index" << std::endl;
				std::cout << ">> ";
				std::getline(std::cin, str);
				if((int)str[0] > 47 && (int)str[0] < 58 && str[0] != '0' && str.length() == 1)
				{
					phonebook.search_contact((int)str[0] - '0');
				}
				else
					std::cout << "input index wrong !" << std::endl;
			}
		}
		else if (str == "EXIT")
			break ;
	}
	std::cout << "bye!" << std::endl;
	return 0;
}
