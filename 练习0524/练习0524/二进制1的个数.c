#include<stdio.h>
int count_one_bits(unsigned int value) {
	int i, count = 0;
	for (i = value; i; i /= 2) {
		if (i % 2 == 1) {
			++count;
		}
	}
	return count;
}
int main1() {
	int n = 255;
	printf("%d\n", count_one_bits(n));
	system("pause");
	return 0;
}