#include <stdio.h>


int findMax(int arr[], int size);

int findMin(int arr[], int size);

int findAverage(int arr[], int size);


int main() {
    int arr[] = {3, 5, 2, 8, 1};

    int size = sizeof(arr) / sizeof(arr[0]);


    int max = findMax(arr, size);  //arr not arr[]
    int min = findMin(arr, size);
    int average = findAverage(arr, size);


    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Average value: %d\n", average);

    return 0;
}



int findMax(int *arr, int size) {  //*arr = arr[] in function parameters
    int max = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}


int findMin(int arr[], int size) {
    int min = arr[0];

    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min;
}



int findAverage(int arr[], int size) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum / size;
}
