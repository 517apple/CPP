#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <deque>
#include <forward_list>
#include <map>
#include <unordered_set>

using namespace std;

/*
1. deque��stack
2. queue
3. list
4. forward_list
	set/map
	unordered_set....


*/


namespace _nmsp1 
{
	void func()
	{
		//һ��deque��stack
	//deque�Ƿֶε������ڴ�
	//stack��vector����������stackֻ֧�ִ�ջ������Ԫ�غ�ȡ��Ԫ��
	//dequeʱ���ϰ�����stack�Ĺ���

		deque<int> dq;
		cout << "��ʼ��ַΪ��" << &dq << endl;
		dq.push_back(0);
		cout << "��ʼ��ַΪ��" << &dq << endl;
		dq.push_back(1);
		dq.push_back(2);
		dq.push_back(3);
		dq.push_back(4);

		dq.push_front(-1);
		dq.push_front(-2);
		dq.push_front(-3);
		dq.push_front(-4);

		for (size_t i = 0; i < dq.size(); i++)
		{
			cout << "�±꣺" << i << " dq[i]=" << dq[i] << "  ��ַ��" << &dq[i] << endl;
		}



		//queue�����У��Ƚ��ȳ����Ƚ��ȳ���Ҳ��һ�ֻ��������ݽṹ
	}

}


//����forward_list�����޵�˫��������ʡ�ڴ��ַ�Ŀ���
namespace _nmsp2
{
	void func()
	{
		forward_list<int> myforlist;

	}
}

//set/map
namespace _nmsp3
{
	void func()
	{
		//  set / map�ǹ����������ڲ�ʵ�����ú����ʵ�ֵģ���������ʱ����Ҫ����ָ��λ��
		//  map: ÿ��Ԫ�������key/value��һ��ͨ��key��value��

		map<int, string> mymap;
		mymap.insert(make_pair(1, "jack"));
		mymap.insert(pair<int, string>(2, "javk"));

		auto iter = mymap.find(1);
		if (iter != mymap.end())
		{
			cout << "find!!" << iter->second.c_str() << endl;
		}


		//set�е�ÿһ��Ԫ�ؾ���һ��value��Ԫ��ֵ�����ظ�

	}
}

//  unordered_set/map
namespace _nmsp4
{
	void func()
	{
		//�ϰ汾��hash�йص�set��hash_map�ȵ��Ѿ���unorderedȡ����
		unordered_set<int> myset;
		cout << myset.bucket_count() << endl;
		cout << myset.max_bucket_count() << endl;

	}
}



int main(void)
{
	//_nmsp3::func();
	_nmsp4::func();

	//ȫ�ֵ�find����
	vector<int> arr{ 1,2,3,4,5,6 };
	if (find(arr.begin(), arr.end(), 1) != arr.end())
	{
		cout << "find" << endl;
	}
	if (find(arr.begin(), arr.end(), 0) != arr.end())
	{
		cout << "find" << endl;
	}
	

	cout << "hello world" << endl; 
	system("pause");
	return 0;

}

