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
	//求中位数的方法：
	//1. 如果元素个数是奇数个，则中位数的位置是(n+1)/2  对应的在元素下标就是(n-1)/2
	//2. 如果元素的个数是偶数个，那么对应的两个中间数是：n/2 和 n/2+1  对应的在元素下标就是 n/2 和 n/2-1

	//一、基本用法，对基本类型数组进行从小到大的排序
	sort(arr.begin(), arr.end());
	for (auto x : arr)
		cout << x << " ";
	cout << endl;

	//二、对元素类型为T的基本类型数组从大到小进行排序
	//sort(arr.begin(), arr.end(), greater<int>());
	//for (auto x : arr)
	//	cout << x << " ";
	//cout << endl;

	//三、自定义排序规则;sort(数组名+n1，数组名+n2，排序规则结构名）;
	//eg:偶数在前，奇数在后的同时按照从下到大的顺序进行排序
	sort(arr.begin(), arr.end(),cmp);
	for (auto x : arr)
		cout << x << " ";
	cout << endl;


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

