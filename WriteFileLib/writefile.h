#pragma once
#ifdef WRITEFILELIB_EXPORTS
#define writeapi __declspec(dllexport)
#else
#define writeapi __declspec(dllimport)
#endif

#include<iostream>

class writeapi Write
{
private:
	std::string filePath,fileName;
	std::string completePath;
public:
	Write();
	Write(std::string, std::string);
	~Write();

	std::string getCompletePath();

	void execute();

};


