#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;


/*
* ���������أ�
++ / -- ���صĺ�Ϊ������ ++x  / x++ ������һ������int 
eg�� operator++(int)Ϊ���õ����������


*/

class Box {
public:
	int length;
	Box(int len=0) :length(len)
	{
		cout << "���캯��" << endl;
	}
	//Box operator+(Box& b)
	//{
	//	Box box;
	//	box.length = this->length + b.length;
	//	return box;
	//}
	Box operator++(int)
	{
		Box temp;
		temp.length = length++;
		return temp;
	}
	//�����������������
	Box operator()(int a)
	{
		Box b;
		b.length = a;
		return b;
	}
	void print()
	{
		cout << length << endl;
	}
private:
	
};

int main(void)
{
	Box b1(12),b2(13);
	b1.print();
	//b1 = b1 + b2;
	b1++;
	b1.print();

	b1 = b1(16);
	b1.print();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

