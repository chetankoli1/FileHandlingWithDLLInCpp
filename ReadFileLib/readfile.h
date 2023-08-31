#pragma once

#ifdef READFILELIB_EXPORTS
#define readapi __declspec(dllexport)
#else
#define readapi __declspec(dllimport)
#endif

#include<iostream>

class readapi Read
{
private:
	std::string msFullPath;

public:
	Read(std::string);
	~Read();

	void execute();
};

