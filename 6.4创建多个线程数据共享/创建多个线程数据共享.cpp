#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <vector>
#include <thread>
#include <list>

using namespace std;

/*
1. �����͵ȴ�����߳�
2. ���ݹ����������

3. �������ݵı�����������


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
	//�յ�����Ϣ���������뵽һ�����е��߳�
	//void

private:
	list<int> msgRecvQueue;
};


namespace _nmsp1
{

	void func()
	{
		//�������ݱ������밸��
	}
}

int main(void)
{
	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

