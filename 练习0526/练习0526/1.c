#include<stdio.h>
//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
unsigned int reverse_bit(unsigned int value) {
	int i, tmp, sum = 0;
	for (i = 0; i < 32; ++i, value /= 2) {
		tmp = value % 2;
		sum = sum * 2 + tmp;
	}
	return sum;
}
int main1() {
	unsigned int n = 25;
	printf("%u\n", reverse_bit(n));
	system("pause");
	return 0;
}