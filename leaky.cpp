#include <iostream>

class Shape {
public:
    virtual void draw(){
        std::cout << "Drawing a shape" << std::endl;
    }
    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};

