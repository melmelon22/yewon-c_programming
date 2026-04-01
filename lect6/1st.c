#include <stdio.h>

#define N 5
#define M 9

int main() {
    int arr[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = i * M + j;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}