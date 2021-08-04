#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string const target;
	RobotomyRequestForm(/* args */);
public:
	RobotomyRequestForm( std::string const &target );
	~RobotomyRequestForm();
	RobotomyRequestForm( const RobotomyRequestForm &bure );
	RobotomyRequestForm& operator= ( const RobotomyRequestForm &bure );

	void execute(Bureaucrat const & executor) const;
};


#endif
