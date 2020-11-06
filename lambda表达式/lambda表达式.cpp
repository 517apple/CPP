#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. 用法简介
2. 捕获列表
3. lambda表达式延迟调用易出错细节分析
 
*/

int main(void)
{
	//一、用法简介
	//C++11：也是一种可调用对象。
	//lambda表达式，定义了一个匿名函数，并且可以捕获一定范围内的变量

	auto f = [](int a)->int
	{
		return 1;
	};
	//特点
	//1. 是个匿名函数，可以理解为 "可调用的代码单元"  ；或者理解为 未命名的内联函数
	//2. 它有一个返回类型，一个参数列表，一个函数体
	//3. 与函数不同，lambda表达式可以在函数内部定义，这个是常规函数做不到的
	//4. 

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

