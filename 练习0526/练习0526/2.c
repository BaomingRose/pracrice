#include<stdio.h>
#include<math.h>
#define MAX(a, b) a>b?a:b
//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ
int arg(int a, int b) {
	return MAX(a, b) - abs(a - b) / 2;
}
int ave(int a, int b) {
	return (a + b) >> 1;
}
int main2() {
	int a = 6, b = 8;
	printf("a,b��ƽ��ֵΪ��%d\n", arg(a, b));
	int c = 10, d = 20;
	printf("c,d��ƽ��ֵΪ��%d\n", ave(c, d));
	system("pause");
	return 0;
}