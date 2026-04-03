#include <stdio.h>

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}


int main() {
    int myArray[] = {1,2,3,4,5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    int result = sumOfArray(myArray, size);
    printf("Sum of array: %d\n", result);

    
    return 0;
}