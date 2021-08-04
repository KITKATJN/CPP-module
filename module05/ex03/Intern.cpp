#include "Intern.hpp"

const char* Intern::FormNotFind::what() const throw(){
	return "Intern does not find form";
};

int for_switch(std::string &name_of_form){
	std::string arr_of_form[] = {"robotomy", "shrubbery", "presidential"};
	for (int i = 0; i < 3; i++){
		if (name_of_form.find(arr_of_form[i]) != std::string::npos)
			return i;
	}
	return 5;
}

Form * Intern::makeForm (std::string name_of_form, std::string target){
	switch (for_switch(name_of_form))
	{
	case 0:
		std::cout << "Intern creates RobotomyRequestForm" << std::endl;
		return new RobotomyRequestForm(target);
		break;
	case 1:
		std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
		return new ShrubberyCreationForm(target);
		break;
	case 2:
		std::cout << "Intern creates PresidentialPardonForm" << std::endl;
		return new PresidentialPardonForm(target);
		break;
	default:
		break;
	}
	throw FormNotFind();
	return nullptr;
}

Intern::~Intern()
{
}

Intern::Intern()
{
}
