#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;
/*
��ľ�̬��Ա��
1. ��Ҫ���ⲿ���г�ʼ��

*/


class Box {
public:
	static int length;
	Box()
	{
		length = 13;
	}

};

int Box::length = 12;

int main(void)
{
	cout << Box::length << endl;

	Box box;
	cout << Box::length << endl;

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

