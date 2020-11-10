#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

#include <thread>

using namespace std;

/*
一、范例演示线程运行的开始和结束
1. thread   //类
2. join()
3. detach()
4. joinable()

二、其它创建线程的手法
1. 用类，以及一个问题范例
2. 用lambda表达式

*/


void myprint(void)
{
	cout << "thread start...." << endl;

	cout << "thread start 1 ...." << endl;
	cout << "thread start 2 ...." << endl;
	cout << "thread start 3 ...." << endl;
	cout << "thread start 4 ...." << endl;
	cout << "thread start 5 ...." << endl;
	cout << "thread start 6 ...." << endl;


	cout << "thread stop...." << endl;
}

void myprint1(void)
{
	cout << "--thread start...." << endl;

	cout << "--thread start 1 ...." << endl;
	cout << "--thread start 2 ...." << endl;
	cout << "--thread start 3 ...." << endl;
	cout << "--thread start 4 ...." << endl;
	cout << "--thread start 5 ...." << endl;
	cout << "--thread start 6 ...." << endl;


	cout << "--thread stop...." << endl;
}

class A
{
public:
	int m_i=0;
	A(int &i):m_i(i) {};

	//拷贝构造函数
	A(const A &a)
	{
		cout << "拷贝构造函数" << endl;
	}
	//A() {}
	void operator()()
	{
		cout << "A thread start...." << endl;

		cout << &m_i << endl;

		cout << "A thread stop...." << endl;
	}
	~A()
	{
		cout << "析构函数...." << endl;
	}
};

int main(void)
{
	//一、范例演示线程运行的开始和结束

	//thread是标准库中的类，接收的对象是一个可调用对象
	//thread myjob1(myprint);
	//myjob1.join();//主线程阻塞等待子线程结束

	//int i = 12;
	//cout << &i << endl;
	//A a(i);
	//thread myjob2(a);
	////thread myjob2( A(i) );
	//myjob2.join();  


	//1.3 detach():
	//传统多线程程序主线程要等待子线程执行完毕，然后再退出
	//detach：分离；引入原因：创建了许多子线程时，一直让主线程等待子线程的方式不太好
	//一旦detach()之后，于主线程相关联的thread对象就会失去于这个主线程的关联，此时这个子线程就会驻留后台，被C++运行时库接管，由运行时库负责清理该线程相关的资源（守护进程）

	//thread myjob1(myprint);
	//thread myjob2(myprint1);
	//auto x = myjob1.joinable();
	//auto x1 = myjob2.joinable();
	//myjob1.join();//detach之后就不能再join()了,否则系统会出现异常，还是需要自己去控制它的生命周期
	//myjob2.detach();
	//x = myjob1.joinable();
	//x1 = myjob2.joinable();

	//1.4 joinable()    :判断是否 可以 成功使用join() or detach()    返回值时 true / false   eg：使用过join之后就不能再使用detach了



	//用lambda表达式
	auto mylabthread = []
	{
		cout << "lambda thraed start...." << endl;

		cout << "lambda thraed stop...." << endl;
	};
	thread myjob3(mylabthread);
	myjob3.join();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

