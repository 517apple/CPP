#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <vector>

using namespace std;

class A {
public:
	A() {
		cout << "默认构造函数...." << endl;
	}
	A(int tmpi):m_i(tmpi) {
		cout << "构造函数...." << endl;
	}

	A(const A&) {

		cout << "拷贝构造函数...." << endl;
	}

	~A() {
		cout << "析构函数...." << endl;
	}
	int m_i;
};

int main(void)
{
	//STL的组成部分
	//容器、迭代器、算法（函数）、分配器、其它（适配器，仿函数）

	//一、容器的分类
	//vector list map 容器是保存数据的
	//STL中的容器分为三大类;
	//1. 顺序容器(sequence Containers):array vector deque list 
	//2. 关联容器（associative containers）:元素是 键/值  对 ，特别适合做查找:set/multiset  map/multimap
	//3. 无序容器（unordered containers）:C++11 退出，元素的位置不重要，重要的是这个元素是否在这个容器里边
	//无序容器也属于一种关联容器

	//A a(1);
	//A b(a); 
	vector<A> myveca(10);//这种初始化方式会调用默认的构造函数

	vector<A> veca;
	cout << "myveca.size: " << veca.size() << endl;
	cout << "myveca.capacity: " << veca.capacity() << endl;

	veca.reserve(10);//预留10个A空间的大小
	cout << "myveca.size: " << veca.size() << endl;
	cout << "myveca.capacity: " << veca.capacity() << endl;

	//vector<int> aa(12);

	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << "------begin------" << endl;
	//	myveca.push_back(A(i));
	//	cout << "------end------" << endl;
	//}

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

