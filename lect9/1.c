#include <stdio.h>

int main() {
    int abc = 1;
    int *other = &abc;
    int *other2 = other;
    
    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);

    printf("-------------\n");

    abc++;
    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);

    printf("-------------\n");

    (*other2)++;   //this would increment abc, since other2 is pointing to abc
    //*(other2++);  //this doesn't work
    printf("abc: %d\n", abc);
    printf("other: %d\n", *other);
    printf("other2: %d\n", *other2);


    return 0;
}