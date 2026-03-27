#include <stdio.h>

float average(float input[], int size) {
    float sum = 0.0;

    for (int i = 0; i < size; i++) {
        sum += input[i];
    }

    float average = sum / size;


    return average;
}


int main() {
    float a[5] = {100.0, 95.0, 93.0, 90.0, 85.0};
    float b[7] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

    int size_a = sizeof(a) / sizeof(a[0]);
    int size_b = sizeof(b) / sizeof(b[0]);

    float avg = average(a, size_a);
    float avg2 = average(b, size_b);


    printf("Average of a: %f\n", avg);
    printf("Average of b: %f\n", avg2);


    return 0;
}


