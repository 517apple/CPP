#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <vector>

using namespace std;



int main(void)
{
	//反向迭代器
	vector<int> iv{ 1,2,3,4 };
	for (vector<int>::iterator iter = iv.begin(); iter != iv.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	for (vector<int>::reverse_iterator riter = iv.rbegin(); riter != iv.rend(); riter++)
	{
		cout << *riter << " ";
	}
	cout << endl;

	//const_iterator迭代器：const表示常量，这个就是值不能改变的意思，表示迭代器指向的值不能被改变，迭代器本身的指向是可以改变的
	//只能从容器中读取元素，只能访问而不能修改。这个配合引用作为函数的形参进行使用也是比较高效的

	//如果vector<int> 是一个常量容器，那就只能通过const_iterator进行访问了
	vector<int>::const_iterator iter2;
	iter2 = iv.begin();
	for ( ; iter2 != iv.end(); iter2++)
	{
		//*iter2 = 12;//不能被修改
		cout << *iter2 << " ";
	}
	cout << endl;

	//5.1 C++11中引入了两个新的函数cbegin()和cend(),返回的都是常量迭代器
	for (auto iter3 = iv.cbegin(); iter3 != iv.cend(); iter3++)
	{
		//*iter3 = 12;//不能被修改
		cout << *iter3 << " ";
	}
	cout << endl;

	for (auto iter3 = iv.crbegin(); iter3 != iv.crend(); iter3++)
	{
		//*iter3 = 12;//不能被修改
		cout << *iter3 << " ";
	}
	cout << endl;

	//六、迭代器失效
	//在迭代器循环中不要使用插入或者删除等可能改变迭代器的操作
	


	//灾难程序演示1
	iv = { 1,2,3,4,5 };
	iv.insert(iv.begin(), 0);
	auto beg = iv.begin();
	auto end = iv.end();
	
	while (beg!=end)
	{
		cout << *beg << " ";
		++beg;
	}
	cout << endl;

	//erase(iter)，删除迭代器处的元素，返回下一个元素的迭代器
	for (auto iter = iv.begin(); iter != iv.end(); )
	{
		iter = iv.erase(iter);
	}
	//or
	iv = { 1,2,3,4,5 };
	auto iter = iv.begin();
	auto iterend = iv.end();
	while (iter!=iv.end())
	{
		iter = iv.erase(iter);
	}

	iv = { 1,2,3,4,5 };
	while (!iv.empty())
	{
		iv.erase(iv.begin());
	}


	iv = { 1,2,3,4,5 };

	//7.2 vector容器常用操作与内存释放



	cout << "hello world" << endl;
	system("pause");
	return 0;

}

