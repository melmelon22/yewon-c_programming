#include <stdio.h>

#define SIZE 10

int main() {
    int a[SIZE] = {2,5,6,3,1,4,9,8,7,10};

    for (int *p = a; p < a + 10; p++) {
        printf("a[%d]: %d\n", (int) (p - a), *p);
    }


    return 0;
}