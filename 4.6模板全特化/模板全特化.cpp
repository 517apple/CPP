#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
outline:
1. 类模板特化
1.1 类模板全特化
1.2 类模板偏特化

2. 函数模板特化
2.1 函数模板全特化
2.1 函数模板偏特化

3. 模板特化版本放置位置建议

*/


template<typename T,typename Q>
struct TC
{
	TC() {
		cout << "默认构造函数" << endl;
	}

	void functest()
	{
		cout << "泛化版本" << endl;
	}
	

};

//全特化：就是所有类型模板参数，都用具体类型代替，所以template后边的<>就为空
template<>  //全特化
struct TC<int,int>
{
	TC() {
		cout << "int,int构造函数" << endl;
	}
	void functest()
	{
		cout << "特化版本1" << endl;
	}
};


//成员函数特化,特化成员函数而不是模板
template<>
void TC<int,double>::functest()
{
	cout << "int ,double 泛化版本函数" << endl;
}



template<typename T>
struct TC1
{
	void functest()
	{
		cout << "泛化版本" << endl;
	}
};

template<typename T>
struct TC1<T&>
{
	void functest()
	{
		cout << "左值引用特化版本" << endl;
	}
};


template<typename T>
struct TC1<T &&>
{
	void functest()
	{
		cout << "右值引用特化版本" << endl;
	}
};



template<typename T, typename Q>
void func(T& a, Q& b)
{
	cout << "泛化版本函数" << endl;
	
}


int main(void)
{
	//特化：对特殊类型进行特殊对待，给它写适合它的专用代码   
	//泛化：

	//类模板特化
	//类模板全特化
	//只要特化，一定先存在泛化
	//特化版本的代码会被优先使用,特化版本可以有很多
	//TC<int, string> tc1;
	//tc1.functest();

	//TC<int, int> tc2;
	//tc2.functest();

	////二。特化成员函数而不是模板
	//TC<int, double> tc3;
	//tc3.functest();

	//全特化：所有的类型都被替换
	//偏特化：部分类型被替换


	//TC1<int&> tc1;
	//tc1.functest();

	//TC1<int&&> tc2;
	//tc2.functest();
	
	string s1("string");
	int a = 12;
	func(s1, a);
	func(s1, a);

	//函数特化版本中：普通优先，特化版本，泛化版本
	//函数模板只能全特化，不能偏特化

	//三、模板特化版本放置位置建议
	//模板定义，实现都放在.h中
	//模板的特化版本

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

