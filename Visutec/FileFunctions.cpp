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
	std::istringstream iss(temp);
	std::string str;

	while (iss >> str)
	{
		if (issameWord (str,word))
		{
			temp.erase(temp.find(str), str.length() + 1);
		}
		
		

	}
		return temp;
	
	
}
void removeWordFromVector(std::vector<std::string>&vector, std::string word)
{
	for (size_t i = 0; i < vector.size(); i++)
	{
		vector[i] = removeWord(vector[i], word);
	}
	vector.erase(remove(vector.begin(), vector.end(), ""), vector.end());

}

bool issameWord(std::string str1, std::string str2)
{
	if (str1.length() != str2.length())
	{
		return false;
	}
	for (size_t i = 0; i < str1.length(); i++)
	{
		if(toupper(str1[i]) != toupper(str2[i]))
			return false;
	}
	return true;
}
void SortVector(std::vector<std::string>& vector)
{
	std::sort(vector.begin(), vector.end(), [](auto l, auto r)
		{


			return std::lexicographical_compare(std::begin(l), std::end(l), std::begin(r), std::end(r),
				[](char cl, char cr) { return tolower(cl) < tolower(cr); });


		});
}

