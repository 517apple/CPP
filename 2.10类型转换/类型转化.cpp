#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
1. ��ʽ����ת��
2. ��ʽ����ת��
	static_cast
	dynamic_cast
	const_cast
	reinterpret_cast
3. �ܽ�

*/

int main(void)
{
	//һ����ʽ����ת����ϵͳ�Զ�����
	//int m = 3 + 3.14;

	//������ʽ����ת����ǿ������ת����
	//nt k = 5 % (int)3.2;//C���Է���ǿ������ת��
	//int k = 5 % int(3.2);//��������ǿ������ת��

	//C++ǿ������ת����Ϊ4�֣������ƺ�Ϊ��������ǿ������ת����
	//ͨ����ʽ
	//ǿ������ת����  <type><express>   
	//static_cast����̬����ת���������ʱ��ͻ��������ת���ļ��
	
	/*
	//�����ڣ�
	1. �������ת�����������ͺ�ʵ��֮���ת��
	2. ������ת���ɸ���   
	3. void *����������ָ��֮���ת��

	�������ڣ�ָ������֮���ת��
	*/
	/*double f = 3.1415f;
	int i = (int)f;
	int i2 = static_cast<int>(f)*/;

	//dynamic_cast:��ҪӦ��������������ʶ��ͼ�飬��Ҫ���ڸ����ͺ�������֮��ת���õ�

	//const_cast��ȥ��ָ��������õ�const���ԣ���ת���ܹ���const����ת����
	//	����ʱ�ͻ��������ת��
	const int i = 12;
	const int& ii = i;
	int& a = const_cast< int&>(ii);
	a = 13;
	cout << i << endl;
	cout << a << endl;

	const int x = 12;
	int &x1 = const_cast<int&>(x);

	x1 = 13;
	cout << x << endl;
	cout << x1 << endl;

	//reinterpret_cast   �������͵�ת��


	//�ܽ�
	//1. ǿ������ת��������ʹ�á����ܹ����Ʊ���������
	//2. ѧϰĿ�ģ���ʶ��Щ����ת�����������Ķ����˵Ĵ���
	//3. ��Ҫ��ʹ��C���Է�������ת����
	//4. static_cast��reinterpret_cast�ܹ��ܺõ�ȡ��C����ǿ������ת����


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

