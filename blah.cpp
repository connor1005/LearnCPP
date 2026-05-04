#include <iostream>

int* resizeArray(int* oldArr, int oldSize, int newSize){
    int* newArr = new int[newSize];

    for (int i = 0; i < oldSize; i++){
        arr[i] = oldArr[i];
    }
    
    delete[] oldArr;

    return newArr;
}

