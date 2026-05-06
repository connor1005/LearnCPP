#include <iostream>

void analyzeArray(int* arr, int size, int& sum, int& max){
    max = *arr;
    for (int i = 0; i < size; i++){
        int current_val = *(arr + i);
        sum += current_val;
        if (current_val > max) {
            max = current_val;
        }
    }
}
