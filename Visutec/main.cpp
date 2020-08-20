#include"FileFunctions.h"
#include<iostream>
int main()
{
	std::vector<std::string> stringOuts;
	stringOuts = readFile("Text.txt");
	SortVector(stringOuts);
	printFile(stringOuts, "Output.txt");
	
	return 0;
}