#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
第三节 auto

1. 局部变量极初始化：
	随时用到随时定义
	C++11 支持大括号初始化，eg: int a{0}; or  int a={0};
	定义内置数组的初始化方式：int a[]{1,2,3};   //
*/

#if 1

int main(void)
{
	//二： auto：变量的自动类型推断
	//可以在声明变量的时候根据初始值的类型自动为变量选择匹配的类型；（所以声明的时候要初始化）
	//auto自动类型的判断发生在编译期间，所以auto不会造成持续效率的降低

	//三：头文件防卫式声明
	/*
	* 关键点在于有 #include "head.h"  出现的地方，会把.h里面的内容都展开，这样就有重复定义的风险，避免重复包含同一个头文件
	#ifndef __HEAD1__H__
	#define __HEAD1__H__

	#endif

	*/

	//四、引用
	//引用可以理解为：为变量起了另外一个名字，一般用& 表示。引用不是有一个对象，只是一个别名而已
	//定义引用的时候必须初始化，指向的都是同一块内存。必须绑定到变量，类型也要相同
	//int value = 12;
	//int& val = value;
	//int* p = &val;
	//cout << &value << endl;
	//cout << &val << endl;
	//cout << p << endl;
	const int& a = 12;//a虽然是引用，但是依然会给a分配空间

	//五、常量  const
	//表示不变的意思
	const int var = 7;//表示这个变量的值不会去改变
	//var = 12;//这样是不可以改变的
	int &var1 = (int &)var;
	var1 = 12;

	//constexpr 关键字：C++11引入，也是个常量的概念，在编译的时候求值
	//定义常量的时候可以提升程序的性能
	constexpr int a1 = 1;
	int b = 2;
	//constexpr int a2 = b;

	//内存动态分配：
	//C中：供程序使用的存储空间，有程序区，静态存储区，动态存储区
	//C++中：内存分为五个区域：
	//(1)栈：一般函数内的局部变量，由编译器自动分配和释放
	//(2)堆：程序员malloc/new分配，free/delete来释放，忘记释放时，系统会回收
	//(3)全局、静态存储区：存放全局变量和静态变量static。程序结束时系统释放
	//(4)常量存储区：
	//(5)程序代码区：

	//堆和栈不同的用途和区别
	//栈：空间有限，系统分配，速度较快
	//堆：物理内存之下都可；分配速度比较慢，使用malloc/new来分配，free/delete回收

	//NULL  等价于  0  C语言中的写法
	//int* p = NULL;
	//p = (int*)malloc(2560000000*sizeof(int));//分配的是物理内存
	//if (p != NULL)//分配不成功会返回0，否则返回指向首地址的指针
	//{
	//	*p = 5;
	//	cout << *p << endl;
	//	free(p);
	//}

	//new/delete：是运算符（标识符），C++就使用这对标识符来分配和释放内存，不再使用malloc和delete
	//new会调用类的构造函数，malloc不会
	//new使用的一般格式：
	//1. 指针变量名=new 标识符；
	//2. 指针类型名=new 类型标识符（初始值）
	//3. 指针类姓名=new 类型标识符[内存单元个数]

	//int* myint = new int;//分配空间但是不初始化
	int* myint = new int(15);//分配空间然后使用（）进行数值的初始化
	if (myint != NULL)
	{
//		*myint = 12;
		cout << *myint << endl;
		delete myint;
	}

	//int* pa = new int[1000000];//开辟一个大小为100个整型数据大小的空间
	//delete[] pa;
	//new和delete必须配对使用，不能重复delete或者free 

	//NULL是整型，nullptr不是，两者类型不一样；nullptr才是真正的指针类型 nullptr_t
	//尽量使用nullptr而不是NULL

	cout << typeid(NULL).name() << endl;
	cout << typeid(nullptr).name() << endl;

	int a = 12;
	cout << &a << endl;

	int b1 = 13;
	cout << &b1-&a << endl;

	cout << "hello world" << endl; 
	system("pause");
	return 0;

}

#endif

