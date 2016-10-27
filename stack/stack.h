#pragma once
#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

struct elem {
	int num;
	elem *prev;
};
class Stack
{
private:
	//define stack element
	
public:
	Stack();
	~Stack();

	void push(int  num, elem **top);
	int pop(elem**);
	void output(elem*);
	void init();
};
