#include<stdio.h>
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
int findSingle(int *arr, int n) {
	int i;
	int find = 0;
	for (i = 0; i < n; ++i) {
		find ^= arr[i];
	}
	return find;
}
int main3() {
	int arr[7] = { 1, 2, 7, 7, 2, 9, 1 };
	printf("����һ�ε�����Ϊ��%d\n", findSingle(arr, 7));
	system("pause");
	return 0;
}