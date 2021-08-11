#include "whatever.hpp"

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;
	float a1 = 10.12, b1 = 10.52;
	std::cout << "a1 = " << a1 << " b1 = " << b1 << std::endl;
	::swap(a1, b1);
	std::cout << "a1 = " << a1 << " b1 = " << b1 << std::endl;
	std::cout << "min = " << ::min(a1, b1) << " max = " << ::max(a1, b1) << std::endl;

	Awesome aw1(5);
	Awesome aw2(6);
	std::cout << "aw1 = " << aw1.getN() << " aw2 = " << aw2.getN() << std::endl;
	::swap(aw2, aw1);
	std::cout << "aw1 = " << aw1.getN() << " aw2 = " << aw2.getN() << std::endl;
	Awesome minA =::min(aw1, aw2);
	Awesome maxA = ::max(aw1, aw2);
	std::cout << "min = " << minA.getN() << " max = " << maxA.getN() << std::endl;

	return 0;
}
