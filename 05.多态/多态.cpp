#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
C++多态
1. 当类之间存在层次结构，并且类之间是通过继承关联的时候，就会用到多态
2. 多态意味着调用成员函数时，会根据调用函数的对象的类型来执行不同的函数
3. 需要配合 virtual 关键字进行使用
4. 可以在派生类当中使用名字相同但是执行的函数不同的操作
*/

class Shape {
protected:
	int width, height;
public:
	Shape(int w=0,int h=0):width(w),height(h)
	{}
	virtual int area()=0;//纯虚函数
};

class Rectangle :public Shape
{
public:
	Rectangle(int a = 0, int b = 0) :Shape(a, b) {}
	int area()
	{
		cout << "Rectangle class area :" << endl;
		return (width * height);
	}
};

class Triangle :public Shape
{
public:
	Triangle(int a = 0, int b = 0) :Shape(a, b) {}
	int area()
	{
		cout << "Triangle class area :" << endl;
		return (width * height)/2;
	}
};


int main(void)
{
	Shape* shape;
	Rectangle rec(10, 7);
	Triangle  tri(10, 5);

	shape = &rec;
	shape->area();

	shape = &tri;
	shape->area();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

