#include"FileFunctions.h"
#include<iostream>
int main()
{
	std::vector<std::string> stringOuts;
	stringOuts = readFile("Text.txt");
	printFile(stringOuts, "Output.txt");
	return 0;
}