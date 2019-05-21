#include<stdio.h>
void _Print(int n) {
	int i, j;
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= i; ++j) {
			printf("%2d*%-2d=%-3d ", j, i, j*i);
		}
		putchar('\n');
	}
}
int main1() {
	int n = 12;
	_Print(n);
	system("pause");
	return 0;
}