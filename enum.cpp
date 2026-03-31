#include <iostream>
#include <string>
using std::cout, std::endl;

enum class Status {
	PENDING,
	APPROVED,
	REJECTED
};

int main(){
	Status s = Status::APPROVED;
	if (s == Status::APPROVED){
		cout << "Approved!" << endl;
	}
	return 0;
}

