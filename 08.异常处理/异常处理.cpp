#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
* C++异常处理：
1. 指的是在程序运行时发生的特殊情况，比如尝试除以0的操作
2. 异常处理提供了一种转移程序控制权的方式。三个关键字：try/catch/throw
	throw:程序抛出异常
	catch:异常处理程序捕获异常
	try:try块中的代码表示将被激活的特定异常


*/

namespace std
{
	int itest = 1231;
	void my_print(string s)
	{
		cout << s << endl;
	}
}

int test(int& x)
{
	return --x;
}

double division(int a, int b)
{
	if (b == 0)
	{
		throw "Division by zero condition!";
	}
	return (a / b);
} 


int main(void)
{
	try
	{
		cout << division(7, 0) << endl;
	}
	catch (const char*  msg)
	{
		cerr << msg << endl;
	}
	cout << itest << endl;
	my_print("13141516");

	int x = 3;
	cout << x << test(x) <<endl;
	cout << "123" << "456" << endl; 

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

