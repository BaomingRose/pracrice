#include<stdio.h>
int isPrimeNum(int num) {
	int i;
	for (i = 2; i <= sqrt(num); ++i) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main5() {
	int num = 9;
	if (isPrimeNum(num)) {
		printf("%d������\n", num);
	}
	else {
		printf("%d��������\n", num);
	}
	system("pause");
	return 0;
}