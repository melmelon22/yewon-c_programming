#include <stdio.h>

int a[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void print_array() {
    for (int *p = a; p < a + 10; p++) {
        printf("a[%d] = %d\n", (int) (p - a), *p);
    }
}


int main() {
    printf("Before modification:\n");
    print_array();

    *a = 31; //same as a[0] = 31;
    *(a+1) = 37; //same as a[1] = 37;

    printf("\nAfter modification:\n");
    print_array();

    return 0;
}
