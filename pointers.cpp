#include <iostream>

int main()
{
    int x = 5;
    int* pX = &x;

    std::cout << "Variable: " << x << "\nMemory Address: " << pX << std::endl;
    return 0;
}