#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. �÷����
2. �����б�
3. lambda���ʽ�ӳٵ����׳���ϸ�ڷ���
 
*/

int main(void)
{
	//һ���÷����
	//C++11��Ҳ��һ�ֿɵ��ö���
	//lambda���ʽ��������һ���������������ҿ��Բ���һ����Χ�ڵı���

	auto f = [](int a)->int
	{
		return 1;
	};
	//�ص�
	//1. �Ǹ������������������Ϊ "�ɵ��õĴ��뵥Ԫ"  ���������Ϊ δ��������������
	//2. ����һ���������ͣ�һ�������б�һ��������
	//3. �뺯����ͬ��lambda���ʽ�����ں����ڲ����壬����ǳ��溯����������
	//4. 

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

