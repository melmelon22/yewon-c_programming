#include <stdio.h>

int main() {
    int floor = 4;
    int unit = 2;

    printf("floor: %d, unit: %d\n", floor, unit);

    if (floor % 2 == 0) {
        if (unit % 2 == 0) {
            printf("Use ev1 (even floor, even unit)\n");
        } else {
            printf("Use ev2 (even floor, odd unit)\n");
        }
    } else {
        if (unit % 2 == 0) {
            printf("Use ev3 (odd floor, even unit)\n");
        } else {
            printf("Use ev4 (odd floor, odd unit)\n");
        }
    }



    return 0;
}