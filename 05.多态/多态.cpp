#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
C++��̬
1. ����֮����ڲ�νṹ��������֮����ͨ���̳й�����ʱ�򣬾ͻ��õ���̬
2. ��̬��ζ�ŵ��ó�Ա����ʱ������ݵ��ú����Ķ����������ִ�в�ͬ�ĺ���
3. ��Ҫ��� virtual �ؼ��ֽ���ʹ��
4. �����������൱��ʹ��������ͬ����ִ�еĺ�����ͬ�Ĳ���
*/

class Shape {
protected:
	int width, height;
public:
	Shape(int w=0,int h=0):width(w),height(h)
	{}
	virtual int area()=0;//���麯��
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

