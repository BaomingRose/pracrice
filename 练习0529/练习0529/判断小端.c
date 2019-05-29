#include<stdio.h>
int isLittleEnd() {
	int num = 1;
	/*char *p = (char *)&num;
	if (*p == 0) {
		return 0;
	}
	return 1;*/
	return *(char*)&num;
}

int main3() {
	//一台机器是大端小端取决于CPU
	int num = 10;
	if (isLittleEnd())
		printf("小端\n");
	system("pause");
	return 0;
}