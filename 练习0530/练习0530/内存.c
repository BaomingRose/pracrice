#include<stdio.h>

int main1() {
	//-1Ϊ���ͣ���ת��Ϊchar�׶Σ����Ϊint��������תΪint����λ������λ1��
	char a = -1;				
	signed char b = -1;			//��a��ͬ 
	//-1תΪchar����Ϊ�޷��ţ����Ը�λ��0��Ϊ1111 1111
	unsigned char c = -1;		
	printf("a= %d\nb= %d\nc= %d\n", a, b, c); //-1, -1, 255
	printf("a= %u\nb= %u\nc= %u\n", a, b, c);

	char d = -128;			//1000 0000
	printf("d= %u\n", d);    //4294967168
	char f = 128;			//1000 0000
	printf("f= %u\n", f);

	unsigned int e = 0;
	e = e - 1;			//-1ת��Ϊunsigned

	int i = -20;
	unsigned int j = 10;
	printf("i + j = %d\n", i + j);	//i + jҪ��תunsigned�ڼ��㣬�����תint

	system("pause");
	return 0;
}