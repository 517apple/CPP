#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
第三节 shared_ptr常用操作、计数、自定义删除器等等
1、 shared_ptr引用计数的增加和减少
1.1 引用计数增加
1.2 引用计数减少


2、 shared_ptr指针常用操作
use_count()
unique()
reset()
解引用*
get()
swap()
=nullptr
智能指针名字作为判断条件
指定删除器以及数组问题

*/

//使用引用时不会增加引用次数
//
void myfunc(shared_ptr<int> ptmp)
{
	cout << ptmp.use_count() << endl;
	return;
}

shared_ptr<int> myfunc1(shared_ptr<int>& ptmp)
{
	cout << ptmp.use_count() << endl;
	return ptmp;
}

int main(void)
{
	//一、shared_ptr引用计数的增加和减少
	//共享式，引用计数，每一个shared_ptr的拷贝都指向相同的内存，只有最后一个指向该对象的
	//

	//auto p1 = make_shared<int>(12);
	//cout << p1.use_count() << endl;
	//auto p2 = p1;
	//cout << p1.use_count() << endl;
	//cout << p2.use_count() << endl;

	////myfunc(p2);

	////auto p3 = myfunc1(p2);
	////cout << p3.use_count() << endl;

	////二、引用计数的减少
	//p2 = make_shared<int>(13);//1. 指向新对象
	//cout << p1.use_count() << endl;

	////2. 局部的ptr离开了return
	//myfunc(p1);
	//cout << p1.use_count() << endl;

	//3. 当一个shared_ptr引用计数从1变成0，则会自动释放自己所管理的对象
	//auto p8 = make_shared<int>(10);
	//auto p9 = make_shared<int>(10);
	//p9 = p8;


	//二、shared_ptr指针常用操作
	//1. use_count（）：返回多少个智能指针指向某个对象
	//2. unique();  只有一个智能指针指向同一个对象，则返回true；否则返回false
	//auto p8 = make_shared<int>(10);
	//cout << p8.unique() << endl;
	//auto p9(p8);
	//cout << p8.unique() << endl;
	//
	//
	////3. reset()，初始化该智能指针
	//shared_ptr<int> pother(new int(12));
	//cout << pother << endl;
	//pother.reset();
	//cout << pother << endl;

	//4. *解引用，获取p指向的对象

	//5. get():返回智能指针p中保存的指针（野指针），考虑到有些函数的参数需要的是一个内置指针而不是智能指针
	shared_ptr<int> sp(new int(10));
	cout << sp << endl;
	cout << *sp << endl;
	int* yp = sp.get();
	cout << yp << endl;
	cout << *yp << endl;
	//这个时候不能delete,否则不可预料

	//6. swap：交换两个智能指针所指向的对象,指向的地址也会变
	shared_ptr<string> p1(new string("string1"));
	shared_ptr<string> p2(new string("string2"));
	cout << p1 << ":" << *p1 << endl;
	cout << p2 << ":" << *p2 << endl;
	swap(p1, p2);
	cout << p1 << ":" << *p1 << endl;
	cout << p2 << ":" << *p2 << endl;

	shared_ptr<string> p21(new string("mem"));
	cout << (*p21).mem() << endl;
	//7. 智能指针名字作为判断条件

	//8. 指定删除器以及数组问题
	//指定删除器
	//一定时机帮我们删除所指向的对象；delete ：将delete运算符号作为默认的资源析构方式
	 




	










	cout << "hello world" << endl;
	system("pause");
	return 0;

}

