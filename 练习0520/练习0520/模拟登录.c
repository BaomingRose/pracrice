#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int pwdJudge(char password[]) {
	int i;
	char input[21] = { 0 };
	for (i = 0; i < 3; ++i) {
		scanf("%s", input);
		system("cls");
		if (strcmp(input, password) == 0) {

			return 1;
		}
		else {
			printf("密码不正确，还有%d次机会\n", 2 - i);
		}
	}
	return 0;
}
int main() {
	char password[] = "woshizuishuaide";
	printf("请输入开机密码(三次无效)：\n");
	if (pwdJudge(password)) {
		printf("登录成功！\n");
	}
	else {
		printf("登录失败！\n");
	}
	system("pause");
	return 0;
}