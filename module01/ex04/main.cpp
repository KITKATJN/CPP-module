#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string replace(std::string &line,
	std::string const &s1, std::string const &s2)
{
	std::stringstream ss;

	if (line.find(s1) == std::string::npos)
		return line;
	else{
		size_t i;
		while (line.find(s1) != std::string::npos){
			i = 0;
			while (i < line.find(s1))
				ss << line[i++];
			ss << s2;
			line = line.substr(i + s1.length());
		}
		ss << line;
	}
	return ss.str();
}

int main(int argc, char **argv)
{
	if (argc != 4){
		std::cout << "Error number arguments" << std::endl;
		return -1;
	}
	std::string file_name(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);
	if (file_name.empty() || s1.empty() || s2.empty()){
		std::cout << "One of argumets is empty" << std::endl;
		return -1;
	}
	std::ifstream file(file_name);
	if (!file.is_open()){
		std::cout << "input file don't open" << std::endl;
		return -1;
	}
	std::ofstream output(file_name + ".replace", std::ios_base::trunc);
	if (!output.is_open()){
		std::cout << "output file don't open" << std::endl;
		return -1;
	}
	std::string line;
	while (std::getline(file, line))
	{
		output << replace(line, s1, s2);
		if (!file.eof())
			output << std::endl;
	}
	file.close();
	output.close();
	return 0;
}
