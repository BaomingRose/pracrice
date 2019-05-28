#include<stdio.h>
int main3() {
	int a, b, c;
	for (a = 1; a <= 93; ++a) {
		for (b = 1; b <= 47; ++b) {
			for (c = 1; c < 20; ++c) {
				if (a * 1 + b * 2 + c * 5 == 100)
					printf("%d张1元，%d张2元，%d张5元\n", a, b, c);
			}
		}
	}
	system("pause");
	return 0;
}