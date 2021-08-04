#ifndef __INTERN_HPP__
#define __INTERN_HPP__
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
public:
	Intern();
	Intern( std::string const &target );
	~Intern();
	Intern( const Intern &bure );
	Intern& operator= ( const Intern &bure );
	class FormNotFind:public std::exception{
		virtual const char* what() const throw();
	};

	Form *  makeForm (std::string name_of_form, std::string target);
};

#endif
