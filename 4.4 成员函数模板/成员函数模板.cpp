#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
��Ա����ģ�壬��ʾʵ����������
1�� ��ͨ��ĳ�Ա����ģ��
2�� ��ģ��ĳ�Ա����ģ��
3�� ģ����ʽʵ������ģ������


*/


//��ʽʵ����,ֱ��ʵ����֮�󣬺����ڴ�����ʱ��Ͳ���Ҫ�ڵ�һ�δ�����ʱ�����ˣ�������ͷ�ģ�庯������ʵ��������
template A<float>;


//��Ա����ģ��
template <typename C>//���ģ�����
class A
{
public:

	A() {}

	template<typename T2>
	A(T2 v1,T2 v2)
	{

	}

	template<typename T>
	void myft(T tmpt)
	{
		cout << tmpt << endl;
	}

	void fun1(void)
	{
		cout << &fun1 << endl;
	}


	template<typename T>
	void myft1(T tmpt);

	C f1;
};




//��Ա����д�ں������ʱ�ķ�ʽ
template<typename C>//����
template<typename T>//����
void A<C>::myft1(T tmpt)
{
	//cout << &myft1 << ":";
	cout << tmpt << endl;
}

void fun1(void)
{
	cout << fun1 << endl;
}

int main(void)
{
	//��ͨ��ĳ�Ա����ģ��
	A<float> a;
	
	fun1();

	a.myft1(12);
	a.myft1(13);
	a.myft1("string");

	//������ģ��ĳ�Ա����ģ��
	//��ģ���ģ�����������<>ָ��
	//��ģ��ĳ�Ա������������ͨ��Ա�����ͺ���ģ�壩ֻ��Ϊ�������òŽ���ʵ����
	//���ĳ������δʹ�ã��򲻻�ʵ�����ó�Ա����


	cout << "hello world" << endl;
	system("pause");
	return 0;

}


