#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <vector>

using namespace std;

class A {
public:
	A() {
		cout << "Ĭ�Ϲ��캯��...." << endl;
	}
	A(int tmpi):m_i(tmpi) {
		cout << "���캯��...." << endl;
	}

	A(const A&) {

		cout << "�������캯��...." << endl;
	}

	~A() {
		cout << "��������...." << endl;
	}
	int m_i;
};

int main(void)
{
	//STL����ɲ���
	//���������������㷨���������������������������������º�����

	//һ�������ķ���
	//vector list map �����Ǳ������ݵ�
	//STL�е�������Ϊ������;
	//1. ˳������(sequence Containers):array vector deque list 
	//2. ����������associative containers��:Ԫ���� ��/ֵ  �� ���ر��ʺ�������:set/multiset  map/multimap
	//3. ����������unordered containers��:C++11 �˳���Ԫ�ص�λ�ò���Ҫ����Ҫ�������Ԫ���Ƿ�������������
	//��������Ҳ����һ�ֹ�������

	//A a(1);
	//A b(a); 
	vector<A> myveca(10);//���ֳ�ʼ����ʽ�����Ĭ�ϵĹ��캯��

	vector<A> veca;
	cout << "myveca.size: " << veca.size() << endl;
	cout << "myveca.capacity: " << veca.capacity() << endl;

	veca.reserve(10);//Ԥ��10��A�ռ�Ĵ�С
	cout << "myveca.size: " << veca.size() << endl;
	cout << "myveca.capacity: " << veca.capacity() << endl;

	//vector<int> aa(12);

	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << "------begin------" << endl;
	//	myveca.push_back(A(i));
	//	cout << "------end------" << endl;
	//}

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

