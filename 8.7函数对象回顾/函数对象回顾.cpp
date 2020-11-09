#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. 函数对象/仿函数回顾
2. 标准库中定义的函数队形
3. 标准库中定义的函数对象范例

*/


namespace _nmsp1
{
	//一、函数对象
	//在STL中一般和算法配合使用，从而实现一些特定的功能；这些函数对象主要用于服务于算法；
	//函数名（参数列表）
	/*
	函数对象/仿函数：
	1. 函数  void func(int x) {...}
	2. 可调用对象  class A (public: void operator()(int x){})
	3. lambda表达式  [](int x){};
	*/
	class A {
	public:
		int operator()(int a, int b)
		{
			return a + b;
		}
	};
	void func()
	{
		//二。标准库中定义的函数对象
		int a = 1, b = 2;
		auto sum = plus<int>()(1,2);//plus内部的实现也是基于操作符重载的，所以两者的调用方式基本上是一致的
		A aa;
		auto x= aa(1, 2);
		//auto x = A()(1, 2);
		//auto x=sum(1, 2);
	}
}


int main(void)
{

	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

