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
	//һ̨�����Ǵ��С��ȡ����CPU
	int num = 10;
	if (isLittleEnd())
		printf("С��\n");
	system("pause");
	return 0;
}