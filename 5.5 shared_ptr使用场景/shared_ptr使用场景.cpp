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
	//return 离开作用域之后，ptmp会自动销毁
	return ptmp;
}

void func1(shared_ptr<int> p1)
{
	return;
}

int main(void)
{
	//一、shared_ptr使用场景
	//myfunc(12);
	//auto p1 = myfunc(12);

	//shared_ptr使用陷阱分析
	//2.1 慎用裸指针
	int* p = new int(12);
	//auto p1 = make_shared<int>(p);
	func1(shared_ptr<int>(p));//（）中的语句已经将p所指向的内存转换成了智能指针，一个临时的shared_ptr
	//在函数返回之后，作为形参的shared_ptr会被释放，指向的内存会被回收
	//这里的现象是，在func1的作用域中，p指向的内存被释放了一次，回到函数main的作用域之后，指向的内存又可以被赋值了，但是不能被释放
	//这应该跟编译器有关系
	//delete p;
	cout << *p << endl;
	*p = 13;//但是这里为什么还是可以给它赋值？↑↑ 
	//可以理解为现在的p是一个空悬指针，所指向的内存也并没有被释放，所以还是可以继续进行赋值，包括后面的内存也都可以进行赋值，因为这一块内存对程序来说是可用的

	*(p + 1) = 14;
	*(p + 2) = 15;

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

