#include<stdio.h>
int DigitSum(int n) {
	int i, sum = 0;
	for (i = n; i; i /= 10) {
		sum += i % 10;
	}
	return sum;
}
int digitSum(int n) {
	int sum = 0;
	if (n) {
		return n % 10 + digitSum(n / 10);
	}
	return 0;
}
int main3() {
	int n = 1729;
	printf("�ݹ�ʵ�֣�%d\n", digitSum(n));
	printf("�ǵݹ�ʵ�֣�%d\n", DigitSum(n));
	system("pause");
	return 0;
}