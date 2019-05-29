#include<stdio.h>
int main3() {
	int n = 10;
	int n2 = 20;
	//前两种相同， 不能改变指向的变量
	/*const int * p = &n;
	int const * p = &n;*/
	//不能改变指针的地址
	/*int * const p = &n;*/
	/* *p = 20;
	p = &n2;*/
	printf("%c%c%c%c\n", 32, 65, 97, 48);
	system("pause");
	return 0;
}