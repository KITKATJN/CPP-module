#include "Karen.hpp"

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon";
	std::cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup";
	std::cout << " burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra";
	std::cout << "bacon cost more money. You don’t put enough!";
	std::cout << " If you did I would not have to ask";
	std::cout<< "for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and you";
	std::cout << " just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
	void (Karen::*funcPtr[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if (level == levels[i])
			(this->*funcPtr[i])();
	}
}
