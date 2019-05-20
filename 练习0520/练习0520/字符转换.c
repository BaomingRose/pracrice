#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define isBigLetter(ch) (ch <= 'Z' && ch >= 'A')
#define isSmallLetter(ch) (ch <='z' && ch >= 'a')
//int isBigLetter(char ch) {
//return ch<='Z' && ch>='A';
//}
int main() {
	char ch;
	while (1) {
		ch = getchar();
		if (ch == '@') {
			break;
		}
		if (isBigLetter(ch)) {
			putchar(ch + 32);
		}
		else if (isSmallLetter(ch))
		{
			putchar(ch - 32);
		}
		else if (isalnum(ch)) {
			//do nothing
		}
		else {
			putchar(ch);
		}
	}
	system("pause");
	return 0;
}