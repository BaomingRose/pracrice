#include<stdio.h>
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
int findSingle(int *arr, int n) {
	int i;
	int find = 0;
	for (i = 0; i < n; ++i) {
		find ^= arr[i];
	}
	return find;
}
int main3() {
	int arr[7] = { 1, 2, 7, 7, 2, 9, 1 };
	printf("出现一次的数字为：%d\n", findSingle(arr, 7));
	system("pause");
	return 0;
}