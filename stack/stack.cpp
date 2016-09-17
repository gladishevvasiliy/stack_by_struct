
#include "stdafx.h"
#include <iostream>		
using namespace std;

//define stack element
struct elem {
	int num;
	elem *prev;
};

void push(int num, elem **top);
int pop(elem**);
void output(elem*); 

int main() {
	elem *top(NULL);
	for (int i = 0; i < 10; i++) 
		push(i, &top);//&top - adress of the pointer top
	output(top);
	cout << endl;
	for (int i = 0; i < 10; i++)
		pop(&top);
	output(top);
	_gettch();
	return 0;
}

void push(int num, elem **top) {
	elem *curr = new elem;
	//(*curr).num = num ;
	curr->num = num;
	if (*top == NULL) {
		curr->prev = NULL;
	}
	else {
		curr->prev = *top;
	}
	*top = curr;
}//end push

int pop(elem **top) {
	// int tmp = (**top).num;
	int tmp = (*top)->num;
	if (*top == NULL) {
		string msg = "stack is empty";
		return msg;
	}
	elem *tmp_top = *top;
	*top = (**top).prev;
	delete tmp_top;
	return tmp;
}//end pop


void output(elem *top) {
	while (top != NULL){
		cout << top->num << endl;
		top = top->prev;
	}
}
















