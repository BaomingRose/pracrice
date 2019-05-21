#include<stdio.h>
int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int Fib(int n) {
	int i, last1 = 1, last2 = 1, cur;
	if (n == 1 || n == 2) {
		return 1;
	}
	for (i = 3; i <= n; ++i) {
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}
int main1() {
	int n = 10;
	printf("递归实现：%d\n", fib(n));
	printf("非递归实现：%d\n", Fib(n));
	system("pause");
	return 0;
}