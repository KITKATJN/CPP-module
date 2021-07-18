#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon";
	std::cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra";
	std::cout << "bacon cost more money. You don’t put enough!";
	std::cout << std::endl;
	std::cout << "If you did I would not have to ask";
	std::cout<< "for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << std::endl;
	std::cout << " I’ve been coming here for years and you";
	std::cout << " just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
	void (Karen::*funcPtr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if (level == levels[i]){
			for (int j = i; j < 4; j++){
				(this->*funcPtr[j])();
				std::cout << std::endl;
			}
			return ;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]";
	std::cout << std::endl;
}
