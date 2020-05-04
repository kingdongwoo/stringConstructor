#include "MyString.h"
#include <string.h>
#include <stdio.h>
#include <cstring> 
#include <iostream>
using namespace std;


	void MyString::print()
	{
		if(str != NULL)
		cout << str << endl;
	}

	void MyString::set(const char * str2)
{
		size = strlen(str2);
		str = new char[size + 1];
		strcpy(str, str2);

}

MyString::MyString(const char* strr)
{
	size = strlen(strr);
	str = new char[size + 1];
	strcpy(str, strr);
}

MyString::MyString(const char ch)
{
	size = 1;
	str = new char[2];
	*str = ch;
	*(str + 1) = '\0';
}

MyString::MyString(const MyString & strr)
{
	size = strr.size;
	str = new char[size + 1];
	strcpy(str, strr.str);
}

bool MyString::isEqual(const MyString & strr)
{
	char* p = str;
	char* q = strr.str;
	if (strcmp(p, q) == -1) return false;
	else
	return true;
}

MyString::MyString()
{
	str = NULL;
	size = 0;
}



MyString::~MyString()
{
	delete[] str;
}

