#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <thread>

using namespace std;

/*
һ��������ʱ������Ϊ�̲߳���

������ʱ������Ϊ�̲߳���������

�����������������ָ����Ϊ�̲߳���

�ġ��ó�Ա����ָ�����̺߳���


*/


namespace _nmsp1
{
	void myprint(const int& i, char* buf)
	{
		cout << i << endl;
		cout << buf << endl;
		return;
	}

	void func()
	{
		//һ��������ʱ������Ϊ�̲߳���
		int myvar = 1;
		int& myvary = myvar;
		char mybuf[] = "this is a test";
		thread myjob1(myprint, myvary, mybuf);
		myjob1.join();
	}
}

int main(void)
{
	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

