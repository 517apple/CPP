
#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <map>

using namespace std;

/*
1. using����ģ�����
2. ��ʽ����ģ�����

�ܽ᣺������һ��ʹ��ģ���������������ģ��
*/


//����һ�����ͣ�ǰ��һ���̶ֹ����䣬map<string���䣬���Ϳ����Լ�ָ��>
template <typename wt>
struct map_s
{
	typedef map<string, wt> map_s_w;
};

//map_s<int>::map_s_w map1;
//  c++ 98��ʵ�ַ�ʽ
//map1.insert({ "first", 1 });


//C++ 11 ��ʵ�ַ�ʽ
template<typename T>
using map_s_t = map<string, T>;
//��using��������ģ�塱����һ������


//using��ֵ��typedef�������


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
	//һ��using����ģ�����
	//typedef:һ�������������ͱ���
	typedef map<string, int> map_s_i;

	map_s_i mymap;
	mymap.insert({ "first", 1 });

	map_s_t<int> map2;
	map2.insert({ "second", 2 });

	//using �����ڶ������ͣ���������ģ�壩��ʱ���ǰ�����typedef�����й���
	//using����ʱ��������ǰ�ߣ���typedef��˳��ǡ���෴

	using mf = int(*)(int, int);//����һ������ָ��
	typedef int(*mf1)(int, int);//typedef���庯��ָ��

	mf3<int> add1 = add;
	cout << add1(1, 2) << endl;

	auto res = sum<double>(2000000000, 2000000000);//�ֹ�ָ������������
	//auto res = sum< , , double>(2000000000, 2000000000);//C++�еĶ���û������д��

	cout << res << endl;

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

