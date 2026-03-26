#include <iostream>
#include <vector>
#include <unordered_set>

using std::string;

bool detect(const string& s){
	std::unordered_set<char> seen;
	for (const char& c : s){
		if (seen.contains(c)){
			return true;
		}
	}
	return false;
}
