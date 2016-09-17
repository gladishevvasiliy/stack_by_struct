
#include "stdafx.h"
#include <iostream>		
#include "stack.h"	


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
	if (*top == NULL) {
		return -1;
	}
	// int tmp = (**top).num;
	int tmp = (*top)->num;
	elem *tmp_top = *top;
	*top = (**top).prev;
	delete tmp_top;
	return tmp;
}//end pop


//void output(elem *top) {
//	while (top != NULL){
//		cout << top->num << endl;
//		top = top->prev;
//	}
//}
















