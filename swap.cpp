#include <iostream>
#include <concepts>

// Write your strictly typed template function here
template <typename T> requires std::integral<T>
void swapValues(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}


int main() {
    int x = 10;
    int y = 99;
    swapValues(x, y);
    std::cout << "x: " << x << ", y: " << y << "\n"; // Should print x: 99, y: 10
    return 0;
}
