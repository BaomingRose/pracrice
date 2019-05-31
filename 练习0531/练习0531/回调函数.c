#include<stdio.h>
typedef int(*Cmp)(int x, int y);
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//代码框架
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
//程序员自定制的规则比较函数
int less(int x, int y) {
	return x < y ? 1 : 0;
}
int greater(int x, int y) {
	return x > y ? 1 : 0;
}
int main() {
	//回调函数和普通函数不太一样
	//普通函数调用时机由程序员自己决定
	//回调函数调用时机由操作系统或代码框架来决定
	int arr[4] = { 9, 5, 2, 7 };
	bubbleSort(arr, 4, greater);
	int i;
	for (i = 0; i < 4; ++i) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}