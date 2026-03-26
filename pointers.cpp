#include <iostream>

int main()
{
    int x{5};
    int* ptr;       //uninitialized pointer (holds a garbage address)
    int* ptr2{};    //null pointer
    int* ptr3{&x};  //pointer initialized with the address of var x

    std::cout << x << std::endl;
    std::cout << ptr3 << "\n";

    int y{5};
    int& ref{y};
    int* pointer{&y};

    std::cout << y;
    std::cout << ref;
    std::cout << pointer << " is the memory address that holds " << *pointer << '\n';
    
    ref = 6;     //uses the reference to change the value of y
    std::cout << y;
    std::cout << ref;
    std::cout << pointer << " holds " << *pointer;

    *pointer = 7;   //uses the pointer to change the value of y
    std::cout << y;
    std::cout << ref;
    std::cout << *pointer << '\n';

    return 0;
}