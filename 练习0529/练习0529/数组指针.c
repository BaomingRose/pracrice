#include<stdio.h>

int main1() {
	//指针数组
	/*int* p[4];*/
	//数组指针
	/*int(*p)[4];*/
	int arr[4] = { 1, 2, 3, 4 };
	printf("%p\n", &arr[0]);
	//arr是一个指向首元素的指针
	printf("%p\n", arr + 1);
	//&arr是一个指向整个数组的指针（数组指针）
	printf("%p\n", &arr + 1);
	system("pause");
	return 0;
}