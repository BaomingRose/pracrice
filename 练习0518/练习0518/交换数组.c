#include<stdio.h>

int main1() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 10,9,8,7,6 };
	int i = 0, tmp;
	for (i = 0; i < 5; ++i) {
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	for (i = 0; i < 5; ++i) {
		printf("%d ", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 5; ++i) {
		printf("%d ", b[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}