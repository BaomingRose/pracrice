#include<stdio.h>
int main4() {
	int i, time = 10;
	double distance = 100, height = 50;
	for (i = 2; i <= time; ++i) {
		distance += height * 2;
		height *= 0.5;
		
	}
	printf("��10�ε���ĸ߶�Ϊ%.4f,�����ľ���Ϊ%.4f\n", height, distance);
	system("pause");
	return 0;
}