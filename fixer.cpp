#include <iostream>

void doubleArray(int* arr, int size) {
    for (int i = 0; i < size; i++){
        *(arr + i) *= 2;
    }

void setMinToZero(int* a, int* b){
    if *a > *b) *b = 0;
    else *a = 0;
}

int main() {
    int* numbers = new int[100];
    int* singleNum = new int(42);
    
    delete[] numbers;
    delete singleNum;

    return 0;
}
