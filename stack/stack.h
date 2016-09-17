#pragma once

//define stack element
struct elem {
	int num;
	elem *prev;
};

void push(int num, elem **top);
int pop(elem**);
void output(elem*);