#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;


//成员函数不占用类的内存
class A
{
public:
	A();
	~A();

private:

};

A::A()
{
	cout << "构造函数。。。" << endl;
}

A::~A()
{
	cout << "析构函数。。。" << endl;
}

int main(void)
{
	//一、new/delete探秘
	/*A* pa = new A();
	cout << sizeof(pa) << endl;
	delete pa;*/
	//new干了两件事情：1. 通过operator new()来分配内存；2. 调用构造函数来初始化内存
	//delete也干了两件事情：1. 调用析构函数  2. 释放内存

	//new应该再分配的内存附近记录了分配的内存的大小，以方便delete进行释放

	//1.3 申请和释放数组


	//总结：new/delete  new[]/delete[]  一定要配对使用！！


	//智能指针总述
	//int* p = new int();//p被称为裸指针
	//int* q = p;

	//智能指针，就理解成对“裸指针”进行了包装；包装后的优点
	//1. 能够“自动释放所指向的对象内存”；使用智能指针的程序更容易编写和调试；建议优先选择使用

	//C++标准库中有四种智能指针：
	//auto_ptr(c++ 98)  unique_ptr(c++ 11)   shared_ptr     weak_ptr（用来辅助shared_ptr）
	//C++ 11中auto_ptr被弃用了

	//shared_ptr：共享式指针，多个指针指向同一个对象，最后一个指针被销毁时，这个对象会被释放
	//unique_ptr：独占式指针，同一时间，只有一个指针能够指向该对象；

	//shared_ptr基础
	//共享所有权，不是被一个shared_ptr所拥有，而是被多个shared_ptr之间相互协作；shared_ptr有额外开销
	//工作原理：引用计数，每个shared_ptr的拷贝都执行相同的内存。
	//最后一个指向该内存对象的shared_ptr在什么情况下会释放该对象呢？
	//1. 这个shared_ptr被析构的时候；
	//2. 这个shared_ptr指向其它对象时；
	//垃圾回收机制，不用担心啥时候delete
	shared_ptr<int> p1(new int(100));
//	shared_ptr<int> p2 = new int(100);// = 隐式转换在初始化时不被允许

	shared_ptr<int> p2;//默认初始化，目前指向一个空的地址

	//make_shared函数,替代new的功能
	shared_ptr<int> p3 = make_shared<int>(100);
	shared_ptr<string> p4 = make_shared<string>("apple");
	//cout << *p3 << endl;
	cout << p4 << endl;
	cout << *p4 << endl;

	p4 = make_shared<string>("12");
	cout << *p4 << endl; 
	cout << p4 << endl;


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

