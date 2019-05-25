#include <stdio.h>
//在屏幕上打印杨辉三角。 
//1
//1 1
//1 2 1
//1 3 3 1
//题目分析：
//二维数组的运用，定义一个二维数组，用来保存所存储的数值
//所发现的规律就是下一行的除了第一个和最后一个数都是1之外
//其他的数例如a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; 由此可得杨辉三角
int main() {
	int a[10][10] = { 0 };
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < i; j++) {
			if (i == 1) {
				printf("%4d\n", a[1][1] = 1);
			}
			else {
				if ((j == 1) || (i == j)) {
					printf("%4d", a[i][j] = 1);
				}
				else {
					printf("%4d", a[i][j] = a[i - 1][j - 1] + a[i - 1][j]);
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
