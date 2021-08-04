#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string const &target ):
	Form(target, 25, 5), target(target){

	}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &bure ):
	Form(bure), target(bure.target){
}

PresidentialPardonForm& PresidentialPardonForm::operator= ( const PresidentialPardonForm &bure ){
	(void)bure;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const{
	if (this->getIsSigned() == false)
		throw FormSignException();
	if (executor.getGrade() < 1 || executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::cout << target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
