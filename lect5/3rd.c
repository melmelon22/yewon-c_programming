#include <stdio.h>

#define N 10

int main() {
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int a_size = sizeof(a) / sizeof(a[0]);
    //sizeof(a) = total size / sizeof(a[0]) = size of one element

    printf("length of a: %d\n", a_size);



    return 0;
}