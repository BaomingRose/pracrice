#include<iostream>

using namespace std;

bool isPalind(int n) {
	int i;
	int tmp = 0;
	for(i = n; i; i /= 10) {		//������λ 
		tmp = tmp * 10 + i % 10;	//���� 
	}
	return (tmp == n);
}

int main() {
	int n;
	while(cin >> n && n) {
		system("cls");
		if(isPalind(n))
			cout << n << "�ǻ�����" << endl;
		else
			cout << n << "���ǻ�����" << endl;
	}
	return 0;
}
