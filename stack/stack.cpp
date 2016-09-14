// stack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


//define stack element
struct elem {
	int num;
	elem *prev;
};

void push(int num, elem **top);
int pop(elem**);
void output(elem*);

void push(int num, elem **top) {
	elem *curr = new elem;
	//(*curr).num = num ;
	curr->num = num;
	if (*top == NULL) {
		curr->prev = NULL;
	}
	else {
		curr->prev = *top;
		*top = curr;
	}
}//end push

int pop(elem **top) {
	int tmp = (*top)->num;
	if (tmp == NULL) {
		return - 1;
	}
	else {
		*top = (*top)->prev;
		return tmp;
	}
}//end pop

















