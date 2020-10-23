#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
类的成员函数：
1. 构造函数没有返回类型（包括void），所以函数体中也不能有return
2. C++类访问修饰符：private（默认），public,protected
3. private：只有类和友元函数才可以访问，派生类（子类，继承过来的）不可访问
4. protected: 派生类可访问
5. 在类中声明函数，需要把函数的定义写在外边；在类中进行定义的函数不需要声明.
6. 继承默认是private


*/

//struct MyBox
//{
//	//里面的成员属性是public
//	double length;
//	double breadth;
//	double height;
//	
//};

class Box {
public:
	double length;
	double breadth;
	double height;
	double getVolume1(void);//成员函数1定义在类的外部，使用作用域运算符::
	Box(double len, double w);
	//Box(void);

	double getVolume2(void)//成员函数2定义在类的内部，在类定义中定义的成员函数吧函数声明为内联的
	{
		return length * breadth * height;
	}
	Box(double len, double b, double h)
	{
		cout << "构造函数...." << endl;
		length = len;
		breadth = b;
		height = h;
	}
	Box()
	{
		cout << "构造函数重载...." << endl;
	}
};

//使用初始化列表来初始化字段
Box::Box(double len, double w):length(len),breadth(w)
{
	cout << "使用初始化列表来初始化字段" << endl;
}

double Box::getVolume1(void)
{
	return length * breadth * height;
}


class MyBox :public Box
{
public:
	MyBox(double len, double b, double h)
	{
		//Box(1,2,3);
		cout << "这是继承下来的类的构造函数" << endl;
	}
};


int main1(void)
{
	Box box1(1.0, 2.0, 3.0);
	Box box2;
	cout << box1.getVolume1() << endl;

	Box box4(1.1, 2.2);

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

