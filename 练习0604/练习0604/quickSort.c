#include<stdio.h>
//��С����������
void quickSort(int *a, int left, int right) {
	if (left >= right) {
		return;
	}
	int i = left;
	int j = right;
	int key = a[left];
	while (i < j) {
		while (i < j && key <= a[j]) {	
			--j;		/*��ǰѰ��*/
		}
		a[i] = a[j];
		while (i < j && key >= a[i]) {
			++i;
		}
		a[j] = a[i];
	}
	a[i] = key;
	quickSort(a, left, i - 1);/*��ͬ���ķ�ʽ�Էֳ������С������*/
	quickSort(a, i + 1, right);/*���ұߵ�С������*/
					/*�����ܳ��ֺܶ����ң�ֱ��ÿһ��i = jΪֹ*/
}
int main() {
	int arr[] = { 9, 3, 4, 1, 8, 0, 33, 11 };
	quickSort(arr, 0, 7);
	int i;
	for (i = 0; i < 8; ++i) {
		printf("%d ", arr[i]);
	}
	putchar('\n');
	system("pause");
	return 0;
}