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
		cout << std::this_thread::get_id() << endl;
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

		//1. 线程id的概念：id是一个数字，每个线程实际上都对应着一个数字
		cout << std::this_thread::get_id() << endl;
	}
}

int main(void)
{
	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

