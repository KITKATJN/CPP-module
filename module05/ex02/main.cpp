#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
		ShrubberyCreationForm tt("Sds");
		Bureaucrat Al("Alex2", 145);
		Al.signForm(tt);
		tt.execute(Al);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		RobotomyRequestForm t("passport3");
		Bureaucrat Al("Alex3", 50);
		Al.signForm(t);
		t.execute(Al);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
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
	std::cout << std::endl;
	try
	{
		Form *t = new PresidentialPardonForm("passport5");
		Bureaucrat Al("Alex5", 2);
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
		PresidentialPardonForm t("passport5");
		Bureaucrat Al("Alex5", 26);
		Al.signForm(t);
		t.execute(Al);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Form *t = new PresidentialPardonForm("passport5");
		Bureaucrat Al("Alex5", 2);
		Al.executeForm(*t);
		delete t;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	try
	{
		Form *t1 = new PresidentialPardonForm("passport6");
		Form *t2 = new RobotomyRequestForm("passport7");
		Form *t3 = new ShrubberyCreationForm("passport8");
		Bureaucrat Al("Alex6", 2);
		Al.signForm(*t1);
		Al.executeForm(*t1);
		delete t1;
		Al.signForm(*t2);
		Al.executeForm(*t2);
		delete t2;
		Al.signForm(*t3);
		Al.executeForm(*t3);
		delete t3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
