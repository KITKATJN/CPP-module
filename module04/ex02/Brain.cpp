#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain( const Brain &brain ){
	for (int i = 0; i < 100; i++){
		ideas[i] = brain.ideas[i];
	}
	std::cout << "Brain copiyed" << std::endl;
}

Brain& Brain::operator= ( const Brain &brain )
{
	for (int i = 0; i < 100; i++){
		ideas[i] = brain.ideas[i];
	}
	std::cout << "Brain operator =" << std::endl;
	return *this;
}
