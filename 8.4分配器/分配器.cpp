#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <list>

using namespace std;

/*
1. 分配器概述
2. 分配器的使用
3. 其它的分配器
4. 自定义分配器

*/


namespace _nmsp1
{
	void func()
	{
		//一、分配器概述：和容器紧密相关，一起使用
		//内存池技术
		list<int, std::allocator<int>> mylist;
		mylist.push_back(10);
		mylist.push_back(20);
		mylist.push_back(30);
		for (auto iter = mylist.begin(); iter != mylist.end(); ++iter)
		{
			cout << *iter << endl;
			int* p = &(*iter);
			cout << &(*iter) << endl;
		}

	}
}

int main(void)
{
	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

