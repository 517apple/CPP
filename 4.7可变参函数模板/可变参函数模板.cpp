#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. �ɱ�κ���ģ��

2. �ɱ����ģ��
ͨ���ݹ�̳�ģʽ

*/


//�����Tָ�Ĳ���һ�����ͣ���Ӧ�����ͬ���͵Ĳ���
//T��ߴ���...�����Գƺ�T���ɱ������
template <typename... T>
void myfunct1(T... args)
{
	cout << sizeof...(args) << endl;
	cout << sizeof...(T) << endl;

	//cout << *args << endl;
}

//--------------------------
//�ݹ���ֹ������û�в����ˣ�
//���ݲ���ʱ����<��һ����������������>�ķ�ʽ��Ȼ��ͨ���ݹ�ķ�ʽ��չ���ݹ��
void myfunc2()
{
	cout << "������չ��ʱִ���˵ݹ���ֹ����myfunc2()..." << endl;
}

template <typename T, typename... Q>
void myfunc2(const T& firstarg, const Q&... otherargs)
{
	cout << "�յ��ĵ�һ������ֵΪ��" << firstarg << endl;
	myfunc2(otherargs...);
}


//�����ɱ����ģ�壺����ģ�嶨���к���0�������ģ�����
//


int main(void)
{

	//һ���ɱ��ģ��
	//1.1 �ɱ�κ���ģ��

	//myfunct1();
	myfunc2(11, 12, "abc");


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

