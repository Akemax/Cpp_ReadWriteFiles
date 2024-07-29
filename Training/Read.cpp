#pragma once
#include <iostream>
#include <fstream>
#include <string>

void ReadFromFile(std::string path)
{								     // path to file
	std::ifstream file;
	std::string read;

	file.open(path);

	if (!file)
	{
		throw std::runtime_error("File failed to open.");
	}
	else
	{
		std::cerr << "File succeessfully opened.\n" << std::endl;
	}
	while (getline(file, read))											// read all file lines until end
	{
		std::cout << read << std::endl;
	}

	file.close();

	std::cerr << "\nFile successfully readed.\n" << std::endl;
}