#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

/*
1. 算法概述
2. 算法内部的一些处理
3. 一些典型的算法使用范例
	for_each()
	find()
	find_if()
	sort() //list或者stack没有sort函数
*/


namespace _nmsp1
{
	//一。算法概述：理解为函数模板（全局函数、全局函数模板）
	//算法的前两个形参的类型，一般是迭代器类型，用于表示容器中的元素的一个区间

	//前闭后开区间的好处
	//1. 算法只要判断迭代器等于后边这个开区间，就表示迭代结束
	//2. 如果第一个形参等于第二个形参，则表示这是个空区间

	//泛型编程增加了灵活性，但是确实了直观性；某些数据结构于算法之间的兼容性也不太好

	//stl中有哪些算法：


	void func()
	{
		list<int> mylist = { 500,200,300 };
		list<int>::iterator iterbeg = mylist.begin();
		list<int>::iterator iterend = mylist.end();//最后一个元素的下一个元素
		//算法名(itergeb,iterend) ( ] 

		for (auto x : mylist)
			cout << x << " ";
		cout << endl;

		//sort(iterbeg, iterend);
		for (auto x : mylist)
			cout << x << " ";
		cout << endl;

	}
}


namespace _nmsp2
{
	//二、算法内部的一些处理
	//算法会根据传递进来的迭代器来分析出迭代器的类型

	//三、一些典型的算法
	//主要是用了可调用对象的这个概念，能够将参数传递进去之后进行相应的处理

	void myfunc(int& i)
	{
		cout << i <<":"<<&i<< endl;
	}

	bool cmp(int i, int j)
	{
		return i > j;
	}

	//类操作符重载()作为一个可调用对象
	class A {
	public:
		bool operator()(int i, int j)
		{
			return i > j;
		}
	};


	void func()
	{

		//1. for_each算法
		//vector<int> myvec = { 1,2,3,4,5,6 };
		////不断的迭代给进来的额两个迭代器之间的元素，然后一这个元素为实参来调用myfunc
		//for_each(myvec.begin(), myvec.end(), myfunc);//myfunc是可调用对象：未归类知识点第七节

		//find算法
		vector<int> myvec = { 1,2,3,4,5,6 };
		cout << *(myvec.begin() + 3) << endl;
		auto iter = find(myvec.begin(), myvec.begin() + 3, 4);//+3 之后迭代器指向4 但是指向4之后并不会进行判断
		if (iter != myvec.begin() + 3)
		{
			cout << "find" << endl;
		}

		//find_if演示
		//遍历的时候将值循环传入进可调用对象的那种进行运算，当返回true的时候停止遍历。返回的result是指向该元素的迭代器
		auto result = find_if(myvec.begin(), myvec.end(), [](int val)//第三个参数是一个可调用对象，lambda表达式也是可调用对象
		{
			if (val > 3)
				return true;//找到了
			return false;
		});

		//sort函数自定义排序规则演示，从大到小
		vector<int> myvec1 = { 1,2,3,4,5,6 };
		A mya;
		//sort(myvec1.begin(), myvec1.end(), A());
		//sort(myvec1.begin(), myvec1.end(), cmp);
		sort(myvec1.begin(), myvec1.end(), mya);

		//list不支持全局的sort算法，但是有自己的sort函数
		list<int> mylist = { 1,4,7,2,5,8,3,6,9 };
		mylist.sort(cmp);



	}
}



int main(void)
{
	_nmsp2::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

