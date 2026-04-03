#include <stdio.h>

/**
 * @brief Countdown from a given number to zero
 * @param x The number to start counting down from
 */
void countdown(int x);

int main() {
    countdown(10);

    printf("------\n");
    countdown(5);


    return 0;
}

void countdown(int x) {
    if (x < 0) {
        printf("Negative number, cannot countdown.\n");
        return;
    }

    for (int i = x; i >= 0; i--) {
        printf("%d\n", i);
    }
}