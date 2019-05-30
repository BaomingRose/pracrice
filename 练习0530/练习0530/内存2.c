#include<stdio.h>

int main() {
	//unsigned int i;
	//i为unsigned int 会一直大于0，为死循环
	/*for (i = 9; i >= 0; --i) {
		printf("%u\n", i);
	}*/

	unsigned int a = 10;
	unsigned int b = 20;
	//结果为unsigned,a - b不会小于0
	if (a - b < 0) {
		printf("haha");
	}
	else {
		printf("hehe\n");
	}

	char c[1000];
	int i;
	//-1 -i当成char转成char截断，重要的是让最低8为0即可构造出一个为0的字符
	//i为255的时候会给数组元素设为\0 ， 0 - 254为字符串有效元素
	for (i = 0; i < 1000; ++i) {
		c[i] = -1 - i;
	}
	printf("%d\n", strlen(c));

	unsigned char j;
	//unsigned char 最大值为255，为死循环
	/*for (j = 0; j <= 255; ++j) {
		printf("   \n");
	}*/
	system("pause");
	return 0;
}