#include <stdio.h>

int isPrime(int num);

int main() {
    int num = 29;

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }


    return 0;
}


int isPrime(int num) {
    if (num <= 1) {
        return 0;  //not prime
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;  //not prime
        }
    }

    return 1;  //prime
}