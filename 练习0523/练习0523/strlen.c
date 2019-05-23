#include<stdio.h>
int strlength(char str[]) {
	int i;
	for (i = 0; str[i]; ++i);
	return i;
}
int strLength(char str[]) {
	if (str[0] == 0) {
		return 0;
	}
	return 1 + strLength(str + 1);
}
int main5() {
	char str[] = "abcdefg";
	printf("%d\n", strlength(str));
	printf("%d\n", strLength(str));
	system("pause");
	return 0;
}