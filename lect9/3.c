#include <stdio.h>

int main() {
    for (int i = 0; i < 10; i++) {
        i++;
        printf("for loop i: %d\n", i);


        int i = 5;  //not related to for loop i
        i--;
        printf("i inside loop: %d\n", i);
    }


    return 0;
}