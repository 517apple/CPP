#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;



int main(void)
{
	//һ��weak_ptr��������������shared_ptr���й���
	//ǿָ�룺shared_ptr   ��ָ�룺weak_ptr
	//weak_ptr ����һ������������ָ�룬����������shared_ptr�����֣���������shared_ptr����������
	auto pi = make_shared<int>(10);
	cout << pi.use_count() << endl;
	weak_ptr<int> wp(pi);
	cout << pi.use_count() << endl;
	weak_ptr<int> wp2(pi);
	cout << wp2.use_count() << endl;

	//lock()://����һ��weak_ptr��ָ���shared_ptr
	//reset()
	//weak_ptr�ܹ��ж���ָ��Ķ����Ƿ����

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

