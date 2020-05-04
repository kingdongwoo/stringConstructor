#pragma once
#include <iostream>

using namespace std;

class MyString
{
private:
	char* str;
	int size;
public:
	
	void print();
	void set(const char* str2);
	MyString(const char* strr);
	MyString(const char ch);
	MyString(const MyString& strr);
	bool isEqual(const MyString & strr);
	//MyString(const MyString & strr);
	MyString();
	~MyString();
};

