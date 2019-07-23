#include<iostream>
using namespace std;
#include<cstdio>
#include<cstdlib>
#include<cmath>

typedef struct Data {
	int p;
	int e;
}data;

typedef struct Node {
	 struct Data x;
	 struct Node* next;
}node;

//��ͷ�������� 
typedef struct Link {
	node* head;
}link;

void initLink(link* add) {
	add->head = NULL;
}

void insertLink(link* add, int m, int n) {
	node* cur = (node*)malloc(sizeof(node));
	cur->x.e = n;
	cur->x.p = m;
	cur->next = add->head;
	add->head = cur;
}

void destroyLink(link* add) {
	node* tmp;
	while (add->head) {
		tmp = add->head;
		add->head = add->head->next;
		free(tmp);
	}
}

int main() {
	link Add;
	link* add = &Add;
	initLink(add);
	int num;
	cout << "��������" << endl;
	cin >> num;
	int m;
	int n;
	cout << "����ϵ��m�� ָ��n" << endl;
	while (num--) {
		cin >> m >> n;
		insertLink(add, m, n);
	}
	double x;
	cout << "������x" << endl;
	cin >> x;
	node* cur;
	double sum = 0.0;
	//�������� 
	for (cur = add->head; cur; cur = cur->next) {
		sum += 
		cur->x.p * pow(x, cur->x.e * 1.0);
	}
	cout << sum << endl;
	destroyLink(add);
	return 0;
}
