#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string const &target ):
	Form(target, 72, 45), target(target){

	}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &bure ):
	Form(bure), target(bure.target){
}

RobotomyRequestForm& RobotomyRequestForm::operator= ( const RobotomyRequestForm &bure ){
	(void)bure;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const {
	if (this->getIsSigned() == false)
		throw FormSignException();
	if (executor.getGrade() < 1 || executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	srand(time(0));
	std::cout << "VZZ BRZZ ZZZ" << std::endl;
	if (rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully" << std::endl;
	else
		std::cout << target << " has been robotomized failure" << std::endl;
}
