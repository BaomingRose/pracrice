#include<stdio.h>
void init(int a[], int n, int arr[]) {
	int i = 0;
	for (i = 0; i < n; ++i) {
		arr[i] = a[i];
	}
}
void empty(int arr[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		arr[i] = 0;
	}
}
void reverse(int arr[], int n) {
	int i;
	int tail = n - 1;
	int tmp;
	for (i = 0; i < tail; ++i, --tail) {
		tmp = arr[i];
		arr[i] = arr[tail];
		arr[tail] = tmp;
	}
}
void Print(int arr[], int n) {
	int i;
	for (i = 0; i < n; ++i) {
		printf("%d ", arr[i]);
	}
	putchar('\n');
}
int main() {
	int a[7] = { 1,2,3,4,5,6,7 };

	int arr[7] = { 0 };
	init(a, 7, arr);
	Print(arr, 7);
	empty(arr, 7);
	Print(arr, 7);
	init(a, 7, arr);
	Print(arr, 7);
	reverse(arr, 7);
	Print(arr, 7);
	system("pause");
	return 0;
}