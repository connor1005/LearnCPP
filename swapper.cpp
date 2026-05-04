#include <iostream>

template <typename T>
void swapItems(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> requires std::floating_point<T>
T divide(T a, T b){
    return a/b;
}
