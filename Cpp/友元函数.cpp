#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 

using namespace std;

/*
* 友元函数
1. 类的友元函数是定义在类外部，但有权访问类的private和protected成员。
2. 友元函数不是成员函数，但是可以访问类中的任何成员
3. 不是自己人，但是跟自己人是一样的
4. 友元函数没有this指针，只有成员函数才有this指针
*/

class Student
{
public:
	//这里的名字可以时一样的
	Student(int n, string name, int grade) :num(n), grade(grade), name(name)
	{
		cout << "构造函数。。" << endl;
	}
	~Student()
	{
		cout << "析构函数。。" << endl;
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
	
	print(s1);//传参数时进行了拷贝，所以触发了析构函数

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
