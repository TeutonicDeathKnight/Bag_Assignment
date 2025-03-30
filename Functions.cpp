#include <iostream>
#include <string>
#include "Functions.h"

//clearInputStream()
void clearInputStream()
{
	//clear 
	std::cin.clear();
	//ignore rest of line determining max length of line
	//	until the newline character appears
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}