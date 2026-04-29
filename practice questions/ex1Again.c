#include <stdio.h>

int findMin(int size, int arr[]) {
    int num = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (num > arr[i]) {
            num = arr[i];
        }
    }
    
    return num;
}
    
int findMax(int size, int arr[]) {
    int num = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (num < arr[i]) {
            num = arr[i];
        }
    }
    
    return num;
}
    
int findAverage(int size, int arr[]) {
    int sum = 0;
    
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return sum / size;
}


int main()
{
    int a[5] = {10, 5, 1, 7, 9};
    
    int size = sizeof(a) / sizeof(a[0]);
    
    int min = findMin(size, a);
    
    int max = findMax(size, a);
    
    int average = findAverage(size, a);
    
    printf("Min: %d  Max: %d  Average: %d\n", min, max, average);
    
    return 0;
}