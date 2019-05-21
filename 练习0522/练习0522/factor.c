#include<stdio.h>
int factor(int n) {
	int i,fac = 1;
	for (i = 1; i <= n; ++i) {
		fac *= i;
	}
	return fac;
}
int Factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factor(n - 1);
}
int main() {
	int n = 10;
	printf("递归实现：%d\n", Factor(n));
	printf("非递归实现：%d\n", factor(n));
	system("pause");
	return 0;
}