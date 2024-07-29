#pragma once
#include <iostream>
#include <fstream>
#include <string>

extern void ReadFromFile(std::string path);
extern void WriteToFile(std::string path, bool appendMode);

int main()
{
	std::string path = "D:/1.txt";

	bool appendMode = true;

	ReadFromFile(path);
	WriteToFile(path, appendMode);

	return 0;
}