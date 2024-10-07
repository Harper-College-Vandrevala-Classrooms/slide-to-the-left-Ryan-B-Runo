#include <cassert>
#include "array_shift.h"
using namespace std;

bool intArrEquals(int *arr1, int *arr2, int size){
    for(int i = 0; i < size; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int arr[5] = {0, 111, 2, 3, 4};
    int arr2[5] = {111, 2, 3, 4, 0};
    int arr3[5] = {3, 4, 0, 111 ,2};
    array_shift(arr, 5, 1);

    assert(intArrEquals(arr, arr2, 5));

    array_shift(arr2, 5, 2);

    assert(intArrEquals(arr2, arr3, 5));
    return 0;
}