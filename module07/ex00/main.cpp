#include "whatever.hpp"

int main()
{
	int a = 10, b = 50;
	std::cout << "a = " << a << " b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " b = " << b << std::endl;
	std::cout << "min = " << min(a, b) << " max = " << max(a, b) << std::endl;
	std::cout << std::endl;
	float a1 = 10.12, b1 = 10.52;
	std::cout << "a1 = " << a1 << " b1 = " << b1 << std::endl;
	swap(a1, b1);
	std::cout << "a1 = " << a1 << " b1 = " << b1 << std::endl;
	std::cout << "min = " << min(a1, b1) << " max = " << max(a1, b1) << std::endl;
	std::cout << std::endl;
	std::string a2 = "string1", b2 = "string2";
	std::cout << "a2 = " << a2 << " b2 = " << b2 << std::endl;
	swap(a2, b2);
	std::cout << "a2 = " << a2 << " b2 = " << b2 << std::endl;
	std::cout << "min = " << min(a2, b2) << " max = " << max(a2, b2) << std::endl;

	return 0;
}
