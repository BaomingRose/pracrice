#include<stdio.h>

int x = 3;

void inc() {
	static int x = 1;
	x *= (x + 1);
	printf("%d\n", x);
	return;
}

int main() {
	int i;
	for (i = 1; i < x; ++i) {	//	x = 3
		inc();					//函数内部的x=1，第一次循环x=2，第二次循环x=6， 跳出循环
	}
	return 0;
}

/* 运行结果：
2
6
*/
