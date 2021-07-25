#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>
#include <iostream>

class Brain
{
protected:
private:
	/* data */
public:
	std::string ideas[100];
	Brain( void );
	~Brain();
	Brain( const Brain &brain );
	Brain& operator= ( const Brain &brain );
};


#endif
