#include "Form.hpp"

Form::Form( std::string name, int grade_to_sign, int grade_to_execute ):
	name(name),
	grade_to_sign(grade_to_sign),
	grade_to_execute(grade_to_execute)
{
	is_signed = false;
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
	if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
}

Form::Form( const Form &bure ):
	name(bure.name),
	is_signed(bure.is_signed),
	grade_to_sign(bure.grade_to_sign),
	grade_to_execute(bure.grade_to_execute)
{
	if (grade_to_execute > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
	if (grade_to_execute < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
}

Form& Form::operator= ( const Form &bure ){
	if (this == &bure)
		return *this;
	is_signed = bure.is_signed;
	grade_to_execute = bure.grade_to_execute;
	grade_to_sign = bure.grade_to_sign;
	name = bure.name;
	return *this;
}

void Form::beSigned( Bureaucrat const &bure ){
	if (bure.getGrade() > this->getGradeToSign())
		throw GradeTooLowException();
	else if (bure.getGrade() < 1)
		throw GradeTooHighException();
	this->is_signed = true;
}

const char* Form::GradeTooHighException::what() const throw(){
	return "ExceptionForm: grade too high";
};

const char* Form::GradeTooLowException::what() const throw(){
	return "ExceptionForm: grade too low";
};

const char* Form::FormSignException::what() const throw(){
	return "Form exception: form dont sign";
}

bool Form::getIsSigned( void ) const{
	return is_signed;
}

int Form::getGradeToExecute( void ) const{
	return grade_to_execute;
}
std::string const Form::getName( void ) const{
	return name;
}

int Form::getGradeToSign( void ) const{
	return grade_to_sign;
}

std::ostream &operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << ", is signed " << form.getIsSigned();
	out << ", grade to sign " << form.getGradeToSign() << ", grade to execute " << form.getGradeToExecute();
	return out;
}

Form::Form( void )
{
}

Form::~Form()
{
}
