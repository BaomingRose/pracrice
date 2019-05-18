#include<stdio.h>
int main3() {
	int i = 0, count = 0, j = 0;
	for (i = 1; i <= 100; ++i) {
		for (j = i; j; j /= 10) {
			if (j % 10 == 9) {
				++count;

			}
		}
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}