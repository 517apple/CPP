#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*

*/

int main(void)
{
	//一。直接内存管理（new/delete）
	//new分配在堆上  直接内存管理（new/delete）
	//如何初始化：
	int* p = new int;//初值未定义
	int* p1 = new int(100);//定义了初值100
	string* s = new string;//会调用string的构造函数

	//注意事项总结：
	//1. new出来的一定要delete,否则内存泄露，运行崩溃
	//2. delete后内存不能再使用

	int* p3 = new int(10);
	delete p3;
	p3 = nullptr;//好习惯

	//C++11 出现了智能指针

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

