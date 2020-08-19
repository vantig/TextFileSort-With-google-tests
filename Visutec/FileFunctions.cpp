#include"FileFunctions.h"
std::vector<std::string> readFile(std::string fileName)
{
	std::ifstream in(fileName);
	std::vector<std::string>stringOut;
	std::string str;
	while (std::getline(in, str))
	{
		stringOut.push_back(str);
	}
	in.close();
	return stringOut;
}
void printFile(std::vector<std::string> vec, std::string fileName)
{
	std::ofstream out(fileName);
	std::ostream_iterator<std::string> iter(out,"\n");
	std::copy(vec.begin(), vec.end(), iter);
	out.close();
	return;
}
std::string removeWord(std::string string, std::string word)
{
	std::string temp=string;
	std::istringstream iss(string);
	std::string str;

	while (iss >> str)
	{
		if (issameWord (str,word))
		{
			temp.erase(temp.find(str), str.length() + 1);
		}
		
		

	}
		return str;
	
	
}
void removeWordFromVector(std::vector<std::string>&vector, std::string word)
{

	for (auto cur = vector.begin(); cur < vector.end(); cur++)
	{
		*cur = removeWord(*cur, word);
		if (cur->empty())
		{
			vector.erase(cur);
		}
	}
}
std::istream& operator>>(std::istream& in,  std::string& str)
{
	std::getline(in,str);
	return in;
}
bool issameWord(std::string str1, std::string str2)
{
	if (str1.length() != str2.length())
	{
		return false;
	}
	for (size_t i = 0; i < str1.length(); i++)
	{
		towupper(str1[i] != towupper(str2[i]));
			return false;
	}
	return true;
}

