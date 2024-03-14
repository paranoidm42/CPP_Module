#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int argc, char* argv[]) {

	if (argc != 4)
	    return std::cerr << "Usage: <program> <filename> <s1> <s2>" <<  std::endl, 0;

	std::ifstream i_input(argv[1]);
	if(!i_input.is_open())
		return std::cerr << "File error!!" << std::endl, 0;

	std::string outputFilename = std::string(argv[1]) + ".replace";
	std::ofstream o_output(outputFilename.c_str());
	if(!o_output.is_open())
		return std::cerr << "File error!!" << std::endl, 0;

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string line;

	while (std::getline(i_input, line)) {
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos) {
			line.replace(pos, s1.length(), s2);
			pos += s2.length();
		}
		o_output << line << std::endl;
	}

	i_input.close();
	o_output.close();

    return 0;
}
