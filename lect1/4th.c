#include <stdio.h>

int main() {
    int a = 3;

    ++a;
    printf("a: %d\n", a);
    printf("a: %d\n", ++a);  //increase a by 1, then print a
    printf("a: %d\n", a);

    a++;
    printf("a: %d\n", a);
    printf("a: %d\n", a++);  //print a, then increase a by 1
    printf("a: %d\n", a);

    return 0;
}