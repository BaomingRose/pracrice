#include<stdio.h>
int count_differ(int a, int b) {
	int i, count = 0, tmp;
	tmp = a ^ b;
	for (i = tmp; i; i /= 2) {
		if (i % 2 == 1) {
			++count;
		}
	}
	return count;
}
int main4() {
	int a = 8, b = 7;
	printf("%d\n", count_differ(a, b));
	system("pause");
	return 0;
}