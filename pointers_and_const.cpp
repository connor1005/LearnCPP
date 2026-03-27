#include <iostream>

int main(){
	int x{5};
	int* ptr{&x}; // ptr is a normal (non-const) pointer
		      // with normal pointers, we can change both what the
		      // pointer is pointing at or change the value at the
		      // address being held
	const int y{5};
	//int* ptr2{&y};	this will not compile. We can't set a normal
	//			pointer to point at a const variable.
	int* const ptr2{&y}; //const after the asterisk means this is a const pointer
	
