#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double pay(double distance) {
	if (distance <= 3.0) {
		return 10.0;
	}
	return 10.0+(distance - 3.0)*1.5;
}
int main1() {
	double distance;
	scanf("%lf", &distance);
	printf("所需费用为%.2f\n", pay(distance));
	system("pause");
	return 0;
}