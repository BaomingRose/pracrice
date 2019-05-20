#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void menu() {
	printf("=================\n");
	printf("    1.开始游戏   \n");
	printf("    0.退出游戏   \n");
	printf("    请选择……   \n");
	printf("=================\n");
}
void game() {
	srand((unsigned int)time(0));
	int random_num = rand() % 100 + 1;
	printf("请猜一个0—100的数字：\n");
	int num;
	while (1) {
		scanf("%d", &num);
		if (num == random_num) {
			printf("猜对了！\n");
			break;
		}
		else if (num < random_num) {
			printf("猜小了！再猜猜\n");
		}
		else {
			printf("猜大了！再猜猜\n");
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
			printf("再见啦！！！");
			break;
		}
		else {
			printf("您的输入有误！请重新输入！");
			continue;
		}
	}
	
	system("pause");
	return 0;
}