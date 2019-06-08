#include<stdio.h>
typedef int ElementType;

void Swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void PercDown(int A[], int i, int N) {
	int child;
	ElementType Tmp;

	for (Tmp = A[i]; 2 * i + 1 < N; i = child) {
		child = 2 * i + 1;	/*注意数组下标从0开始， 所以左孩子的求法不是2 * i*/
		if (child != N - 1 && A[child + 1] > A[child]) {
			++child;		/*找到最大的孩子节点*/
		}
		if (Tmp < A[child]) {
			A[i] = A[child];
		}
		else
			break;
	}
	A[i] = Tmp;
}

void HeapSort(int A[], int N) {
	int i;
	for (i = N / 2; i >= 0; --i) {
		PercDown(A, i, N);
	}
	for (i = N - 1; i > 0; --i) {
		Swap(&A[0], &A[i]);
		PercDown(A, 0, i);
	}
}

void Print(int A[], int N) {
	int i;
	for (i = 0; i < N; ++i) {
		printf(" %d ", A[i]);
	}
}

int main() {
	int arr[10] = { 2, 87, 39, 49, 34, 62, 53, 6, 44, 98 };
	Print(arr, 10);
	putchar('\n');
	HeapSort(arr, 10);
	Print(arr, 10);
	putchar('\n');
	system("pause");
	return 0;
}