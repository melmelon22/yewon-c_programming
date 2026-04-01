#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 0 = 가위, 1 = 바위, 2 = 보
int getComputerMove() {
    return rand() % 3;
}

int getUserMove() {
    int move;
    printf("가위(0), 바위(1), 보(2)를 입력하세요: ");
    scanf("%d", &move);
    return move;
}

void printMove(int move) {
    if (move == 0) printf("가위");
    else if (move == 1) printf("바위");
    else printf("보");
}

// 결과: 1 = 승리, 0 = 무승부, -1 = 패배
int decideWinner(int user, int comp) {
    if (user == comp) return 0;
    if ((user == 0 && comp == 2) ||
        (user == 1 && comp == 0) ||
        (user == 2 && comp == 1)) return 1;
    return -1;
}

int playMatch(char opponent[]) {
    int user, comp, result;

    while (1) {
        user = getUserMove();
        comp = getComputerMove();

        printf("당신: ");
        printMove(user);
        printf(" | %s: ", opponent);
        printMove(comp);
        printf("\n");

        result = decideWinner(user, comp);

        if (result == 1) {
            printf("당신이 %s를 이겼습니다!\n\n", opponent);
            return 1;
        } else if (result == -1) {
            printf("당신이 %s에게 졌습니다...\n\n", opponent);
            return 0;
        } else {
            printf("무승부! 다시 합니다.\n");
        }
    }
}

int main() {
    srand(time(NULL));

    char *round2_opponents[2] = {"영희", "민준"};
    char *final_opponents[4] = {"지아", "현우", "수빈", "태양"};

    printf("=== 가위바위보 토너먼트 시작 ===\n\n");

    // Round 1
    if (!playMatch("철수")) {
        printf("토너먼트 탈락!\n");
        return 0;
    }

    // Round 2
    char *opponent2 = round2_opponents[rand() % 2];
    if (!playMatch(opponent2)) {
        printf("토너먼트 탈락!\n");
        return 0;
    }

    // Final Round
    char *opponent3 = final_opponents[rand() % 4];
    if (!playMatch(opponent3)) {
        printf("토너먼트 탈락!\n");
        return 0;
    }

    printf("🎉 축하합니다! 토너먼트 우승! 🎉\n");

    return 0;
}