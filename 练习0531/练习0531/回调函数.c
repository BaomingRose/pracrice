#include<stdio.h>
typedef int(*Cmp)(int x, int y);
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//������
void bubbleSort(int *arr, int size, Cmp cmp) {
	int i, j;
	for (i = 0; i < size - 1; ++i) {
		for (j = 0; j < size - i - 1; ++j) {
			if (!cmp(arr[j], arr[j + 1])) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
//����Ա�Զ��ƵĹ���ȽϺ���
int less(int x, int y) {
	return x < y ? 1 : 0;
}
int greater(int x, int y) {
	return x > y ? 1 : 0;
}
int main() {
	//�ص���������ͨ������̫һ��
	//��ͨ��������ʱ���ɳ���Ա�Լ�����
	//�ص���������ʱ���ɲ���ϵͳ�������������
	int arr[4] = { 9, 5, 2, 7 };
	bubbleSort(arr, 4, greater);
	int i;
	for (i = 0; i < 4; ++i) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}