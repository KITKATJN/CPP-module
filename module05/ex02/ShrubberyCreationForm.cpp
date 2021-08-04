#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string const &target ):
	Form(target, 145, 137), target(target){

	}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &bure ):
	Form(bure), target(bure.target){
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= ( const ShrubberyCreationForm &bure ){
	target = bure.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char* ShrubberyCreationForm::FileException::what() const throw(){
	return "ShrubberyCreation FileException: error with file";
}

	std::string const trees = "    _\\/_\n"
"     /\\\n"
"     /\\\n"
"    /  \\\n"
"    /~~\\o\n"
"   /o   \\\n"
"  /~~*~~~\\\n"
" o/    o \\\n"
" /~~~~~~~~\\~`\n"
"/__*_______\\\n"
"     ||\n"
"   \\====/\n"
"    \\__/\n"
"          .     .  .      +     .      .          .\n"
"     .       .      .     #       .           .\n"
"        .      .         ###            .      .      .\n"
"      .      .   \"#:. .:##\"##:. .:#\"  .      .\n"
"          .      . \"####\"###\"####\"  .\n"
"       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n"
"  .             \"#########\"#########\"        .        .\n"
"        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n"
"     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n"
"                .\"##\"#####\"#####\"##\"           .      .\n"
"    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n"
"      .     \"#######\"##\"#####\"##\"#######\"      .     .\n"
"    .    .     \"#####\"\"#######\"\"#####\"    .      .\n"
"            .     \"      000      \"    .     .\n"
"       .         .   .   000     .        .       .\n"
".. .. ..................O000O........................ ...... ...\n"
"             /\\\n"
"            <  >\n"
"             \\/\n"
"             /\\\n"
"            /  \\\n"
"           /++++\\\n"
"          /  ()  \\\n"
"          /      \\\n"
"         /~`~`~`~`\\\n"
"        /  ()  ()  \\\n"
"        /          \\\n"
"       /*&*&*&*&*&*&\\\n"
"      /  ()  ()  ()  \\\n"
"      /              \\\n"
"     /++++++++++++++++\\\n"
"    /  ()  ()  ()  ()  \\\n"
"    /                  \\\n"
"   /~`~`~`~`~`~`~`~`~`~`\\\n"
"  /  ()  ()  ()  ()  ()  \\\n"
"  /*&*&*&*&*&*&*&*&*&*&*&\\\n"
" /                        \\\n"
"/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n"
"           |   |\n"
"          |`````|\n"
"          \\_____/\n";

void ShrubberyCreationForm::execute(Bureaucrat const & executor){
	if (this->getIsSigned() == false)
		throw FormSignException();
	if (executor.getGrade() < 1 || executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	std::ofstream out(this->target + "_shrubbery", std::ios::out | std::ios::trunc);
	if (out.is_open() == false || out.bad())
		throw FileException();
	out << trees << std::endl;
	out.close();
}
