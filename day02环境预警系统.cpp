#include<iostream>
using namespace std;
#include<string>

int main() {
	//�����û�������¶���ֵ���Զ��жϹ�ҵ�����Ƿ�ȫ��
	int temp = 0;
	cout << "�����뵱ǰ�¶ȣ���λ�����϶ȣ���" << endl;
	cin >> temp;

	if (temp <= 0) {
		cout << "��ǰ�¶�Ϊ��" << temp << "���϶�." << "�¶ȹ��ͣ���ע�⣡" << endl;
	}
	else if (temp > 0 && temp <= 30) {
	cout << "��ǰ�¶�Ϊ��" << temp << "���϶�." << "�¶����У��뱣�֣�" << endl;
	}
	else if (temp > 30 && temp <= 80) {
		cout << "��ǰ�¶�Ϊ��" << temp << "���϶ȡ��¶�ƫ�ߣ���ע�⣡" << endl;

	}
	else  {
		cout << "��ǰ�¶�Ϊ��" << temp << "���϶ȡ��¶ȹ��ߣ�" << endl;
	}


	system("pause");
	return 0;

}