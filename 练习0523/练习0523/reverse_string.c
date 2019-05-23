#include<stdio.h>
void reverse_string(char * string) {
	int end = strlen(string) - 1;
	int i;
	char tmp;
	for (i = 0; i < end; ++i, --end) {
		tmp = string[i];
		string[i] = string[end];
		string[end] = tmp;
	}
}
void reverseString(char *str) {
	int end = strlen(str) - 1;
	char tmp = str[0];
	if (str[0])
	{
		str[0] = str[end];
		str[end] = '\0';
		reverse_string(str + 1);
		str[end] = tmp;
	}
}
int main() {
	char str[] = "malefolen";
	reverse_string(str);
	puts(str);
	reverseString(str);
	puts(str);
	system("pause");
	return 0;
}