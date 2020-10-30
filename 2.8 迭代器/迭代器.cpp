#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <vector>

using namespace std;



int main(void)
{
	//���������
	vector<int> iv{ 1,2,3,4 };
	for (vector<int>::iterator iter = iv.begin(); iter != iv.end(); iter++)
	{
		cout << *iter << " ";
	}
	cout << endl;

	for (vector<int>::reverse_iterator riter = iv.rbegin(); riter != iv.rend(); riter++)
	{
		cout << *riter << " ";
	}
	cout << endl;

	//const_iterator��������const��ʾ�������������ֵ���ܸı����˼����ʾ������ָ���ֵ���ܱ��ı䣬�����������ָ���ǿ��Ըı��
	//ֻ�ܴ������ж�ȡԪ�أ�ֻ�ܷ��ʶ������޸ġ�������������Ϊ�������βν���ʹ��Ҳ�ǱȽϸ�Ч��

	//���vector<int> ��һ�������������Ǿ�ֻ��ͨ��const_iterator���з�����
	vector<int>::const_iterator iter2;
	iter2 = iv.begin();
	for ( ; iter2 != iv.end(); iter2++)
	{
		//*iter2 = 12;//���ܱ��޸�
		cout << *iter2 << " ";
	}
	cout << endl;

	//5.1 C++11�������������µĺ���cbegin()��cend(),���صĶ��ǳ���������
	for (auto iter3 = iv.cbegin(); iter3 != iv.cend(); iter3++)
	{
		//*iter3 = 12;//���ܱ��޸�
		cout << *iter3 << " ";
	}
	cout << endl;

	for (auto iter3 = iv.crbegin(); iter3 != iv.crend(); iter3++)
	{
		//*iter3 = 12;//���ܱ��޸�
		cout << *iter3 << " ";
	}
	cout << endl;

	//����������ʧЧ
	//�ڵ�����ѭ���в�Ҫʹ�ò������ɾ���ȿ��ܸı�������Ĳ���
	


	//���ѳ�����ʾ1
	iv = { 1,2,3,4,5 };
	iv.insert(iv.begin(), 0);
	auto beg = iv.begin();
	auto end = iv.end();
	
	while (beg!=end)
	{
		cout << *beg << " ";
		++beg;
	}
	cout << endl;

	//erase(iter)��ɾ������������Ԫ�أ�������һ��Ԫ�صĵ�����
	for (auto iter = iv.begin(); iter != iv.end(); )
	{
		iter = iv.erase(iter);
	}
	//or
	iv = { 1,2,3,4,5 };
	auto iter = iv.begin();
	auto iterend = iv.end();
	while (iter!=iv.end())
	{
		iter = iv.erase(iter);
	}

	iv = { 1,2,3,4,5 };
	while (!iv.empty())
	{
		iv.erase(iv.begin());
	}


	iv = { 1,2,3,4,5 };

	//7.2 vector�������ò������ڴ��ͷ�



	cout << "hello world" << endl;
	system("pause");
	return 0;

}

