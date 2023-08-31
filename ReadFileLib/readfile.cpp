#include "pch.h"
#include "readfile.h"

#include <iostream>
#include <fstream>
#include<string>

Read::Read(std::string path)
{
	msFullPath = path;
}

Read::~Read() {

}

void Read::execute()
{
	std::ifstream inFile;
	std::string lines;

	try {
		if (msFullPath.empty()) {
			throw std::string("invalid path");
		}
		else {
			inFile.open(msFullPath);

			while (std::getline(inFile, lines)) {
				std::cout << lines << std::endl;
			}

			inFile.close();
		}

	}
	catch (std::string exp) {
		std::cerr << "exception: " << exp << std::endl;
	}
}