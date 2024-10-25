#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ):name(name), grade(grade){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat( const Bureaucrat &bure ):name(bure.name), grade(bure.grade){
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator= ( const Bureaucrat &bure ){
	//name = bure.name;
	grade = bure.grade;
	return *this;
}

void Bureaucrat::signForm( Form &form ){
	if (form.getIsSigned()){
		std::cout << "Form already sighned" << std::endl;
	}
	else{
		form.beSigned(*this);
		if (form.getIsSigned()){
			std::cout << this->getName() << " signs " << form.getName();
			std::cout << std::endl;
		}
		else{
			std::cout << this->getName() << " cannot signs " << form.getName();
			std::cout << form.getName() << std::endl;
		}
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return "Exception: grade too high";
};

const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return "Exception: grade too low";
};

std::string const Bureaucrat::getName( void ) const{
	return name;
}

int Bureaucrat::getGrade( void ) const{
	return grade;
}

void Bureaucrat::decrement( void ){
	grade--;
	if (grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::increment( void ){
	grade++;
	if (grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::executeForm(Form const & form){
	if (form.getIsSigned() == false){
		std::cout << "Form not sighned" << std::endl;
	}
	else if (form.getGradeToExecute() < grade)
		std::cout << "grade to execute to low" << std::endl;
	else
		form.execute(*this);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bure)
{
	out << bure.getName() << ", bureaucrat grade " << bure.getGrade();
	return out;
}

Bureaucrat::Bureaucrat():name("Alex"), grade(100){
}

Bureaucrat::~Bureaucrat()
{
}
