#include<stdio.h>
int main1() {
	char ch;
	int i = 0;
	while (ch = getchar(),  ch != '\n') {
		if (ch== 'X') {
			++i;
		}
	}
	printf("%d\n", i);
	system("pause");
	return 0;
}
