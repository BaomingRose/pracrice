#include<stdio.h>
#include<math.h>
#define MAX(a, b) a>b?a:b
//不使用（a + b） / 2这种方式，求两个数的平均值
int arg(int a, int b) {
	return MAX(a, b) - abs(a - b) / 2;
}
int ave(int a, int b) {
	return (a + b) >> 1;
}
int main2() {
	int a = 6, b = 8;
	printf("a,b的平均值为：%d\n", arg(a, b));
	int c = 10, d = 20;
	printf("c,d的平均值为：%d\n", ave(c, d));
	system("pause");
	return 0;
}