#include<stdio.h>
int main3() {
	int n = 10;
	int n2 = 20;
	//ǰ������ͬ�� ���ܸı�ָ��ı���
	/*const int * p = &n;
	int const * p = &n;*/
	//���ܸı�ָ��ĵ�ַ
	/*int * const p = &n;*/
	/* *p = 20;
	p = &n2;*/
	printf("%c%c%c%c\n", 32, 65, 97, 48);
	system("pause");
	return 0;
}