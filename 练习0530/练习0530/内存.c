#include<stdio.h>

int main1() {
	//-1为整型，先转换为char阶段，输出为int，所以又转为int，高位补符号位1，
	char a = -1;				
	signed char b = -1;			//与a相同 
	//-1转为char，因为无符号，所以高位补0，为1111 1111
	unsigned char c = -1;		
	printf("a= %d\nb= %d\nc= %d\n", a, b, c); //-1, -1, 255
	printf("a= %u\nb= %u\nc= %u\n", a, b, c);

	char d = -128;			//1000 0000
	printf("d= %u\n", d);    //4294967168
	char f = 128;			//1000 0000
	printf("f= %u\n", f);

	unsigned int e = 0;
	e = e - 1;			//-1转换为unsigned

	int i = -20;
	unsigned int j = 10;
	printf("i + j = %d\n", i + j);	//i + j要先转unsigned在计算，结果再转int

	system("pause");
	return 0;
}