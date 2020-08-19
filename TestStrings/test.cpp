#include "pch.h"
#include"FileFunctions.h"
#include"FileFunctions.cpp"

TEST(TCheckFile, ReadfromFile) {
	std::ifstream inv;
	inv.open("C:\\Users\\user\\source\\repos\\Visutec\\Visutec\\Text.txt");
	ASSERT_EQ(1, inv.is_open());
}


TEST(TCheckFile, PrintInFile) {
	std::ofstream outv;
	outv.open("output.txt");
	ASSERT_EQ(1, outv.is_open());
}

TEST(CheckFile, IsEmpty) {
	std::vector<std::string> vec;
	vec = readFile("C:\\Users\\user\\source\\repos\\Visutec\\Visutec\\Text.txt");
	ASSERT_EQ(0, vec.empty());
}

TEST(CheckString, DeleteWord) {
	std::string str;
	str = removeWord("HI, hello, hi, world, Hi, ","HI,");
	EXPECT_EQ(str, "hello, world, ");
	
}


TEST(CheckText, DeleteWord) {
	std::vector<std::string> vec{ "Hi","hi","HI" };
	removeWordFromVector(vec, "Hi");
	EXPECT_EQ(1, vec.empty());
}

TEST(CheckString, isSame) {
	
	EXPECT_EQ(1, issameWord("HI","hi"));
}

