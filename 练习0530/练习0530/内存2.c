#include<stdio.h>

int main() {
	//unsigned int i;
	//iΪunsigned int ��һֱ����0��Ϊ��ѭ��
	/*for (i = 9; i >= 0; --i) {
		printf("%u\n", i);
	}*/

	unsigned int a = 10;
	unsigned int b = 20;
	//���Ϊunsigned,a - b����С��0
	if (a - b < 0) {
		printf("haha");
	}
	else {
		printf("hehe\n");
	}

	char c[1000];
	int i;
	//-1 -i����charת��char�ضϣ���Ҫ���������8Ϊ0���ɹ����һ��Ϊ0���ַ�
	//iΪ255��ʱ��������Ԫ����Ϊ\0 �� 0 - 254Ϊ�ַ�����ЧԪ��
	for (i = 0; i < 1000; ++i) {
		c[i] = -1 - i;
	}
	printf("%d\n", strlen(c));

	unsigned char j;
	//unsigned char ���ֵΪ255��Ϊ��ѭ��
	/*for (j = 0; j <= 255; ++j) {
		printf("   \n");
	}*/
	system("pause");
	return 0;
}