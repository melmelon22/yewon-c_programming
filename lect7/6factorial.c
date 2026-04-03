#include <stdio.h>

int factorial_recursive(int n);

int main() {
    int n = 5;

    printf("Factorial of %d is %d\n", n, factorial_recursive(n));


    return 0;
}


int factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n * factorial_recursive(n - 1);
}