#include<iostream>
using namespace std;
#include<string>

int main() {
	string name;
	int age;
	int WorkID;
	string position;

	cout << "��ӭ�����Ϻ���ҵ�������ģ��뿪ʼ��Ĺ���ʦ֮��" << endl;

	cout << "����������������" << endl; 
	cin >> name; 

	cout << "�������������䣺" << endl;
	cin >> age;
	
	cout << "���������Ĺ��ţ�" << endl;
	cin >> WorkID;

	cout << "����������ְλ��(�繤��ʦ����άԱ���ʼ�Ա)" << endl;
	cin >> position;

	cout << "��ӭ" << name << "������ҵ��������������ͥ������������" << age << "��������" << WorkID << "��ְλ��" << position << endl;
	cout << "�����ڹ����б��ֻ������ϵ�̬�ȣ�Ŭ�����������渺����һ�������"<<position << endl;
	system("pause");
	return 0;
}