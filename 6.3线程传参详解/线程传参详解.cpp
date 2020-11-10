#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <thread>

using namespace std;

/*
一、传递临时对象作为线程参数

二、临时对象作为线程参数继续讲

三、传递类对象、智能指针作为线程参数

四、用成员函数指针做线程函数


*/


namespace _nmsp1
{
	void myprint(const int& i, char* buf)
	{
		cout << i << endl;
		cout << buf << endl;
		return;
	}

	void func()
	{
		//一、传递临时对象作为线程参数
		int myvar = 1;
		int& myvary = myvar;
		char mybuf[] = "this is a test";
		thread myjob1(myprint, myvary, mybuf);
		myjob1.join();
	}
}

int main(void)
{
	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

