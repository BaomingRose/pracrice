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
			printf("���벻��ȷ������%d�λ���\n", 2 - i);
		}
	}
	return 0;
}
int main() {
	char password[] = "woshizuishuaide";
	printf("�����뿪������(������Ч)��\n");
	if (pwdJudge(password)) {
		printf("��¼�ɹ���\n");
	}
	else {
		printf("��¼ʧ�ܣ�\n");
	}
	system("pause");
	return 0;
}