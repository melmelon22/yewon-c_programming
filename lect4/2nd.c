#include <stdio.h>

int main() {
    float a = 10.0;
    int b = 3;

    int c = b / a; // b / a = 3 / 10.0 = 0.3, but since c is an integer, it will be truncated to 0
    printf("c: %d\n", c);

    float d = b / a; // b / a = 3 / 10.0 = 0.3, and since d is a float, it will store the value 0.3
    printf("d: %f\n", d);


    int e = 10;
    float f = b / e; // 0
    printf("f: %f\n", f);

    float g = 3.0;

    float h = g / e;
    printf("h: %f\n", h);





    return 0;
}