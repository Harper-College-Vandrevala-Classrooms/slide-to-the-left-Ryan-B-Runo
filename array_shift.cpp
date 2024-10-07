#include "array_shift.h"

void array_shift(int *arr, int size, int shifts){
    for(int j = 0; j < shifts; j++){
        int newArr[size];
        for(int i = 1; i < size; i++){
            newArr[i-1] = arr[i];
        };
        newArr[size-1] = arr[0];
        for(int i = 0; i < size; i++){
            arr[i] = newArr[i];
        }
    }
}