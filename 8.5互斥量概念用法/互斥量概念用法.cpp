#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <mutex>
#include <list>


using namespace std;



class A
{
public:
	//互斥量的使用
	//lock() unlock()
	//步骤：必须成对使用

	//std::lock_guard类模板：直接取代lock()和unlock()

private:
	list<int> msgRecvQueue;
};



int main(void)
{


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

