#include "pch.h"
#include "writefile.h"

#include <iostream>
#include <fstream>
#include<string>

Write::Write() {
	filePath = "";
	fileName = "";
}

Write::~Write() {

}

Write::Write(std::string path, std::string name)
{
	filePath = path;
	fileName = name;
}

std::string Write::getCompletePath()
{
	if (filePath.back() == '/') {
		return filePath + fileName;
	}
	return filePath +"/"+ fileName;
}

void Write::execute() {
	std::ofstream outFile;
	std::ifstream inFile;
	std::string lines;

	try {
		if (filePath.empty() || fileName.empty()) {
			throw std::string("File path and name are mandatory.");
		}
		else {
			outFile.open(filePath + fileName);
			while (std::getline(std::cin, lines)) {
				outFile << lines << std::endl;

				if (lines == "end")
				{
					break;
				}
			}
			outFile.close();
		}

	}
	catch(std::string exp){
		std::cerr << "exception: " << exp << std::endl;
	}

}

