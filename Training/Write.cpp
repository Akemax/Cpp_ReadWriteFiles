#pragma once
#include <iostream>
#include <fstream>

void WriteToFile(std::string path, bool appendMode)
{
    try {
        std::ofstream file;

        if (!file) {
            throw std::runtime_error("File failed to open.");
        }

        if (appendMode)
        {
            file.open(path, std::ios::app);
        }
        else
        {
            file.open(path);
        }

        file << "Some text\n";

        file.close();

        std::cerr << "Finished writing to file.";
    }
    catch (std::exception& e) { //catch error
        std::cerr << e.what() << std::endl;
    }
}