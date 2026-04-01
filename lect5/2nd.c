#include <stdio.h>

int main() {
    int a[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 3; i++) {
        printf("a[%d]: %d\n", i, a[i]);
    }


    return 0;
}