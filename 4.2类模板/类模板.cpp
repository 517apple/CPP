#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 



using namespace std;



int main(void)
{
	//一、概述：用类模板来实例化一个特定的类
	//编译器不能为类模板推断模板参数类型，所以未来使用类模板，我们必须在模板后边用<>来提供格外的信息

	//二、类模板定义
	 //类模板的成员函数隐式为inline函数
	//类模板被实例化之后，这个模板的每个实例都会有自己的成员函数

	//如果类模板成员函数的定义写在类模板定义的外边，那么这个成员函数的模板参数就体现出来了
	// 其成员只有在使用时才会被实例化
	/*
	templete<typename T>
	void func<T>::A
	{
		//...
	}
	*/


	//四、模板类名字的使用

	//五、非类型模板参数有一些限制：
	//类类型和浮点型不能作为非类型模板的参数
	//


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

