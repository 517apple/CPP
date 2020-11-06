#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
������ shared_ptr���ò������������Զ���ɾ�����ȵ�
1�� shared_ptr���ü��������Ӻͼ���
1.1 ���ü�������
1.2 ���ü�������


2�� shared_ptrָ�볣�ò���
use_count()
unique()
reset()
������*
get()
swap()
=nullptr
����ָ��������Ϊ�ж�����
ָ��ɾ�����Լ���������

*/

//ʹ������ʱ�����������ô���
//
void myfunc(shared_ptr<int> ptmp)
{
	cout << ptmp.use_count() << endl;
	return;
}

shared_ptr<int> myfunc1(shared_ptr<int>& ptmp)
{
	cout << ptmp.use_count() << endl;
	return ptmp;
}

int main(void)
{
	//һ��shared_ptr���ü��������Ӻͼ���
	//����ʽ�����ü�����ÿһ��shared_ptr�Ŀ�����ָ����ͬ���ڴ棬ֻ�����һ��ָ��ö����
	//

	//auto p1 = make_shared<int>(12);
	//cout << p1.use_count() << endl;
	//auto p2 = p1;
	//cout << p1.use_count() << endl;
	//cout << p2.use_count() << endl;

	////myfunc(p2);

	////auto p3 = myfunc1(p2);
	////cout << p3.use_count() << endl;

	////�������ü����ļ���
	//p2 = make_shared<int>(13);//1. ָ���¶���
	//cout << p1.use_count() << endl;

	////2. �ֲ���ptr�뿪��return
	//myfunc(p1);
	//cout << p1.use_count() << endl;

	//3. ��һ��shared_ptr���ü�����1���0������Զ��ͷ��Լ�������Ķ���
	//auto p8 = make_shared<int>(10);
	//auto p9 = make_shared<int>(10);
	//p9 = p8;


	//����shared_ptrָ�볣�ò���
	//1. use_count���������ض��ٸ�����ָ��ָ��ĳ������
	//2. unique();  ֻ��һ������ָ��ָ��ͬһ�������򷵻�true�����򷵻�false
	//auto p8 = make_shared<int>(10);
	//cout << p8.unique() << endl;
	//auto p9(p8);
	//cout << p8.unique() << endl;
	//
	//
	////3. reset()����ʼ��������ָ��
	//shared_ptr<int> pother(new int(12));
	//cout << pother << endl;
	//pother.reset();
	//cout << pother << endl;

	//4. *�����ã���ȡpָ��Ķ���

	//5. get():��������ָ��p�б����ָ�루Ұָ�룩�����ǵ���Щ�����Ĳ�����Ҫ����һ������ָ�����������ָ��
	shared_ptr<int> sp(new int(10));
	cout << sp << endl;
	cout << *sp << endl;
	int* yp = sp.get();
	cout << yp << endl;
	cout << *yp << endl;
	//���ʱ����delete,���򲻿�Ԥ��

	//6. swap��������������ָ����ָ��Ķ���,ָ��ĵ�ַҲ���
	shared_ptr<string> p1(new string("string1"));
	shared_ptr<string> p2(new string("string2"));
	cout << p1 << ":" << *p1 << endl;
	cout << p2 << ":" << *p2 << endl;
	swap(p1, p2);
	cout << p1 << ":" << *p1 << endl;
	cout << p2 << ":" << *p2 << endl;

	shared_ptr<string> p21(new string("mem"));
	cout << (*p21).mem() << endl;
	//7. ����ָ��������Ϊ�ж�����

	//8. ָ��ɾ�����Լ���������
	//ָ��ɾ����
	//һ��ʱ��������ɾ����ָ��Ķ���delete ����delete���������ΪĬ�ϵ���Դ������ʽ
	 




	










	cout << "hello world" << endl;
	system("pause");
	return 0;

}

