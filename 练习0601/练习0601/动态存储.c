#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define N 10
//��ȡһ�������������Ǵ��ڶ�̬���ٿռ��У���һ��Ϊ��ĸ�������������Ϊ��ȡ������
int main() {
	int* p = NULL;
	int num, size = 0, n = 0;
	int* q = NULL;
	int i;
	p = (int*)malloc(sizeof(int) * (size + 1));
	//scanf���ؽ���int�ĸ�����������������ַ�������ѭ��
	while (1 == scanf("%d", &num)) {
		++n;
		if (n > size) {
			size = size + N;
			q = (int*)realloc(p, sizeof(int) * (size + 1));
			if (q != NULL)
				p = q;
		}
		p[n] = num;
	}
	p = (int*)realloc(p, sizeof(int) * (n + 1));
	p[0] = n;
	for (i = 0; i < n + 1; ++i) {
		printf("%d ", p[i]);
	}
	putchar('\n');
	free(p);
	system("pause");
	return 0;
}