#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

//ǰ�÷�������
void fun1(int a, int)//��������ͺ���������ʱ������β���������ò����Ļ���
{
	return;
}

//C++11�У����÷������ͣ��ѷ������ͷ��ڲ����б�֮��
auto fun2(int a, int b)->void;//��������
auto fun2(int a, int b)->void
{
	return;
}


//�����������ں�������ǰ�ӹؼ���inline����ͨ�����ͱ������������
//�������С�������ֺ�Ƶ��
//1. inlineӰ����������ڱ���׶ζ�inline���ֺ������д������Խ����ú����Ķ����滻Ϊ��������
//2. inlineֻ�ǿ����߶Ա�������һ�����飬�Ƿ��滻�ľ���Ȩȡ���ڱ�����
//3. ���������Ķ���Ҫ����ͷ�ļ��У��Ա��ҵ���������ı���Դ���벢�����滻
//4. ���ֱ�������inline�����Ĵ���һ����ͬ��ѭ������֧���ݹ���õȲ�Ҫ����

//#define��չ��Ҳ������inline
//constexpr�������Կ����Ǹ��ϸ��inline����
constexpr int mf()
{
	//����Ҫд�þ�����
	return 1;
}

inline int fun3(int a)
{
	return 1;
}


//���������Ӻ��÷��ܽ�
//1. ��������ֻ������������
//2. �������β���������õ���ʽ���ڴ��ݽϴ�����ݽṹʱ�������Ч��
//3. C++ϰ�����������͵��β���ȡ��ָ�����͵��β�
//4. C++������������


struct Student {
	int num;
};

int get_num(const int num)
{
	//num = 13;
	return num;
}

int main(void)
{
	//�ġ�const char* ,char const *, char * const
	//const char* �� char const * �ǵȼ۵ģ���ָ��ָ������ݲ��ܱ��޸�
	//char * const ��ָ���ָ���ܱ��޸�
	char str[] = "hello";
	char* p;
	p = str;
	p++;

	//���÷����ڴ�����,��const��������
	const int& b = 12;

	//�塢�����β��д�const
	//�������ã���ֹ��Աֵ�������޸�
	Student stu;
	stu.num = 12;


	cout << "hello world" << endl;
	system("pause");
	return 0;

}

