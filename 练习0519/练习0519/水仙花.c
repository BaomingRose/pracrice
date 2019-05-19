#include<stdio.h>
#include<math.h>
int isNarcissistic(int num) {
	int i, sum = 0;
	for (i = num; i; i /= 10) {
		sum += pow(i % 10, 3);
	}
	if (sum == num) {
		return 1;
	}
	return 0;
}
int main2() {
	int i = 0;
	for (i = 0; i <= 999; ++i) {
		if (isNarcissistic(i)) {
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}