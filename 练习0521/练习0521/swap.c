#include<stdio.h>
void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main2() {
	int a = 10, b = 20;
	swap(&a, &b);
	printf("%d %d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}