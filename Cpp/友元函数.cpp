#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
* ��Ԫ����
1. �����Ԫ�����Ƕ��������ⲿ������Ȩ�������private��protected��Ա��
2. ��Ԫ�������ǳ�Ա���������ǿ��Է������е��κγ�Ա
3. �����Լ��ˣ����Ǹ��Լ�����һ����
4. ��Ԫ����û��thisָ�룬ֻ�г�Ա��������thisָ��
*/

class Student
{
public:
	//��������ֿ���ʱһ����
	Student(int n, string name, int grade) :num(n), grade(grade), name(name)
	{
		cout << "���캯������" << endl;
	}
	~Student()
	{
		cout << "������������" << endl;
	}
	Student* get_address()
	{
		return this;
	}
	friend void print(Student stu);
private:
	int num;
	string name;
protected:
	int grade;
};



int main(void)
{
	Student s1(1, "xiaoming", 99);
	
	print(s1);//������ʱ�����˿��������Դ�������������

	Student* p = s1.get_address();

	cout << p << endl;

	cout << "hello world" << endl;
	system("pause");
	return 0;

}

void print(Student stu)
{
	cout << stu.name << ": " << stu.grade << endl;
}
