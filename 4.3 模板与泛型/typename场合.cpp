#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;


typedef int(*funtype)(int, int);

int mf(int a, int b)
{
	return a + b;
}

template<typename T,typename Q=tc>
void testfun(T a, T b, Q mf1=tc())//����������ֵΪȱʡֵ��Ĭ��
{
	int c = mf1(a, b);
	cout << c << endl;
}


class tc
{
public:
	tc()
	{
		cout << "���캯��..." << endl;
	}

	//����()�����
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}


};

int main(void)
{
	//һ��typename��ʹ�ó���
	//template<typename T>

	//������������������ͳ�Ա��Ĭ�ϸö����Ǿ�̬��Ա�������������һ�����͵�ʱ������Ҫ��ǰ�����typename�����߱�����


	//string::size_type size=getlength...//������unsigned int


	//����ָ�������������Ĳ���
	testfun(1, 2, mf);

	tc tc1;
	testfun(2, 2, tc1);

	testfun(2, 8);

	//�ɵ��ö���δ����֪ʶ��

	//�ġ�Ĭ��ģ�����
	//1. ��ģ���߱�����<>���ṩ�������Ϣ��<>  ��ʾ����һ��ģ��
	//2. ����ģ�壺�ϱ�׼ֻ��Ϊ��ģ���ṩ�ṩĬ��ģ�����


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

