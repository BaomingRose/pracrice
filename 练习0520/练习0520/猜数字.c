#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu() {
	printf("=================\n");
	printf("    1.��ʼ��Ϸ   \n");
	printf("    0.�˳���Ϸ   \n");
	printf("    ��ѡ�񡭡�   \n");
	printf("=================\n");
}
void game() {
	srand((unsigned int)time(0));
	int random_num = rand() % 100 + 1;
	printf("���һ��0��100�����֣�\n");
	int num;
	while (1) {
		scanf("%d", &num);
		if (num == random_num) {
			printf("�¶��ˣ�\n");
			break;
		}
		else if (num < random_num) {
			printf("��С�ˣ��ٲ²�\n");
		}
		else {
			printf("�´��ˣ��ٲ²�\n");
		}

	}
}
int main() {
	while (1) {
		menu();
		int chioce;
		scanf("%d", &chioce);
		system("cls");
		if (chioce == 1) {
			game();
		}
		else if (chioce == 0) {
			printf("�ټ���������");
			break;
		}
		else {
			printf("���������������������룡");
			continue;
		}
	}
	
	system("pause");
	return 0;
}