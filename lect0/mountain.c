#include <stdio.h>

int main() {
    int height = 8;
    
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }
        
        // Print asterisks
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    return 0;
}
