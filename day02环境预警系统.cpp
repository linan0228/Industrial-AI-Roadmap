#include<iostream>
using namespace std;
#include<string>

int main() {
	//根据用户输入的温度数值，自动判断工业环境是否安全：
	int temp = 0;
	cout << "请输入当前温度（单位：摄氏度）：" << endl;
	cin >> temp;

	if (temp <= 0) {
		cout << "当前温度为：" << temp << "摄氏度." << "温度过低，请注意！" << endl;
	}
	else if (temp > 0 && temp <= 30) {
	cout << "当前温度为：" << temp << "摄氏度." << "温度适中，请保持！" << endl;
	}
	else if (temp > 30 && temp <= 80) {
		cout << "当前温度为：" << temp << "摄氏度。温度偏高，请注意！" << endl;

	}
	else  {
		cout << "当前温度为：" << temp << "摄氏度。温度过高！" << endl;
	}


	system("pause");
	return 0;

}