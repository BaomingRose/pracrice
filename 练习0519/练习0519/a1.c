#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	int i, sum = 0, tmp = a;
	for (i = 1; i <= 5; ++i) {
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}