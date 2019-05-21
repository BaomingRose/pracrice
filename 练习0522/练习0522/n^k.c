#include<stdio.h>
int power(int n, int k) {
	if (k == 1) {
		return n;
	}
	return n * power(n, k - 1);
}
int Power(int n, int k) {
	int i, mul = 1;
	for (i = 1; i <= k; ++i) {
		mul *= n;
	}
	return mul;
}
int main2() {
	int n = 10, k = 3;
	printf("递归实现：%d\n", power(n, k));
	printf("非递归实现：%d\n", Power(n, k));
	system("pause");
	return 0;
}