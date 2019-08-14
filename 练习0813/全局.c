#include<stdio.h>

int a = 1;

void test() {
	int a = 2;
	a += 1;
}

int main() {
	test();					//调用函数时 a = 2,a + 1 = 3,  函数调用结束，a空间被释放掉
	printf("%d\n", a);		// a = 1(全局变量)
	return 0;
}
