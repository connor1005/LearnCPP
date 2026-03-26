#include <iostream>
#include <unordered_set>
#include <vector>

using std::cout, std::endl, std::string;

std::string remove_dup(const string& s){
	std::unordered_set<char> seen;
	string result;
	for (const char& c : s){
		if (!seen.contains(c)){
			result += c;
			seen.insert(c);
		}
	}
	return result;
}
