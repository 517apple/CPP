#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <fstream>


using namespace std;

/*
�ļ�������
1. �����µ��������ͣ�
	ofstream������ļ��������ڴ����ļ������ļ�д����Ϣ)��
	ifstream�������ļ��������ڴ��ļ���ȡ��Ϣ
	fstream���߱��������ֹ���

2. ���ļ���void open(const char *filename,ios::openmode mode)
	��һ������ָ��Ҫ���ļ���λ�ú��ļ�����
	�ڶ������������ļ����򿪵�ģʽ
	ios::app  ׷��ģʽ������д�붼׷�ӵ��ļ�ĩβ
	ios::ate  at end �ļ��򿪺�λ���ļ�ĩβ
	ios::in   ���ļ����ڶ�ȡ
	ios::out  ���ļ�����д��
	ios::trunc����ļ��Ѿ����ڣ������ݽ��ڴ��ļ�֮ǰ���ضϣ������ļ�������Ϊ0

stream�����ݶ���������������������ߣ�


cin.ignore();//Ĭ�ϲ���ʱcin.ignore(1��EOF);
����EOFǰ��1���ַ������û������EOF�����һ���ַ�Ȼ�����
*/


int main(void)
{
	ofstream afile;
	afile.open("file.txt");
	
	string s1("�˼�������");
	afile << s1;

	afile.close();

	ifstream file;
	file.open("file.txt", ios::in);
	file >> s1;
	cout << s1 << endl;

	file.close();

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

