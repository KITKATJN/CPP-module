#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void)
{
	try
	{
		Form *t = new ShrubberyCreationForm("passport");
		Bureaucrat Al("Alex", 100);
		Al.signForm(*t);
		t->execute(Al);
		delete t;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Form *t = new ShrubberyCreationForm("passport2");
		Bureaucrat Al("Alex2", 145);
		Al.signForm(*t);
		t->execute(Al);
		delete t;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Form *t = new RobotomyRequestForm("passport3");
		Bureaucrat Al("Alex3", 50);
		Al.signForm(*t);
		t->execute(Al);
		delete t;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

		try
	{
		Form *t = new RobotomyRequestForm("passport4");
		Bureaucrat Al("Alex4", 45);
		Al.signForm(*t);
		t->execute(Al);
		delete t;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
