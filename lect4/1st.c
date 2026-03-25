#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    
    while (1) {
        printf("Enter number: ");
        scanf("%d", &n);
        
        sum += n;
        
        if (n == 0) {
            break;
        }
    }
    
    
    printf("Sum: %d\n", sum);

    
    return 0;
}