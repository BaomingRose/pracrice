#include<stdio.h>
int serchSix(int num) {
	int i, count = 0;
	for (i = num; i; i /= 10) {
		if (i % 10 == 6) {
			count++;
		}
	}
	return count;
}
int main() {
	int n = 6629356;
	printf("%d\n", serchSix(n));
	system("pause");
	return 0;
}