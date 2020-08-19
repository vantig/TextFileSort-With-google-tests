#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
#include<iterator>
std::vector<std::string> readFile(std::string fileName);
void printFile(std::vector<std::string> vec, std::string fileName);
std::string removeWord(std::string string, std::string word);
void removeWordFromVector(std::vector<std::string>& vector, std::string word);
std::istream& operator>>(std::istream& in,  std::string& str);
bool issameWord(std::string str1, std::string std2);