#include<stdio.h>
#include<stdlib.h>
#define Elem int

typedef struct Node {
	Elem elem;
	struct Node *next;
}node; 

typedef struct LinkList {
	node* head;
}linklist;

void init(linklist* s) {
	s->head = NULL;
}

void push_front(linklist* s, Elem q) {
	node* tmp = (node*)malloc(sizeof(node));
	tmp->elem = q;
	tmp->next = s->head;
	s->head = tmp;
}

void pop_front(linklist* s) {
	node* tmp = s->head;
	s->head = s->head->next;
	free(tmp);
}

void print(linklist *s) {
	node* cur;
	for(cur = s->head; cur; cur = cur->next) {
		printf("%d ", cur->elem);
	}
}

void destroy(linklist *s) {
	node* tmp;
	while(s->head) {
		tmp = s->head;
		s->head = s->head->next;
		free(tmp);
	}
}

void reverse(linklist *s) {
	node* oldh = s->head;
	node* tmp = s->head->next;
	while(tmp) {
		oldh->next = tmp->next;
		tmp->next = s->head;
		s->head = tmp;
		tmp = oldh->next;
	}
}

//找到倒数第k个结点 
node* find_Kth_to_tail(linklist *s, int k) {
	node* tmp = s->head;		//第一个指针 
	node* res = s->head;		//第二个指针 
	int i;
	for(i = 0; i < k - 1; ++i) {
		tmp = tmp->next;
	}
	while(tmp->next) {
		res = res->next;
		tmp = tmp->next; 
	}
	return res;
}

int main() {
	linklist s;
	init(&s);
	#if 0
	push_front(&s, 4);
	push_front(&s, 5);
	push_front(&s, 6);
	print(&s);
	putchar('\n');
	pop_front(&s);
	print(&s);
	putchar('\n');
	push_front(&s, 7);
	reverse(&s);
	print(&s);
	putchar('\n');
	#endif
	
	int num, i, tmp;
	scanf("%d", &num);
	for(i = 0; i < num; ++i) {
		scanf("%d", &tmp);
		push_front(&s, tmp);
	} 
	
	print(&s);
	putchar('\n');
	
	printf("%d", find_Kth_to_tail(&s, 2)->elem);
	destroy(&s);
	return 0;
}
