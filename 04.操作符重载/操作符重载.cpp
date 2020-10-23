#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;


/*
* 操作符重载：
++ / -- 重载的候，为了区分 ++x  / x++ 加入了一个参数int 
eg： operator++(int)为后置递增的情况，


*/

class Box {
public:
	int length;
	Box(int len=0) :length(len)
	{
		cout << "构造函数" << endl;
	}
	//Box operator+(Box& b)
	//{
	//	Box box;
	//	box.length = this->length + b.length;
	//	return box;
	//}
	Box operator++(int)
	{
		Box temp;
		temp.length = length++;
		return temp;
	}
	//函数调用运算符重载
	Box operator()(int a)
	{
		Box b;
		b.length = a;
		return b;
	}
	void print()
	{
		cout << length << endl;
	}
private:
	
};

int main(void)
{
	Box b1(12),b2(13);
	b1.print();
	//b1 = b1 + b2;
	b1++;
	b1.print();

	b1 = b1(16);
	b1.print();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

