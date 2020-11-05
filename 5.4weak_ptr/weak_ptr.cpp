#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;



int main(void)
{
	//一、weak_ptr概述：用来辅助shared_ptr进行工作
	//强指针：shared_ptr   弱指针：weak_ptr
	//weak_ptr 不是一个独立的智能指针，开起来像是shared_ptr的助手，用来监视shared_ptr的生命周期
	auto pi = make_shared<int>(10);
	cout << pi.use_count() << endl;
	weak_ptr<int> wp(pi);
	cout << pi.use_count() << endl;
	weak_ptr<int> wp2(pi);
	cout << wp2.use_count() << endl;

	//lock()://返回一个weak_ptr所指向的shared_ptr
	//reset()
	//weak_ptr能够判断所指向的对象是否存在

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

