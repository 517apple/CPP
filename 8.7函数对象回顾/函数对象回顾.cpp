#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. ��������/�º����ع�
2. ��׼���ж���ĺ�������
3. ��׼���ж���ĺ���������

*/


namespace _nmsp1
{
	//һ����������
	//��STL��һ����㷨���ʹ�ã��Ӷ�ʵ��һЩ�ض��Ĺ��ܣ���Щ����������Ҫ���ڷ������㷨��
	//�������������б�
	/*
	��������/�º�����
	1. ����  void func(int x) {...}
	2. �ɵ��ö���  class A (public: void operator()(int x){})
	3. lambda���ʽ  [](int x){};
	*/
	class A {
	public:
		int operator()(int a, int b)
		{
			return a + b;
		}
	};
	void func()
	{
		//������׼���ж���ĺ�������
		int a = 1, b = 2;
		auto sum = plus<int>()(1,2);//plus�ڲ���ʵ��Ҳ�ǻ��ڲ��������صģ��������ߵĵ��÷�ʽ��������һ�µ�
		A aa;
		auto x= aa(1, 2);
		//auto x = A()(1, 2);
		//auto x=sum(1, 2);
	}
}


int main(void)
{

	_nmsp1::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

