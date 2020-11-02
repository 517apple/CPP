#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;


typedef int(*funtype)(int, int);

int mf(int a, int b)
{
	return a + b;
}

template<typename T,typename Q=tc>
void testfun(T a, T b, Q mf1=tc())//第三个参数值为缺省值，默认
{
	int c = mf1(a, b);
	cout << c << endl;
}


class tc
{
public:
	tc()
	{
		cout << "构造函数..." << endl;
	}

	//重载()运算符
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}


};

int main(void)
{
	//一、typename的使用场合
	//template<typename T>

	//作用域运算符访问类型成员，默认该对象是静态成员，但是如果定义一个类型的时候，则需要在前面添加typename来告诉编译器


	//string::size_type size=getlength...//类似于unsigned int


	//函数指针做其他函数的参数
	testfun(1, 2, mf);

	tc tc1;
	testfun(2, 2, tc1);

	testfun(2, 8);

	//可调用对象：未归类知识点

	//四、默认模板参数
	//1. 类模板后边必须用<>来提供额外的信息。<>  表示这是一个模板
	//2. 函数模板：老标准只能为类模板提供提供默认模板参数


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

