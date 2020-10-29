#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

//前置返回类型
void fun1(int a, int)//函数定义和函数声明的时候可以形参名（如果用不到的话）
{
	return;
}

//C++11中，后置返回类型，把返回类型放在参数列表之后
auto fun2(int a, int b)->void;//函数声明
auto fun2(int a, int b)->void
{
	return;
}


//内联函数：在函数定义前加关键字inline，普通函数就变成了内联函数
//函数体很小，调用又很频繁
//1. inline影响编译器，在编译阶段对inline这种函数进行处理，尝试将调用函数的动作替换为函数本体
//2. inline只是开发者对编译器的一个建议，是否替换的决定权取决于编译器
//3. 内联函数的定义要放在头文件中，以便找到这个函数的本体源代码并进行替换
//4. 各种编译器对inline函数的处理不一定相同，循环、分支、递归调用等不要出现

//#define宏展开也类似于inline
//constexpr函数可以看成是更严格的inline函数
constexpr int mf()
{
	//这里要写得尽量简单
	return 1;
}

inline int fun3(int a)
{
	return 1;
}


//三、函数杂合用法总结
//1. 函数可以只声明而不定义
//2. 参数的形参如果是引用的形式，在传递较大的数据结构时可以提高效率
//3. C++习惯用引用类型的形参来取代指针类型的形参
//4. C++中允许函数重载


struct Student {
	int num;
};

int get_num(const int num)
{
	//num = 13;
	return num;
}

int main(void)
{
	//四、const char* ,char const *, char * const
	//const char* 与 char const * 是等价的：该指针指向的内容不能被修改
	//char * const ：指针的指向不能被修改
	char str[] = "hello";
	char* p;
	p = str;
	p++;

	//引用分配内存的情况,用const进行修饰
	const int& b = 12;

	//五、函数形参中带const
	//搭配引用，防止成员值被无意修改
	Student stu;
	stu.num = 12;


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

