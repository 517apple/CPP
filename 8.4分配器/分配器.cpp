#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <list>

using namespace std;

/*
1. ����������
2. ��������ʹ��
3. �����ķ�����
4. �Զ��������

*/


namespace _nmsp1
{
	void func()
	{
		//һ��������������������������أ�һ��ʹ��
		//�ڴ�ؼ���
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

