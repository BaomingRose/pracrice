#include<stdio.h>

int a = 1;

void test() {
	int a = 2;
	a += 1;
}

int main() {
	test();					//���ú���ʱ a = 2,a + 1 = 3,  �������ý�����a�ռ䱻�ͷŵ�
	printf("%d\n", a);		// a = 1(ȫ�ֱ���)
	return 0;
}
