#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <set>



using namespace std;

/*
1. 关于Set:
	set是关联式容器。vector封装数组，list封装链表，map和set封装二叉树。
	C++ STL中标准关联容器set,multipset,map,multipmap内部采用的就是一种非常高效的平衡检索二叉树（RB tree）

Q1:为何map和set的插入删除效率比用其它序列容器高
A：因为关联式容器不需要左内存拷贝和内存移动。set容器内所有的元素都是以节点的方式来存储，其节点结构和链表差不多。
	因此所有元素都是以节点的方式来存储，因此插入和删除的时候只需要节点的指向稍作变换，即可。


*/

int main(void)
{
	set<int> s{ 9,5,6,3,1,7 };
	cout << "set的size:" << s.size() << endl;
	cout << "set的max_size:" << s.max_size() << endl;

	cout << "首元素：" << *s.begin() << endl;
	//这里的end()指向的还是尾元素的下一个位置，所以不能够直接拿过来进行使用
	//迭代器可以自增或者自减，但是不能使用+1  or  -1 
	cout << "尾元素：" << *(--s.end()) << endl;

	for (auto x : s)
	{
		cout << x << "  ";
	}
	cout << endl;

	s.insert(0);

	cout << "set的size:" << s.size() << endl;
	cout << "set的max_size:" << s.max_size() << endl;

	cout << *s.rbegin() << endl;

	for (auto x : s)
	{
		cout << x << "  ";
	}
	cout << endl;

	set<int>::iterator iter;
	if ((iter = s.find(0)) != s.end())
	{
		cout << *iter << endl;
	}
	
	pair<set<int>::const_iterator, set<int>::const_iterator> pr;
	pr = s.equal_range(3);
	cout << "第一个大于等于 3 的数是 ：" << *pr.first << endl;
	cout << "第一个大于 3的数是 ： " << *pr.second << endl;

	//erase(iterator)：删除定位器iterator指向的值
	//erase(first,second)：删除迭代器first和end之间的值
	//erase(key_value)：删除键值key_value

	//insert(key_value):返回值是pair<set<int>::iterator.bool>  bool标志着插入是否成功，iterator代表插入的位置
	//insert(first,second):返回值是void，将迭代器之间的数字插入到set中
	pair<set<int>::iterator, bool> p1;
	p1 = s.insert(-1);

	cout << "插入元素迭代器的位置：" << *p1.first << endl;
	cout << "插入是否成功 ： " << p1.second << endl;//如果该元素已经存在，则插入失败

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

