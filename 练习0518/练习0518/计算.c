#include<stdio.h>

int main() {
	int i;
	double tmp, sum = 0.0, change = 1;
	for (i = 1; i <= 100; ++i) {
		
		tmp = change / i;
		sum += tmp;
		change *= (-1);
	}
	printf("%lf\n", sum);
	system("pause");
	return 0;
}