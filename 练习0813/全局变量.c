#include<stdio.h>

int x = 3;

void inc() {
	static int x = 1;
	x *= (x + 1);
	printf("%d\n", x);
	return;
}

int main() {
	int i;
	for (i = 1; i < x; ++i) {	//	x = 3
		inc();					//�����ڲ���x=1����һ��ѭ��x=2���ڶ���ѭ��x=6�� ����ѭ��
	}
	return 0;
}

/* ���н����
2
6
*/
