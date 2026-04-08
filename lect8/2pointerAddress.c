#include <stdio.h>

int main() {
    int value = 50;
    int *p = &value;

    printf("p: %p\n", p);  // address of value
    printf("&p: %p\n", &p);  // address of pointer p

    printf("value: %p\n", &value);
    printf("*p: %p\n", *&p);  // value at the address stored in p

}