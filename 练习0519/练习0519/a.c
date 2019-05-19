#include<stdio.h>
#include<math.h>
int main3() {
	int i, sum = 0;
	for (i = 1; i <= 5; ++i) {
		sum += (pow(10, i) - 1) * 2 / 9;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}