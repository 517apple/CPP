#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
成员函数模板，显示实例化，声明
1、 普通类的成员函数模板
2、 类模板的成员函数模板
3、 模板显式实例化，模板声明


*/


//显式实例化,直接实例化之后，后面在创建的时候就不需要在第一次创建的时候定义了，整个类和非模板函数都会实例化出来
template A<float>;


//成员函数模板
template <typename C>//类的模板参数
class A
{
public:

	A() {}

	template<typename T2>
	A(T2 v1,T2 v2)
	{

	}

	template<typename T>
	void myft(T tmpt)
	{
		cout << tmpt << endl;
	}

	void fun1(void)
	{
		cout << &fun1 << endl;
	}


	template<typename T>
	void myft1(T tmpt);

	C f1;
};




//成员函数写在函数外边时的方式
template<typename C>//先外
template<typename T>//后里
void A<C>::myft1(T tmpt)
{
	//cout << &myft1 << ":";
	cout << tmpt << endl;
}

void fun1(void)
{
	cout << fun1 << endl;
}

int main(void)
{
	//普通类的成员函数模板
	A<float> a;
	
	fun1();

	a.myft1(12);
	a.myft1(13);
	a.myft1("string");

	//二、类模板的成员函数模板
	//类模板的模板参数必须用<>指定
	//类模板的成员函数（包括普通成员函数和函数模板）只有为程序所用才进行实例化
	//如果某函数从未使用，则不会实例化该成员函数


	cout << "hello world" << endl;
	system("pause");
	return 0;

}


