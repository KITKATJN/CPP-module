#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <string>
#include <iostream>

class Bureaucrat
{
private:
	std::string const name;
	int grade;
public:
	Bureaucrat( std::string name, int grade );
	Bureaucrat( void );
	~Bureaucrat();
	Bureaucrat( const Bureaucrat &bure );
	Bureaucrat& operator= ( const Bureaucrat &bure );

	class GradeTooHighException:public std::exception{
		virtual const char* what() const throw();
	};

	class GradeTooLowException:public std::exception{
		virtual const char* what() const throw();
	};

	std::string const getName( void ) const;
	int getGrade( void ) const;

	void decrement( void );
	void increment( void );
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure);




#endif
