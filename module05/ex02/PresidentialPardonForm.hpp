#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	std::string const target;
	PresidentialPardonForm(/* args */);
public:
	PresidentialPardonForm( std::string const &target );
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm( const PresidentialPardonForm &bure );
	PresidentialPardonForm& operator= ( const PresidentialPardonForm &bure );

	class FileException:public std::exception{
		virtual const char* what() const throw();
	};

	void execute(Bureaucrat const & executor) const;
};

#endif
