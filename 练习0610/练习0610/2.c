#include<stdio.h>
int main() {
	char ch;
	while (ch = getchar(), ch != '\n') {
		if (ch <= 'Z' && ch >= 'A') {
			ch = ch + 32;
			printf("%c", ch);
		}
		else
			printf("%c", ch);
	}
	putchar('\n');
	system("pause");
	return 0;
}