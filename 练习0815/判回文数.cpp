#include<iostream>

using namespace std;

bool isPalind(int n) {
	int i;
	int tmp = 0;
	for(i = n; i; i /= 10) {		//遍历数位 
		tmp = tmp * 10 + i % 10;	//倒置 
	}
	return (tmp == n);
}

int main() {
	int n;
	while(cin >> n && n) {
		system("cls");
		if(isPalind(n))
			cout << n << "是回文数" << endl;
		else
			cout << n << "不是回文数" << endl;
	}
	return 0;
}
