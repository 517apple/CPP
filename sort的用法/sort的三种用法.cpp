#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

/*
https://blog.csdn.net/qq_40486952/article/details/83280212


*/

bool cmp(int a, int b)
{
	//if (a % 2 == 0)
	//{
	//	if (b % 2 == 0)
	//		return a < b;
	//	else
	//		return true;
	//}
	//else
	//{
	//	if (b % 2 != 0)
	//		return a < b;
	//	else
	//		false;
	//}
	return ((a % 2 == 0)?((b % 2 == 0) ? (a < b) : true ) : ((b % 2 != 0) ? a < b : false));

}

int main(void)
{
	vector<int> arr={ 5,4,3,2,1,0 };
	//����λ���ķ�����
	//1. ���Ԫ�ظ�����������������λ����λ����(n+1)/2  ��Ӧ����Ԫ���±����(n-1)/2
	//2. ���Ԫ�صĸ�����ż��������ô��Ӧ�������м����ǣ�n/2 �� n/2+1  ��Ӧ����Ԫ���±���� n/2 �� n/2-1

	//һ�������÷����Ի�������������д�С���������
	sort(arr.begin(), arr.end());
	for (auto x : arr)
		cout << x << " ";
	cout << endl;

	//������Ԫ������ΪT�Ļ�����������Ӵ�С��������
	//sort(arr.begin(), arr.end(), greater<int>());
	//for (auto x : arr)
	//	cout << x << " ";
	//cout << endl;

	//�����Զ����������;sort(������+n1��������+n2���������ṹ����;
	//eg:ż����ǰ�������ں��ͬʱ���մ��µ����˳���������
	sort(arr.begin(), arr.end(),cmp);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

