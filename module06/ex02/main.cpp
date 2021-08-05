#include "Base.hpp"

int main(void)
{
	srand(time(0));
	Base *b1 = generate();
	identify(b1);
	identify(*b1);

	Base *b2 = generate();
	identify(b2);
	identify(*b2);

	Base *b3 = generate();
	identify(b3);
	identify(*b3);

	return 0;
}
