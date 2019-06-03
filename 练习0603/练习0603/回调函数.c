#include<stdio.h>
typedef int(*Cmp)(int a, int b);
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//������(������������д�Ŀ⺯��)
void bubbleSort(int *a, int num, Cmp cmp) {
	int i, j;
	for (i = 0; i < num; ++i) {
		for (j = 0; j < num - i - 1; ++j) {
			if (!cmp(a[j], a[j + 1])) {
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}
//����Ա�Զ��ƵĹ���ȽϺ��������
int Less(int a, int b) {
	return a < b ? 1 : 0;
}
int Greater(int a, int b) {
	return a > b ? 1 : 0;
}
int main() {
	//�ص���������ͨ������̫һ��
	//��ͨ��������ʱ���ɳ���Ա�Լ�����
	//�ص���������ʱ���ɲ���ϵͳ���ߴ�����������
	int a[4] = { 9, 5, 2, 7 };
	bubbleSort(a, 4, Greater);
	int i;
	for (i = 0; i < 4; ++i) {
		printf("%d ", a[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}