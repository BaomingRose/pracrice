#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isLeapYear(int year) {
	if (year % 400 == 0 || year % 4 == 0 && year % 100) {
		return 1;
	}
	return 0;
}
int main3() {
	int year = 200;
	scanf("%d", &year);
	if (isLeapYear(year))
		printf("%d������\n", year);
	else
		printf("%d��������\n", year);
	system("pause");
	return 0;
}