#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. 隐式类型转化
2. 显式类型转换
	static_cast
	dynamic_cast
	const_cast
	reinterpret_cast
3. 总结

*/

int main(void)
{
	//一、隐式类型转换：系统自动进行
	//int m = 3 + 3.14;

	//二、显式类型转换（强制类型转换）
	//nt k = 5 % (int)3.2;//C语言风格的强制类型转换
	//int k = 5 % int(3.2);//函数风格的强制类型转换

	//C++强制类型转换分为4种，都被称呼为“命名的强制类型转换”
	//通用形式
	//强制类型转换名  <type><express>   
	//static_cast：静态类型转换，编译的时候就会进行类型转换的检查
	
	/*
	//可用于：
	1. 相关类型转换，比如整型和实型之间的转换
	2. 将子类转换成父类   
	3. void *与其它类型指针之间的转换

	不可用于：指针类型之间的转换
	*/
	/*double f = 3.1415f;
	int i = (int)f;
	int i2 = static_cast<int>(f)*/;

	//dynamic_cast:主要应用于运行是类型识别和检查，主要用于付类型和子类型之间转换用的

	//const_cast：去除指针或者引用的const属性，该转换能够将const性质转换掉
	//	编译时就会进行类型转换
	const int i = 12;
	const int& ii = i;
	int& a = const_cast< int&>(ii);
	a = 13;
	cout << i << endl;
	cout << a << endl;

	const int x = 12;
	int &x1 = const_cast<int&>(x);

	x1 = 13;
	cout << x << endl;
	cout << x1 << endl;

	//reinterpret_cast   任意类型的转换


	//总结
	//1. 强制类型转换不建议使用。它能够抑制编译器报错
	//2. 学习目的：认识这些类型转换符。方便阅读别人的代码
	//3. 不要再使用C语言风格的类型转换了
	//4. static_cast和reinterpret_cast能够很好的取代C风格的强制类型转换了


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

