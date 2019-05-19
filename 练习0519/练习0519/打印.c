#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1() {
	int i, j;
	int n;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= 2 * i - 1; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
	for (i = n - 1; i >= 1; --i) {
		for (j = 1; j <= 2 * i - 1; ++j) {
			putchar('*');
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}