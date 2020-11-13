#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <vector>
#include <thread>
#include <list>

using namespace std;

/*
1. 创建和等待多个线程
2. 数据共享问题分析

3. 共享数据的保护案例代码


*/


void myprint(int i)
{
	cout << "thread start...." << endl;

	cout << "this is thread:" << i << endl;

	cout << "thread end...." << endl;
}

namespace _nmsp1
{

	void func()
	{
		vector<thread> thvec;
		for (size_t i = 0; i < 5; i++)
		{
			thvec.push_back(thread(myprint, i));
		}
		for (auto iter = thvec.begin(); iter != thvec.end(); ++iter)
		{
			iter->join();
		}
		cout << "----------------" << endl;
	}
}


class A
{
public:
	//收到的消息（玩家命令）入到一个队列的线程
	//void

private:
	list<int> msgRecvQueue;
};


namespace _nmsp1
{

	void func()
	{
		//共享数据保护代码案例
	}
}

int main(void)
{
	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

