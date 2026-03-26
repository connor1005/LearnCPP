#include <iostream>
#include <vector>
#include <unordered_set>
#include <stdexcept>

using std::cout, std::endl, std::string;

int divide(int a, int b){
	if (b == 0)
		throw std::runtime_error("zero divis");
	return a/b;
}

int main(){
	try{
		cout << divide(10,0) << endl;
	}
	catch (const std::exception& e){
		cout << "Error" << e.what() << endl;
	}
	return 0;
}
