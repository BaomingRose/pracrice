#include<iostream>
#include<cstdio>
using namespace std;

int gcd(int a, int b) {
	int tmp; 
	while(b != 0) {
		tmp = a;
		a = b;
		b = tmp % b;
	}
	return a;	
}

int main() {
	int num1, num2;
	char ch;
	while(1) {
		cout << "请输入两个整数计算最大公因数" << endl;
		cin >> num1 >> num2;
		cout << gcd(num1, num2) << endl;
		cout << "请按c计算下一个,b终止计算" << endl;
		while(cin >> ch) {
			if(ch == 'c' || ch == 'b') {
				break;
			} else {
				cout << "请按c计算下一个,b终止计算" << endl;
				continue; 
			}
		}
		if(ch == 'b') {
			break;
		}
		system("cls");
	}
	
	return 0; 
}
