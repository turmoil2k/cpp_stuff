#include <iostream>

void Log(const char* msg)
{
	std::cout << msg << std::endl;
}

void StartLog()
{
	Log("Start Log From LogCPP");
}