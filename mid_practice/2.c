#include <stdio.h>

int main() {
    int a[5] = {0};


    for (int i = 0; i < 5; i++) {
        printf("Enter num: ");
        scanf("%d", a + i);
    }

    for (int i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }


    return 0;
}