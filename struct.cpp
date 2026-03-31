#include <iostream>
#include <string>
using std::cout, std::endl;

//A struct is a custom data type
//It lets us group related pieces of data together
//Instead of separate variables floating around, we bundle them into one meaningful unit
//A struct helps model real-world things in code

//structs organize related data into one object
//improves readability
//makes code easier to reason about
//allows us to create our own types
//help model real-world entities

class Rectangle {
//private (unnecessary because assumed private unless stated to be public
	double width_;
public:
	Rectangle(double width, double height){
		width_ = width;
		height_ = height;
	}
	double height_;
	double area() const;
	void setWidth(double width);
	double getWidth() const;
};

double Rectangle::area() const {
	return width_ * height_;
}

void Rectangle::setWidth(double width){
	width_ = width;
}

double Rectangle::getWidth() const {
	return width_;
}

struct Address {
	std::string street;
	std::string city;
};

struct Student {
	std::string name;
	int id;
	double gpa;
	Address address;
};

int main(){
	Student s1; //initialized a student
	s1.name = "John Doe";
	s1.gpa = 3.8;
	s1.id = 10001;
	Student s2;
	s2.name = "Jane Doe";
	s1.address.street = "30 Storrs Rd.";
	s1.address.city = "Storrs";
	cout << s2.name << endl;
	cout << s1.name << endl;

	Rectangle r(5,2);
	cout << r.area() << endl;
	return 0;
}

