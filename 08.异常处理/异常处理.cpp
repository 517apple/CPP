#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
* C++�쳣����
1. ָ�����ڳ�������ʱ������������������糢�Գ���0�Ĳ���
2. �쳣�����ṩ��һ��ת�Ƴ������Ȩ�ķ�ʽ�������ؼ��֣�try/catch/throw
	throw:�����׳��쳣
	catch:�쳣������򲶻��쳣
	try:try���еĴ����ʾ����������ض��쳣


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

