#include<iostream>
using namespace std;
#include<string>

int main() {
	string name;
	int age;
	int WorkID;
	string position;

	cout << "欢迎来到上海工业制造中心，请开始你的工程师之旅" << endl;

	cout << "请输入您的姓名：" << endl; 
	cin >> name; 

	cout << "请输入您的年龄：" << endl;
	cin >> age;
	
	cout << "请输入您的工号：" << endl;
	cin >> WorkID;

	cout << "请输入您的职位：(如工程师、运维员、质检员)" << endl;
	cin >> position;

	cout << "欢迎" << name << "来到工业制造中心这个大家庭，您的年龄是" << age << "，工号是" << WorkID << "，职位是" << position << endl;
	cout << "请您在工作中保持积极向上的态度，努力工作，认真负责，做一个优秀的"<<position << endl;
	system("pause");
	return 0;
}