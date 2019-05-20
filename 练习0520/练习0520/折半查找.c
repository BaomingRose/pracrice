#include<stdio.h>
int halfFind(int arr[], int n, int find) {
	int left = 0;
	int right = n - 1;
	int mid = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (arr[mid] < find) {
			left = mid + 1;
		}
		else if (arr[mid] > find) {
			right = mid - 1;
		}
		else {
			return mid + 1;
		}
	}
	return -1;
}
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int pos;
	pos = halfFind(arr, 8, 5);
	printf("%d", pos);
	system("pause");
	return 0;
}
