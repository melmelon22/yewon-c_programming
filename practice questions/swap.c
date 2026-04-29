#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 5;
    int b = 3;
    
    printf("a: %d, &a: %p\n", a, &a);
    printf("b: %d, &b: %p\n", b, &b);
    
    swap(&a, &b);
    
    printf("a: %d, &a: %p\n", a, &a);
    printf("b: %d, &b: %p\n", b, &b);
    
    
    return 0;
}