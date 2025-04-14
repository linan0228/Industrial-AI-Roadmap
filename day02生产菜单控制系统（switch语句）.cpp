#include<iostream>
using namespace std;
#include<string>

int main() {
	int num = 0;
	cout << "欢迎使用生产菜单控制系统！" << endl;
	cout << "请输入生产菜单编号（1-4）：" << endl;
	cout << "1.启动设备" << endl;
	cout << "2.停止设备" << endl;
	cout << "3.查询设备状态" << endl;
	cout << "4.退出系统" << endl;
	cin >> num;
	switch(num) {
	case 1:
		cout << "设备正在启动中！" << endl;
		break;
	case 2:
		cout << "设备正在停止中！" << endl;
		break;
	case 3:
		cout << "设备状态正常！" << endl;
		break;
	case 4:
		cout << "正在退出系统！" << endl;
		break;
	default:
		cout << "输入错误，请重新输入！" << endl;
		break;
	
	}


}