#include<stdio.h>
void Print(int num) {
	if (num) {
		Print(num / 10);
		printf("%d ", num % 10);
	}
}
int main7() {
	Print(43563);
	system("pause");
	return 0;
}