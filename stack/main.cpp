#include "stdafx.h"
#include <iostream>		
#include "stack.h"	
using namespace std;

int main() {
	elem *top(NULL);
	for (int i = 0; i < 10; i++) {
		cout << i << " ";
		push(i, &top);//&top - adress of the pointer top
	}
	cout << endl;
	int tmp = 0;
	for (int i = 0; i < 11; i++) {
		tmp = pop(&top);

		if (tmp == -1)
		{
			cout << "stack is empty" << endl;
		}
		else
		{
			cout << tmp << " ";
		}
	}
	cout << endl;
	_gettch();
	return 0;
}