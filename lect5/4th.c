#include <stdio.h>

#define MAX_SIZE 100
#define RANGE 100   // Range of random numbers (0 ~ 99)


int main() {
    int n, i, num;
    int frequency[RANGE] = {0};  // Initialize frequency array to 0
    int arr[MAX_SIZE];


    printf("Enter the number of elements (max %d): ", MAX_SIZE);
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &num);
        arr[i] = num;

        // Increment the frequency of the entered number
        if (num >= 0 && num < RANGE) {
            frequency[num]++;
        }
    }


    printf("Number frequency\n");

    for (i = 0; i < RANGE; i++) {
        if (frequency[i] > 0) {
            printf("%d: %d\n", i, frequency[i]);
        }
    }


    return 0;
}