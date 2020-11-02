
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <map>

using namespace std;

/*
1. using定义模板别名
2. 显式定义模板参数

总结：这种是一种使用模板别名，叫做类型模板
*/


//定义一个类型，前面一部分固定不变，map<string不变，类型可以自己指定>
template <typename wt>
struct map_s
{
	typedef map<string, wt> map_s_w;
};

//map_s<int>::map_s_w map1;
//  c++ 98的实现方式
//map1.insert({ "first", 1 });


//C++ 11 的实现方式
template<typename T>
using map_s_t = map<string, T>;
//用using给“类型模板”起了一个别名


//using像赋值，typedef像定义变量


template<typename T>
using mf3 = int(*)(int ,T);

int add(int a, int b)
{
	return a + b;
}


template<typename T1, typename T2, typename T3>
T1 sum(T2 a, T3 b)
{
	T1 ans = a;
	ans += b;
	return ans;
}


int main(void)
{
	//一。using定义模板别名
	//typedef:一般用来定义类型别名
	typedef map<string, int> map_s_i;

	map_s_i mymap;
	mymap.insert({ "first", 1 });

	map_s_t<int> map2;
	map2.insert({ "second", 2 });

	//using 在用于定义类型（定义类型模板）的时候，是包含了typedef的所有功能
	//using定义时，别名在前边，与typedef的顺序恰好相反

	using mf = int(*)(int, int);//定义一个函数指针
	typedef int(*mf1)(int, int);//typedef定义函数指针

	mf3<int> add1 = add;
	cout << add1(1, 2) << endl;

	auto res = sum<double>(2000000000, 2000000000);//手工指定的类型优先
	//auto res = sum< , , double>(2000000000, 2000000000);//C++中的逗号没有这种写法

	cout << res << endl;

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

