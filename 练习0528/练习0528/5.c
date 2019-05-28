#include<stdio.h>
int betweenEven(int a, int b) {
	int i, sum = 0;
	for (i = a + 1; i < b; ++i) {
		if (i % 2 == 0)
			sum += i;
	}
	return sum;
}
int main5() {
	int a = 2, b = 9;
	printf("%d\n", betweenEven(a, b));
	system("pause");
	return 0;
}