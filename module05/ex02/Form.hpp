#ifndef __FORM__HPP__
#define __FORM__HPP__

#include <string>
#include <iostream>
#include <ctime>
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string name;
	bool is_signed;
	int grade_to_sign;
	int grade_to_execute;
	Form( void );
public:
	Form( std::string name, int grade_to_sign, int grade_to_execute );
	virtual ~Form();
	Form( const Form &bure );
	Form& operator= ( const Form &bure );

	class GradeTooHighException:public std::exception{
		virtual const char* what() const throw();
	};

	class GradeTooLowException:public std::exception{
		virtual const char* what() const throw();
	};

	class FormSignException:public std::exception{
		virtual const char* what() const throw();
	};

	std::string const getName( void ) const;
	int getGradeToSign( void ) const;
	int getGradeToExecute( void ) const;
	bool getIsSigned( void ) const;

	void beSigned( Bureaucrat const &bure );
	virtual void execute(Bureaucrat const & executor) = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
