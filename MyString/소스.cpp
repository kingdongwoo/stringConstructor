#include <iostream>
#include "MyString.h"
using namespace std;

int main() {
	MyString strs[] = { MyString("C"), MyString(), MyString("Java") };
	
	strs[1].set("C++");
	const MyString target("Java");
	for (int i = 0; i < 3; i++) {
		MyString str(strs[i]); 
		if (str.isEqual(target)) {
			cout << "[" << i << "]: ";
			str.print();
			
			break;	
		} 
	} 
	
	for (int i = 0; i < 3; i++) {
		MyString& str = strs[i];
		str.print();
	}
	system("pause");
}
