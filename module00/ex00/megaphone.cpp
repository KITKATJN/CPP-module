#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	int i = 1, j;

	while (i < argc)
	{
		j = 0;
		std::string str(argv[i]);
		while (j < (int)str.length())
		{
			std::cout << (char)(std::toupper(str[j]));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return 0;
}
