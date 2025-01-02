#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if(s1.empty())
	{
		std::cerr << "Error: s1 (the search string) cannot be empty." << std::endl;
		return 1;
	}
	if(s2.find(s1) != std::string::npos)
	{
		std::cerr << "Warning: s2 contains s1. This may cause repeated expansions." << std::endl;
	}

	std::ifstream ifs(filename);
	if (!ifs.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << std::endl;
		return 1;
	}

	std::string outputFilename = filename + ".replace";
	std::ofstream ofs(outputFilename);
	if (!ofs.is_open())
	{
		std::cerr << "Could not create or open file " << outputFilename <<std::endl;
		return 1;
	}

	std::string content(
		(std::istreambuf_iterator<char>(ifs)),
		(std::istreambuf_iterator<char>())
	);

	std::size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos)
	{
		content.erase(pos, s1.size());
		content.insert(pos, s2);
		pos += s2.size();
	}
	ofs << content;
	ofs.close();

	return 0;
}