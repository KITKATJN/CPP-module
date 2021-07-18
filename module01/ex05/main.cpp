#include "Karen.hpp"

int main()
{
	Karen karen;
	std::string level[4] = {"INFO", "ERROR", "WARNING", "DEBUG"};

	for (int i = 0; i < 4; i++){
		karen.complain(level[i]);
	}
	return 0;
}
