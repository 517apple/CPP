#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <mutex>
#include <list>


using namespace std;



class A
{
public:
	//��������ʹ��
	//lock() unlock()
	//���裺����ɶ�ʹ��

	//std::lock_guard��ģ�壺ֱ��ȡ��lock()��unlock()

private:
	list<int> msgRecvQueue;
};



int main(void)
{


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

