#pragma once
#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

class Stack
{
private:
	//define stack element
	struct elem {
		int num;
		elem *prev;
	};
public:
	Stack();
	~Stack();


	void push(int  num, elem **top);
	int pop(elem**);
	void output(elem*);
	void init();
};
