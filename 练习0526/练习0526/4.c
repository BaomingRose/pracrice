#include<stdio.h>
//��һ���ַ����������Ϊ:"student a am i",
//	���㽫��������ݸ�Ϊ"i am a student".
//	Ҫ��
//	����ʹ�ÿ⺯����
//	ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�
//	student a am i
//	i ma a tneduts
//	i am a student
void reverse_word(char * str) {
	char tmp[256] = { 0 };
	char * p;
	while (p = strrchr(str, ' ')) {
		strcat(tmp, p + 1);
		strcat(tmp, " ");
		*p = 0;
	}
	strcat(tmp, str);
	strcpy(str, tmp);
}
void reverse_string(char * str, int i, int j) {
	char tmp;
	for (; i < j; i++, j--) {
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void reverse_word2(char * str) {
	int i;
	int start = 0, end = 0;
	for (i = 0; str[i]; i++) {
		if (str[i] == ' ') {
			end = i - 1;
			reverse_string(str, start, end);
			start = i + 1;
		}
	}
	reverse_string(str, start, i - 1);
	reverse_string(str, 0, i - 1);
}

int main() {
	char str[] = "i am a student";
	reverse_word(str);
	printf("%s\n", str);
	char str1[] = "i love you";
	reverse_word2(str1);
	puts(str1);
	system("pause");
	return 0;
}