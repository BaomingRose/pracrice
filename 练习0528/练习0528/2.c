#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double waterPrice(double ton) {
	if (ton <= 15.0)
		return ton * 2.5;
	return 15.0 * 2.5 + (ton - 15.0) * 3.0;
}
int main2() {
	double ton;
	scanf("%lf", &ton);
	printf("所需水费为%.2f\n", waterPrice(ton));
	system("pause");
	return 0;
}