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
		cout << "�������������������������" << endl;
		cin >> num1 >> num2;
		cout << gcd(num1, num2) << endl;
		cout << "�밴c������һ��,b��ֹ����" << endl;
		while(cin >> ch) {
			if(ch == 'c' || ch == 'b') {
				break;
			} else {
				cout << "�밴c������һ��,b��ֹ����" << endl;
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
