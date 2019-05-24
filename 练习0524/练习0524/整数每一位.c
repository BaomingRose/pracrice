#include<stdio.h>
void Print(int num) {
	if (num) {
		Print(num / 10);
		printf("%d ", num % 10);
	}
}
int main3() {
	Print(143243254);
	putchar('\n');
	system("pause");
	return 0;
}