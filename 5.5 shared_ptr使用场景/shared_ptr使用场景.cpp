#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

shared_ptr<int> createO(int value)
{
	return make_shared<int>(value);
}

shared_ptr<int> myfunc(int value)
{
	auto ptmp = createO(value);
	//return �뿪������֮��ptmp���Զ�����
	return ptmp;
}

void func1(shared_ptr<int> p1)
{
	return;
}

int main(void)
{
	//һ��shared_ptrʹ�ó���
	//myfunc(12);
	//auto p1 = myfunc(12);

	//shared_ptrʹ���������
	//2.1 ������ָ��
	int* p = new int(12);
	//auto p1 = make_shared<int>(p);
	func1(shared_ptr<int>(p));//�����е�����Ѿ���p��ָ����ڴ�ת����������ָ�룬һ����ʱ��shared_ptr
	//�ں�������֮����Ϊ�βε�shared_ptr�ᱻ�ͷţ�ָ����ڴ�ᱻ����
	//����������ǣ���func1���������У�pָ����ڴ汻�ͷ���һ�Σ��ص�����main��������֮��ָ����ڴ��ֿ��Ա���ֵ�ˣ����ǲ��ܱ��ͷ�
	//��Ӧ�ø��������й�ϵ
	delete p;
	*p = 13;//��������Ϊʲô���ǿ��Ը�����ֵ������ 

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

