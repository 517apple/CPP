#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. 可变参函数模板

2. 可变参类模板
通过递归继承模式

*/


//这里的T指的不是一个类型，对应多个不同类型的参数
//T后边带来...，所以称呼T：可变参类型
template <typename... T>
void myfunct1(T... args)
{
	cout << sizeof...(args) << endl;
	cout << sizeof...(T) << endl;

	//cout << *args << endl;
}

//--------------------------
//递归终止函数，没有参数了，
//传递参数时，用<第一个参数，其它参数>的方式，然后通过递归的方式来展开递归包
void myfunc2()
{
	cout << "参数包展开时执行了递归终止函数myfunc2()..." << endl;
}

template <typename T, typename... Q>
void myfunc2(const T& firstarg, const Q&... otherargs)
{
	cout << "收到的第一个参数值为：" << firstarg << endl;
	myfunc2(otherargs...);
}


//二、可变参类模板：允许模板定义中含有0到任意个模板参数
//


int main(void)
{

	//一、可变参模板
	//1.1 可变参函数模板

	//myfunct1();
	myfunc2(11, 12, "abc");


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

