#include <iostream>
#include <memory>

class Animal {
public:
    virtual void speak() {
        std::cout << "Generic animal noise...\n";
    }
    virtual ~Animal() {
        std::cout << "Animal destroyed.\n";
    }
};

class Dog : public Animal {
public:
    void speak() override {
        std::cout << "Woof!\n";
    }
    ~Dog() {
        std::cout << "Dog destroyed.\n";
    }
};

int main() {
    std::unique_ptr<Animal> myPet = std::make_unique<Dog>();
    
    myPet->speak();
    
    return 0;
}
