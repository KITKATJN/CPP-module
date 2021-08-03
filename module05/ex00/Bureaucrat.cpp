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
