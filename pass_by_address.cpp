#include <iostream>
#include <string>

void printByValue(std::string val){ 
	std::cout << val << '\n'; //print the value via copy
}

void printByReference(const std::string& ref){ // function parameter is a reference that binds to str
	std::cout << ref << '\n'; // print the value via the reference
}

void printByAddress(const std::string* ptr){ //the function parameter is a pointer that holds the address of str
	std::cout << *ptr << '\n'; //print the value via the dereferenced pointer
}

int main(){
	std::string str{"Hello World!"};
	printByValue(str);
	printByReference(str);
	printByAddress(&str);

	return 0;
}

