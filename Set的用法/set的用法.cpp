#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <set>



using namespace std;

/*
1. ����Set:
	set�ǹ���ʽ������vector��װ���飬list��װ����map��set��װ��������
	C++ STL�б�׼��������set,multipset,map,multipmap�ڲ����õľ���һ�ַǳ���Ч��ƽ�������������RB tree��

Q1:Ϊ��map��set�Ĳ���ɾ��Ч�ʱ�����������������
A����Ϊ����ʽ��������Ҫ���ڴ濽�����ڴ��ƶ���set���������е�Ԫ�ض����Խڵ�ķ�ʽ���洢����ڵ�ṹ�������ࡣ
	�������Ԫ�ض����Խڵ�ķ�ʽ���洢����˲����ɾ����ʱ��ֻ��Ҫ�ڵ��ָ�������任�����ɡ�


*/

int main(void)
{
	set<int> s{ 9,5,6,3,1,7 };
	cout << "set��size:" << s.size() << endl;
	cout << "set��max_size:" << s.max_size() << endl;

	cout << "��Ԫ�أ�" << *s.begin() << endl;
	//�����end()ָ��Ļ���βԪ�ص���һ��λ�ã����Բ��ܹ�ֱ���ù�������ʹ��
	//�������������������Լ������ǲ���ʹ��+1  or  -1 
	cout << "βԪ�أ�" << *(--s.end()) << endl;

	for (auto x : s)
	{
		cout << x << "  ";
	}
	cout << endl;

	s.insert(0);

	cout << "set��size:" << s.size() << endl;
	cout << "set��max_size:" << s.max_size() << endl;

	cout << *s.rbegin() << endl;

	for (auto x : s)
	{
		cout << x << "  ";
	}
	cout << endl;

	set<int>::iterator iter;
	if ((iter = s.find(0)) != s.end())
	{
		cout << *iter << endl;
	}
	
	pair<set<int>::const_iterator, set<int>::const_iterator> pr;
	pr = s.equal_range(3);
	cout << "��һ�����ڵ��� 3 ������ ��" << *pr.first << endl;
	cout << "��һ������ 3������ �� " << *pr.second << endl;

	//erase(iterator)��ɾ����λ��iteratorָ���ֵ
	//erase(first,second)��ɾ��������first��end֮���ֵ
	//erase(key_value)��ɾ����ֵkey_value

	//insert(key_value):����ֵ��pair<set<int>::iterator.bool>  bool��־�Ų����Ƿ�ɹ���iterator��������λ��
	//insert(first,second):����ֵ��void����������֮������ֲ��뵽set��
	pair<set<int>::iterator, bool> p1;
	p1 = s.insert(-1);

	cout << "����Ԫ�ص�������λ�ã�" << *p1.first << endl;
	cout << "�����Ƿ�ɹ� �� " << p1.second << endl;//�����Ԫ���Ѿ����ڣ������ʧ��

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

