#include<stdio.h>

int main1() {
	//ָ������
	/*int* p[4];*/
	//����ָ��
	/*int(*p)[4];*/
	int arr[4] = { 1, 2, 3, 4 };
	printf("%p\n", &arr[0]);
	//arr��һ��ָ����Ԫ�ص�ָ��
	printf("%p\n", arr + 1);
	//&arr��һ��ָ�����������ָ�루����ָ�룩
	printf("%p\n", &arr + 1);
	system("pause");
	return 0;
}