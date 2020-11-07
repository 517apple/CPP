#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <deque>
#include <forward_list>
#include <map>
#include <unordered_set>

using namespace std;

/*
1. deque和stack
2. queue
3. list
4. forward_list
	set/map
	unordered_set....


*/


namespace _nmsp1 
{
	void func()
	{
		//一、deque和stack
	//deque是分段的连续内存
	//stack与vector的区别在于stack只支持从栈顶放入元素和取出元素
	//deque时机上包含着stack的功能

		deque<int> dq;
		cout << "初始地址为：" << &dq << endl;
		dq.push_back(0);
		cout << "初始地址为：" << &dq << endl;
		dq.push_back(1);
		dq.push_back(2);
		dq.push_back(3);
		dq.push_back(4);

		dq.push_front(-1);
		dq.push_front(-2);
		dq.push_front(-3);
		dq.push_front(-4);

		for (size_t i = 0; i < dq.size(); i++)
		{
			cout << "下标：" << i << " dq[i]=" << dq[i] << "  地址：" << &dq[i] << endl;
		}



		//queue：队列，先进先出；先进先出，也是一种基本的数据结构
	}

}


//三、forward_list：受限的双向链表，节省内存地址的开销
namespace _nmsp2
{
	void func()
	{
		forward_list<int> myforlist;

	}
}

//set/map
namespace _nmsp3
{
	void func()
	{
		//  set / map是关联容器，内部实现是用红黑树实现的；保存数据时不需要我们指定位置
		//  map: 每个元素又两项，key/value；一般通过key找value；

		map<int, string> mymap;
		mymap.insert(make_pair(1, "jack"));
		mymap.insert(pair<int, string>(2, "javk"));

		auto iter = mymap.find(1);
		if (iter != mymap.end())
		{
			cout << "find!!" << iter->second.c_str() << endl;
		}


		//set中的每一个元素就是一个value；元素值不能重复

	}
}

//  unordered_set/map
namespace _nmsp4
{
	void func()
	{
		//老版本的hash有关的set，hash_map等等已经被unordered取代了
		unordered_set<int> myset;
		cout << myset.bucket_count() << endl;
		cout << myset.max_bucket_count() << endl;

	}
}



int main(void)
{
	//_nmsp3::func();
	_nmsp4::func();

	//全局的find函数
	vector<int> arr{ 1,2,3,4,5,6 };
	if (find(arr.begin(), arr.end(), 1) != arr.end())
	{
		cout << "find" << endl;
	}
	if (find(arr.begin(), arr.end(), 0) != arr.end())
	{
		cout << "find" << endl;
	}
	

	cout << "hello world" << endl; 
	system("pause");
	return 0;

}

