#include<stdio.h>
typedef int(*Cmp)(int a, int b);
void swap(int *a, int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//代码框架(可能是其他人写的库函数)
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
//程序员自定制的规则比较函数来完成
int Less(int a, int b) {
	return a < b ? 1 : 0;
}
int Greater(int a, int b) {
	return a > b ? 1 : 0;
}
int main() {
	//回调函数和普通函数不太一样
	//普通函数调用时机由程序员自己决定
	//回调函数调用时机由操作系统或者代码框架来决定
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