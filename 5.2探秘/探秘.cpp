#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;


//��Ա������ռ������ڴ�
class A
{
public:
	A();
	~A();

private:

};

A::A()
{
	cout << "���캯��������" << endl;
}

A::~A()
{
	cout << "��������������" << endl;
}

int main(void)
{
	//һ��new/delete̽��
	/*A* pa = new A();
	cout << sizeof(pa) << endl;
	delete pa;*/
	//new�����������飺1. ͨ��operator new()�������ڴ棻2. ���ù��캯������ʼ���ڴ�
	//deleteҲ�����������飺1. ������������  2. �ͷ��ڴ�

	//newӦ���ٷ�����ڴ渽����¼�˷�����ڴ�Ĵ�С���Է���delete�����ͷ�

	//1.3 ������ͷ�����


	//�ܽ᣺new/delete  new[]/delete[]  һ��Ҫ���ʹ�ã���


	//����ָ������
	//int* p = new int();//p����Ϊ��ָ��
	//int* q = p;

	//����ָ�룬�����ɶԡ���ָ�롱�����˰�װ����װ����ŵ�
	//1. �ܹ����Զ��ͷ���ָ��Ķ����ڴ桱��ʹ������ָ��ĳ�������ױ�д�͵��ԣ���������ѡ��ʹ��

	//C++��׼��������������ָ�룺
	//auto_ptr(c++ 98)  unique_ptr(c++ 11)   shared_ptr     weak_ptr����������shared_ptr��
	//C++ 11��auto_ptr��������

	//shared_ptr������ʽָ�룬���ָ��ָ��ͬһ���������һ��ָ�뱻����ʱ���������ᱻ�ͷ�
	//unique_ptr����ռʽָ�룬ͬһʱ�䣬ֻ��һ��ָ���ܹ�ָ��ö���

	//shared_ptr����
	//��������Ȩ�����Ǳ�һ��shared_ptr��ӵ�У����Ǳ����shared_ptr֮���໥Э����shared_ptr�ж��⿪��
	//����ԭ�����ü�����ÿ��shared_ptr�Ŀ�����ִ����ͬ���ڴ档
	//���һ��ָ����ڴ�����shared_ptr��ʲô����»��ͷŸö����أ�
	//1. ���shared_ptr��������ʱ��
	//2. ���shared_ptrָ����������ʱ��
	//�������ջ��ƣ����õ���ɶʱ��delete
	shared_ptr<int> p1(new int(100));
//	shared_ptr<int> p2 = new int(100);// = ��ʽת���ڳ�ʼ��ʱ��������

	shared_ptr<int> p2;//Ĭ�ϳ�ʼ����Ŀǰָ��һ���յĵ�ַ

	//make_shared����,���new�Ĺ���
	shared_ptr<int> p3 = make_shared<int>(100);
	shared_ptr<string> p4 = make_shared<string>("apple");
	//cout << *p3 << endl;
	cout << p4 << endl;
	cout << *p4 << endl;

	p4 = make_shared<string>("12");
	cout << *p4 << endl; 
	cout << p4 << endl;


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

