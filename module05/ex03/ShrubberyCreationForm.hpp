#ifndef __SHRUBBERYCREATIONFORM__HPP
#define __SHRUBBERYCREATIONFORM__HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string target;
	ShrubberyCreationForm(/* args */);
public:
	ShrubberyCreationForm( std::string const &target );
	~ShrubberyCreationForm();
	ShrubberyCreationForm( const ShrubberyCreationForm &bure );
	ShrubberyCreationForm& operator= ( const ShrubberyCreationForm &bure );

	class FileException:public std::exception{
		virtual const char* what() const throw();
	};

	void execute(Bureaucrat const & executor) const ;
};

#endif
