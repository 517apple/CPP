#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
outline:
1. ��ģ���ػ�
1.1 ��ģ��ȫ�ػ�
1.2 ��ģ��ƫ�ػ�

2. ����ģ���ػ�
2.1 ����ģ��ȫ�ػ�
2.1 ����ģ��ƫ�ػ�

3. ģ���ػ��汾����λ�ý���

*/


template<typename T,typename Q>
struct TC
{
	TC() {
		cout << "Ĭ�Ϲ��캯��" << endl;
	}

	void functest()
	{
		cout << "�����汾" << endl;
	}
	

};

//ȫ�ػ���������������ģ����������þ������ʹ��棬����template��ߵ�<>��Ϊ��
template<>  //ȫ�ػ�
struct TC<int,int>
{
	TC() {
		cout << "int,int���캯��" << endl;
	}
	void functest()
	{
		cout << "�ػ��汾1" << endl;
	}
};


//��Ա�����ػ�,�ػ���Ա����������ģ��
template<>
void TC<int,double>::functest()
{
	cout << "int ,double �����汾����" << endl;
}



template<typename T>
struct TC1
{
	void functest()
	{
		cout << "�����汾" << endl;
	}
};

template<typename T>
struct TC1<T&>
{
	void functest()
	{
		cout << "��ֵ�����ػ��汾" << endl;
	}
};


template<typename T>
struct TC1<T &&>
{
	void functest()
	{
		cout << "��ֵ�����ػ��汾" << endl;
	}
};



template<typename T, typename Q>
void func(T& a, Q& b)
{
	cout << "�����汾����" << endl;
	
}


int main(void)
{
	//�ػ������������ͽ�������Դ�������д�ʺ�����ר�ô���   
	//������

	//��ģ���ػ�
	//��ģ��ȫ�ػ�
	//ֻҪ�ػ���һ���ȴ��ڷ���
	//�ػ��汾�Ĵ���ᱻ����ʹ��,�ػ��汾�����кܶ�
	//TC<int, string> tc1;
	//tc1.functest();

	//TC<int, int> tc2;
	//tc2.functest();

	////�����ػ���Ա����������ģ��
	//TC<int, double> tc3;
	//tc3.functest();

	//ȫ�ػ������е����Ͷ����滻
	//ƫ�ػ����������ͱ��滻


	//TC1<int&> tc1;
	//tc1.functest();

	//TC1<int&&> tc2;
	//tc2.functest();
	
	string s1("string");
	int a = 12;
	func(s1, a);
	func(s1, a);

	//�����ػ��汾�У���ͨ���ȣ��ػ��汾�������汾
	//����ģ��ֻ��ȫ�ػ�������ƫ�ػ�

	//����ģ���ػ��汾����λ�ý���
	//ģ�嶨�壬ʵ�ֶ�����.h��
	//ģ����ػ��汾

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

