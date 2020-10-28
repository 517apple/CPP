#define _CRT_SECURE_NO_WARNINGS
#include <iostream> 
#include <fstream>


using namespace std;

/*
文件和流：
1. 三个新的数据类型：
	ofstream：输出文件流，用于创建文件并向文件写入信息)、
	ifstream：输入文件流，用于从文件读取信息
	fstream：具备上面两种功能

2. 打开文件：void open(const char *filename,ios::openmode mode)
	第一个参数指定要打开文件的位置和文件名，
	第二个参数定义文件被打开的模式
	ios::app  追加模式，所有写入都追加到文件末尾
	ios::ate  at end 文件打开后定位到文件末尾
	ios::in   打开文件用于读取
	ios::out  打开文件用于写入
	ios::trunc如果文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为0

stream流数据都放在输入输出运算符的左边，


cin.ignore();//默认参数时cin.ignore(1，EOF);
即把EOF前的1个字符清掉，没有遇到EOF就清掉一个字符然后结束
*/


int main(void)
{
	ofstream afile;
	afile.open("file.txt");
	
	string s1("人间四月天");
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

