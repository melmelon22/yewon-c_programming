#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int wrong_input(int num) {
    while (num < 1 || num > 3) {
        printf("1, 2, 3 중에서 입력하세요 >");
        scanf("%d", &num);
    }

    return num;
}


int main() {
    char players[8][20] = {"플레이어", "철수", "영희", "민준", "지아", "현우", "수빈", "태양"};
    
    int n;


    //첫번째 인터페이스
    
    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n가위바위보 토너먼트\n");

    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n\n[ 대진표 ]\n");

    for (int i = 0; i < 10; i++) {
        printf("---");
    }

    printf("\n8강\n");

    for (int i = 0; i < 8; i += 2) {
        printf("[%d] %s vs [%d] %s\n", i + 1, players[i], i + 2, players[i + 1]);
    }

    for (int i = 0; i < 10; i++) {
        printf("---");
    }

    printf("\n당신은 [1] 플레이어입니다.\n");

    for (int i = 0; i < 10; i++) {
        printf("---");
    }


    printf("\n\n");


    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n8강 - 상대: %s\n", players[1]);

    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n1: 가위  2: 바위  3: 보\n");
    printf("선택: ");
    scanf("%d", &n);

    //1,2,3이 아닌 숫자를 입력했을 때의 예외처리

    n = wrong_input(n);


    //두번째 인터페이스 (8강)

    char *choices[3] = {"가위", "바위", "보"};

    srand(time(NULL));
    
    int opponent = (rand() % 3) + 1; 


    while (1) {
        printf("\n나: %s   %s: %s\n", choices[n - 1], players[1], choices[opponent - 1]);
        if (n == opponent) {
            printf("=> 비겼습니다! 재경기!");

            opponent = (rand() % 3) + 1;

            printf("\n\n1: 가위  2: 바위  3: 보\n");
            printf("선택: ");
            scanf("%d", &n);

            n = wrong_input(n);
        } else if ((n == 1 && opponent == 3) || (n == 2 && opponent == 1) || (n == 3 && opponent == 2)) {
            printf("=> 이겼습니다!\n=> 다음 라운드로 진출!\n");
            break;
        } else {
            printf("=> 졌습니다...\n\n");

            for (int i = 0; i < 10; i++) {
                printf("===");
            }
    
            printf("\n아쉽습니다. 다음 기회에!\n");

            for (int i = 0; i < 10; i++) {
                printf("===");
            }

            printf("\n");

            return 0;
        }
    }

    printf("\n");


    //세번째 인터페이스 (4강)

    int index = (rand() % 2) + 2;

    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n4강 - 상대: %s\n", players[index]);

    for (int i = 0; i < 10; i++) {
        printf("===");
    }


    opponent = (rand() % 3) + 1; 

    printf("\n1: 가위  2: 바위  3: 보\n");
    printf("선택: ");
    scanf("%d", &n);

    n =wrong_input(n);
    

    while (1) {
        printf("\n나: %s   %s: %s\n", choices[n - 1], players[index], choices[opponent - 1]);
        if (n == opponent) {
            printf("=> 비겼습니다! 재경기!");

            opponent = (rand() % 3) + 1;

            printf("\n\n1: 가위  2: 바위  3: 보\n");
            printf("선택: ");
            scanf("%d", &n);

            n = wrong_input(n);
        } else if ((n == 1 && opponent == 3) || (n == 2 && opponent == 1) || (n == 3 && opponent == 2)) {
            printf("=> 이겼습니다!\n=> 결승 진출!\n");
            break;
        } else {
            printf("=> 졌습니다...\n\n");

            for (int i = 0; i < 10; i++) {
                printf("===");
            }
    
            printf("\n아쉽습니다. 다음 기회에!\n");

            for (int i = 0; i < 10; i++) {
                printf("===");
            }

            printf("\n");

            return 0;
        }
    }


    //네번째 인터페이스 (결승)
    
    int index2 = (rand() % 4) + 4;

    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n결승 - 상대: %s\n", players[index2]);

    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    opponent = (rand() % 3) + 1; 

    printf("\n1: 가위  2: 바위  3: 보\n");
    printf("선택: ");
    scanf("%d", &n);

    n =wrong_input(n);


    while (1) {
        printf("\n나: %s   %s: %s\n", choices[n - 1], players[index2], choices[opponent - 1]);
        if (n == opponent) {
            printf("=> 비겼습니다! 재경기!");

            opponent = (rand() % 3) + 1;

            printf("\n\n1: 가위  2: 바위  3: 보\n");
            printf("선택: ");
            scanf("%d", &n);

            n =wrong_input(n);
        } else if ((n == 1 && opponent == 3) || (n == 2 && opponent == 1) || (n == 3 && opponent == 2)) {
            printf("=> 이겼습니다!\n\n");
            break;
        } else {
            printf("=> 졌습니다...\n\n");

            for (int i = 0; i < 10; i++) {
                printf("===");
            }
    
            printf("\n아쉽습니다. 다음 기회에!\n");

            for (int i = 0; i < 10; i++) {
                printf("===");
            }

            printf("\n");

            return 0;
        }
    }


    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n축하합니다! 우승!\n");

    for (int i = 0; i < 10; i++) {
        printf("===");
    }

    printf("\n");


    return 0;
}