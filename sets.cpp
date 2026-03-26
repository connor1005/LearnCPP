#include <vector>
#include <iostream>
#include <unordered_set>

using std::cout, std::endl, std::string;

int main(){
	std::unordered_set<string> users;
	
	users.insert("john doe");
	users.insert("bob");
	users.insert("bob"); //will be ignored
	if (users.contains("bob")){
		cout << "Found it!" << endl;
	}
	for (auto& user: users){
		cout << user << endl;
	}
	return 0;
}
