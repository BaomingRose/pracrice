#include<stdio.h>
//从小向大快速排序
void quickSort(int *a, int left, int right) {
	if (left >= right) {
		return;
	}
	int i = left;
	int j = right;
	int key = a[left];
	while (i < j) {
		while (i < j && key <= a[j]) {	
			--j;		/*向前寻找*/
		}
		a[i] = a[j];
		while (i < j && key >= a[i]) {
			++i;
		}
		a[j] = a[i];
	}
	a[i] = key;
	quickSort(a, left, i - 1);/*用同样的方式对分出的左边小组排序*/
	quickSort(a, i + 1, right);/*对右边的小组排序*/
					/*最后可能出现很多左右，直到每一组i = j为止*/
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