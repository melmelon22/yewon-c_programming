#include <stdio.h>

void swap(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}


int main() {
    int a = 5;
    int b = 3;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);  
    //didn't swap because we only swapped the local pointer variables in the swap function, 
    //not the actual values of a and b in main

    return 0;
}