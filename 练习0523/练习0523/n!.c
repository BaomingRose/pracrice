#include<stdio.h>
int factor(int n) {
	int i, tmp = 1, sum = 0;
	for (i = 1; i <= n; ++i) {
		tmp *= i;
		sum += tmp;
	}
	return sum;
}
int Factor(int n) {
	if (n == 1) {
		return 1;
	}
	return n * Factor(n - 1);
}
int main6() {
	int n = 5;
	printf("%d\n", factor(n));
	printf("%d\n", Factor(n));
	system("pause");
	return 0;
}