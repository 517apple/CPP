#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <list>
#include <algorithm>
#include <vector>

using namespace std;

/*
1. �㷨����
2. �㷨�ڲ���һЩ����
3. һЩ���͵��㷨ʹ�÷���
	for_each()
	find()
	find_if()
	sort() //list����stackû��sort����
*/


namespace _nmsp1
{
	//һ���㷨���������Ϊ����ģ�壨ȫ�ֺ�����ȫ�ֺ���ģ�壩
	//�㷨��ǰ�����βε����ͣ�һ���ǵ��������ͣ����ڱ�ʾ�����е�Ԫ�ص�һ������

	//ǰ�պ�����ĺô�
	//1. �㷨ֻҪ�жϵ��������ں����������䣬�ͱ�ʾ��������
	//2. �����һ���βε��ڵڶ����βΣ����ʾ���Ǹ�������

	//���ͱ������������ԣ�����ȷʵ��ֱ���ԣ�ĳЩ���ݽṹ���㷨֮��ļ�����Ҳ��̫��

	//stl������Щ�㷨��


	void func()
	{
		list<int> mylist = { 500,200,300 };
		list<int>::iterator iterbeg = mylist.begin();
		list<int>::iterator iterend = mylist.end();//���һ��Ԫ�ص���һ��Ԫ��
		//�㷨��(itergeb,iterend) ( ] 

		for (auto x : mylist)
			cout << x << " ";
		cout << endl;

		//sort(iterbeg, iterend);
		for (auto x : mylist)
			cout << x << " ";
		cout << endl;

	}
}


namespace _nmsp2
{
	//�����㷨�ڲ���һЩ����
	//�㷨����ݴ��ݽ����ĵ�������������������������

	//����һЩ���͵��㷨
	//��Ҫ�����˿ɵ��ö�����������ܹ����������ݽ�ȥ֮�������Ӧ�Ĵ���

	void myfunc(int& i)
	{
		cout << i <<":"<<&i<< endl;
	}

	bool cmp(int i, int j)
	{
		return i > j;
	}

	//�����������()��Ϊһ���ɵ��ö���
	class A {
	public:
		bool operator()(int i, int j)
		{
			return i > j;
		}
	};


	void func()
	{

		//1. for_each�㷨
		//vector<int> myvec = { 1,2,3,4,5,6 };
		////���ϵĵ����������Ķ�����������֮���Ԫ�أ�Ȼ��һ���Ԫ��Ϊʵ��������myfunc
		//for_each(myvec.begin(), myvec.end(), myfunc);//myfunc�ǿɵ��ö���δ����֪ʶ����߽�

		//find�㷨
		vector<int> myvec = { 1,2,3,4,5,6 };
		cout << *(myvec.begin() + 3) << endl;
		auto iter = find(myvec.begin(), myvec.begin() + 3, 4);//+3 ֮�������ָ��4 ����ָ��4֮�󲢲�������ж�
		if (iter != myvec.begin() + 3)
		{
			cout << "find" << endl;
		}

		//find_if��ʾ
		//������ʱ��ֵѭ��������ɵ��ö�������ֽ������㣬������true��ʱ��ֹͣ���������ص�result��ָ���Ԫ�صĵ�����
		auto result = find_if(myvec.begin(), myvec.end(), [](int val)//������������һ���ɵ��ö���lambda���ʽҲ�ǿɵ��ö���
		{
			if (val > 3)
				return true;//�ҵ���
			return false;
		});

		//sort�����Զ������������ʾ���Ӵ�С
		vector<int> myvec1 = { 1,2,3,4,5,6 };
		A mya;
		//sort(myvec1.begin(), myvec1.end(), A());
		//sort(myvec1.begin(), myvec1.end(), cmp);
		sort(myvec1.begin(), myvec1.end(), mya);

		//list��֧��ȫ�ֵ�sort�㷨���������Լ���sort����
		list<int> mylist = { 1,4,7,2,5,8,3,6,9 };
		mylist.sort(cmp);



	}
}



int main(void)
{
	_nmsp2::func();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

