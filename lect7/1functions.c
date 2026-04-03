#include <stdio.h>

/// @brief
/// @param left
/// @param right
/// @return


//함수의 선언
double average(double a, double b);  //can declare function before main, and define it after main

int main() {
    double avg = average(17.0, 20.0);
    printf("Average: %.2f\n", avg);

    int left = 3;
    int right = 8;

    printf("left + right = %d\n", left + right);  //can use same variable as function parameter


    return 0;
}


double average(double left, double right) {  //parameter names can be different, but data types must match
    return (left + right) / 2.0;
}