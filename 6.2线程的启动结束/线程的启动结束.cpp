#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

#include <thread>

using namespace std;

/*
һ��������ʾ�߳����еĿ�ʼ�ͽ���
1. thread   //��
2. join()
3. detach()
4. joinable()

�������������̵߳��ַ�
1. ���࣬�Լ�һ�����ⷶ��
2. ��lambda���ʽ

*/


void myprint(void)
{
	cout << "thread start...." << endl;

	cout << "thread start 1 ...." << endl;
	cout << "thread start 2 ...." << endl;
	cout << "thread start 3 ...." << endl;
	cout << "thread start 4 ...." << endl;
	cout << "thread start 5 ...." << endl;
	cout << "thread start 6 ...." << endl;


	cout << "thread stop...." << endl;
}

void myprint1(void)
{
	cout << "--thread start...." << endl;

	cout << "--thread start 1 ...." << endl;
	cout << "--thread start 2 ...." << endl;
	cout << "--thread start 3 ...." << endl;
	cout << "--thread start 4 ...." << endl;
	cout << "--thread start 5 ...." << endl;
	cout << "--thread start 6 ...." << endl;


	cout << "--thread stop...." << endl;
}

class A
{
public:
	int m_i=0;
	A(int &i):m_i(i) {};

	//�������캯��
	A(const A &a)
	{
		cout << "�������캯��" << endl;
	}
	//A() {}
	void operator()()
	{
		cout << "A thread start...." << endl;

		cout << &m_i << endl;

		cout << "A thread stop...." << endl;
	}
	~A()
	{
		cout << "��������...." << endl;
	}
};

int main(void)
{
	//һ��������ʾ�߳����еĿ�ʼ�ͽ���

	//thread�Ǳ�׼���е��࣬���յĶ�����һ���ɵ��ö���
	//thread myjob1(myprint);
	//myjob1.join();//���߳������ȴ����߳̽���

	//int i = 12;
	//cout << &i << endl;
	//A a(i);
	//thread myjob2(a);
	////thread myjob2( A(i) );
	//myjob2.join();  


	//1.3 detach():
	//��ͳ���̳߳������߳�Ҫ�ȴ����߳�ִ����ϣ�Ȼ�����˳�
	//detach�����룻����ԭ�򣺴�����������߳�ʱ��һֱ�����̵߳ȴ����̵߳ķ�ʽ��̫��
	//һ��detach()֮�������߳��������thread����ͻ�ʧȥ��������̵߳Ĺ�������ʱ������߳̾ͻ�פ����̨����C++����ʱ��ӹܣ�������ʱ�⸺��������߳���ص���Դ���ػ����̣�

	//thread myjob1(myprint);
	//thread myjob2(myprint1);
	//auto x = myjob1.joinable();
	//auto x1 = myjob2.joinable();
	//myjob1.join();//detach֮��Ͳ�����join()��,����ϵͳ������쳣��������Ҫ�Լ�ȥ����������������
	//myjob2.detach();
	//x = myjob1.joinable();
	//x1 = myjob2.joinable();

	//1.4 joinable()    :�ж��Ƿ� ���� �ɹ�ʹ��join() or detach()    ����ֵʱ true / false   eg��ʹ�ù�join֮��Ͳ�����ʹ��detach��



	//��lambda���ʽ
	auto mylabthread = []
	{
		cout << "lambda thraed start...." << endl;

		cout << "lambda thraed stop...." << endl;
	};
	thread myjob3(mylabthread);
	myjob3.join();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

