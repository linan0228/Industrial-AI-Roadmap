#include<iostream>
using namespace std;
#include<string>

int main() {
	int num = 0;
	cout << "��ӭʹ�������˵�����ϵͳ��" << endl;
	cout << "�����������˵���ţ�1-4����" << endl;
	cout << "1.�����豸" << endl;
	cout << "2.ֹͣ�豸" << endl;
	cout << "3.��ѯ�豸״̬" << endl;
	cout << "4.�˳�ϵͳ" << endl;
	cin >> num;
	switch(num) {
	case 1:
		cout << "�豸���������У�" << endl;
		break;
	case 2:
		cout << "�豸����ֹͣ�У�" << endl;
		break;
	case 3:
		cout << "�豸״̬������" << endl;
		break;
	case 4:
		cout << "�����˳�ϵͳ��" << endl;
		break;
	default:
		cout << "����������������룡" << endl;
		break;
	
	}


}