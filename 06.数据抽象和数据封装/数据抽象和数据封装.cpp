#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
// #include <pthread.h>

using namespace std;

/*
数据抽象：
任何带有共有和私有成员的类都可以作为数据抽象的实例、把实现细节和相关的数据分离开的概念


数据封装：指的就是三种数据访问类型
private、protected、public

数据隐藏：OOP

纯虚函数的声明：
virtual int fun() = 0;


编译器分两步处理类：
首先编译成员的声明，然后才轮到成员函数体。因此，成员函数体可以随意使用类中的其他成员而无须
在意这些成员出现的次序


*/

int main(void)
{


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

