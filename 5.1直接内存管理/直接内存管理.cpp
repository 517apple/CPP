#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*

*/

int main(void)
{
	//һ��ֱ���ڴ����new/delete��
	//new�����ڶ���  ֱ���ڴ����new/delete��
	//��γ�ʼ����
	int* p = new int;//��ֵδ����
	int* p1 = new int(100);//�����˳�ֵ100
	string* s = new string;//�����string�Ĺ��캯��

	//ע�������ܽ᣺
	//1. new������һ��Ҫdelete,�����ڴ�й¶�����б���
	//2. delete���ڴ治����ʹ��

	int* p3 = new int(10);
	delete p3;
	p3 = nullptr;//��ϰ��

	//C++11 ����������ָ��

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

