#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
��ĳ�Ա������
1. ���캯��û�з������ͣ�����void�������Ժ�������Ҳ������return
2. C++��������η���private��Ĭ�ϣ���public,protected
3. private��ֻ�������Ԫ�����ſ��Է��ʣ������ࣨ���࣬�̳й����ģ����ɷ���
4. protected: ������ɷ���
5. ������������������Ҫ�Ѻ����Ķ���д����ߣ������н��ж���ĺ�������Ҫ����.
6. �̳�Ĭ����private


*/

//struct MyBox
//{
//	//����ĳ�Ա������public
//	double length;
//	double breadth;
//	double height;
//	
//};

class Box {
public:
	double length;
	double breadth;
	double height;
	double getVolume1(void);//��Ա����1����������ⲿ��ʹ�������������::
	Box(double len, double w);
	//Box(void);

	double getVolume2(void)//��Ա����2����������ڲ������ඨ���ж���ĳ�Ա�����ɺ�������Ϊ������
	{
		return length * breadth * height;
	}
	Box(double len, double b, double h)
	{
		cout << "���캯��...." << endl;
		length = len;
		breadth = b;
		height = h;
	}
	Box()
	{
		cout << "���캯������...." << endl;
	}
};

//ʹ�ó�ʼ���б�����ʼ���ֶ�
Box::Box(double len, double w):length(len),breadth(w)
{
	cout << "ʹ�ó�ʼ���б�����ʼ���ֶ�" << endl;
}

double Box::getVolume1(void)
{
	return length * breadth * height;
}


class MyBox :public Box
{
public:
	MyBox(double len, double b, double h)
	{
		//Box(1,2,3);
		cout << "���Ǽ̳���������Ĺ��캯��" << endl;
	}
};


int main1(void)
{
	Box box1(1.0, 2.0, 3.0);
	Box box2;
	cout << box1.getVolume1() << endl;

	Box box4(1.1, 2.2);

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

