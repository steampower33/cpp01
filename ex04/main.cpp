#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	std::ifstream inFile;
	std::ofstream outFile;
	std::string file, s1, s2, text;
	size_t file_len, s1_len, s2_len;

	// Check Arguments
	if (argc != 4)
	{
		std::cout << "Error : The number of parameters is incorrect" << std::endl;
		return 1;
	}

	// Check s1, s2 length
	s1 = argv[2];
	s2 = argv[3];
	s1_len = s1.length();
	s2_len = s2.length();
	if (s1_len == 0 || s2_len == 0)
	{
		std::cout << "Error : s1 or s2 length is 0" << std::endl;
		return 1;
	}

	// Check is file exist or ok
	file = argv[1];
	file_len = file.length();
	if (file_len == 0)
	{
		std::cout << "Error : file length is 0" << std::endl;
		return 1;
	}
	inFile.open(file);
	if (inFile.fail())
	{
		std::cout << "Error : inFile does not open" << std::endl;
		return 1;
	}
	file.append(".replace");
	outFile.open(file.c_str());
	if (outFile.fail())
	{
		std::cout << "Error : outFile does not open" << std::endl;
		return 1;
	}
	// Replace text
	while (true)
	{
		std::getline(inFile, text);
		size_t pos = 0;
		while (true)
		{
			pos = text.find(s1, pos);
			if (pos == std::string::npos)
				break ;
			text.erase(pos, s1_len);
			text.insert(pos, s2);
			pos += s2_len;
		}
		outFile << text;
		if (inFile.eof())
			break ;
		outFile << std::endl;
	}
	return 0;
}