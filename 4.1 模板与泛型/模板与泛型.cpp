#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include "templete.h"

using namespace std;

//这是函数模板

//int funcadd(int a, int b)
//{
//	return a + b;
//}
//
//double funcadd(double& a, double& b)
//{
//	return a + b;
//}


//定义一个通用的函数模板
//template<typename T>
//template<typename T，typename Q>
template<class T>	//这里的class与类没有关系，只是一个与typename性质一样的关键字而已
inline //可以是内联的，
T funcadd(T a, T b)
{
	return a + b;
}
//1. 模板定义是用template关键字开头的，后边<> <> 里边叫模板参数列表，如果又多个参数，则用,分隔开   template<typename T，typename Q>
//	至少也得有一个模板参数，前面有个typename/class关键字
//2. 模板参数列表里边再表示再函数定义中用到的“类型”或者“值”，也和函数参数类似
//3. funcadd这个函数声明了一个名字为T的类型参数。这里的 T  实际上就是一个类型，编译器再编译的时候再进行类型的判断





int main(void)
{
	//一、概述
	//vector<int> 就是一个类模板，传递一个int

	//几句话：
	//1. 泛型变成是独立于任何特定类型的凡是编写代码
	//2. 模板是泛型变成的基础。模板是创建类或者函数的蓝图或者公式
	//3. 模板支持将 类型作为参数的程序设计方式

	//模板分为：函数模板和类模板


	//二、函数模板的定义


	//三、函数模板的使用
	//函数模板调用和函数调用区别不大，编译器会推断模板中的参数
	//推断的依据是调用函数的实参推断出来的；有的时候是需要提供的
	//推断不出来的时候就得用<>主动提供类型

	int sum = funcadd(1, int(2.2));
	cout << sum << endl;
	//编译器推断出这个模板的形参参数之后就会给我们实例化一个特定版本的函数
	double sum2 = funcadd(1.1f, 2.2f);
	cout << sum2 << endl;


	//四、非类型模板参数
	//在模板参数列表，还可以定义非类型参数
	//templete<T a,int b>;其中的 int 代表的就是非类型的参数
	//templete<int a,int b>  ，显式的指定模板
	//int funcadd2()
	//使用<>来给非类型参数传递参数
	int sum3 = funcaddv2<2, 3>();//  <>里边的值必须用常量，不能用变量，因为在编译的时候就需要确定
	cout << sum3 << endl;

	int a = 12;
	sum3 = funcaddv3<int, 3>(a);//  <>里边的值必须用常量，不能用变量，因为在编译的时候就需要确定
	cout << sum3 << endl;


	//模板定义不会导致编译器生成代码，只有实例化一个特定版本的函数之后，编译器才会生成代码
	//编译器生成代码的时候，需要能够找到函数体，所以模板函数的定义一般放在.h文件中

	//函数模板没有重复定义的说法，因为它没有生成具体的函数

	cout << "hello world" << endl;
	system("pause");
	return 0;
}

