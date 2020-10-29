#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;



int main(void)
{
	//string：可变长字符串的处理

	//二、可变长的字符串
	string s1("hello world");
	cout << s1.length() << endl;
	const char* s2 = s1.c_str();
	cout << sizeof(s2) << endl;
	cout << s1.capacity() << endl;
	cout << sizeof(s1) << endl;



	cout << "hello world" << endl;
	system("pause");
	return 0;

}

