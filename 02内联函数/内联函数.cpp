#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
内联函数：
1. 如果一个函数时内联的，那么在编译时，编译器会把该函数的代码读本放置在每个调用该函数的地方
2. 对内联函数进行任何修改，都需要重新编译函数的所有客户端
3. 如果所定义的函数多余一行，编译器会自动忽略inline说明符(这个不一定)
4. 类定义中定义的函数都是内联函数，即使没有inline限定符
5. 在编译的时候就把出现函数的地方进行替换，实际上就是一个以空间换时间的做法
6. 不要在内联函数中使用循环语句和开关语句
*/

inline int Max(int x, int y)
{
	return (x > y) ? x : y;
}


int main(void)
{
	cout << "Max (100,1010): " << Max(100, 1010) << endl;

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

