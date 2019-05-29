#include<stdio.h>
int main2() {
	//两种编码方式
	//GDK:用两个字节表示一个汉字，只能表示简体中文，只在大陆
	//utf-8：变长编码，对于中文汉字来说一般都是 3 个字节
	printf("%d\n", strlen("呵"));
	system("pause");
	return 0;
}