#include <stdio.h>

#define MAX_STUDENTS 10  // 최대 학생수는 10명
#define MAX_SUBJECTS 5   // 최대 과목수는 5


void calculateSubjectAverage(double scores[][MAX_SUBJECTS], int numStudents, double subjectAverage[]);


void findSubjectHighest(double scores[][MAX_SUBJECTS], int numStudents, double subjectHighest[]);


void calculateStudentAverages(double scores[][MAX_SUBJECTS], double studentAverages[], int numStudents);


int main() {
    double scores[MAX_STUDENTS][MAX_SUBJECTS] = {0};
    double studentAverages[MAX_STUDENTS] = {0};
    double subjectAverage[MAX_SUBJECTS] = {0};
    double subjectHighest[MAX_SUBJECTS] = {0};
    int numStudents;

    printf("학생 수를 입력하세요: ");
    scanf("%d", &numStudents);

    // 학생의 과목별 성적 입력 받기
    for (int i = 0; i < numStudents; i++) {
        printf("학생 %d의 성적 (5 과목): ", i + 1);
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            scanf("%lf", &scores[i][j]);
        }
    }

    // 과목별 평균 및 최고점수 계산
    calculateSubjectAverage(scores, numStudents, subjectAverage);
    findSubjectHighest(scores, numStudents, subjectHighest);

    // 학생별 평균 점수 계산
    calculateStudentAverages(scores, studentAverages, numStudents);

    // 결과 출력
    printf("\n과목별 평균 점수:\n");
    for (int j = 0; j < MAX_SUBJECTS; j++) {
        printf("과목 %d: 평균 = %.2f, 최고점수 = %.2f\n", j + 1, subjectAverage[j], subjectHighest[j]);
    }

    printf("\n학생별 평균 점수:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("학생 %d: 평균 = %.2f\n", i + 1, studentAverages[i]);
    }

    return 0;
}

void calculateSubjectAverage(double scores[][MAX_SUBJECTS], int numStudents, double subjectAverage[]) {
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        double sum = 0;
        for (int j = 0; j < numStudents; j++) {
            sum += scores[j][i];
        }

        subjectAverage[i] = sum / numStudents;
    }
}

void findSubjectHighest(double scores[][MAX_SUBJECTS], int numStudents, double subjectHighest[]) {
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        double maxScore = scores[0][i];
        for (int j = 1; j < numStudents; j++) {
            if (scores[j][i] > maxScore) {
                maxScore = scores[j][i];
            }
        }

        subjectHighest[i] = maxScore;
    }
}

void calculateStudentAverages(double scores[][MAX_SUBJECTS], double studentAverages[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        double sum = 0;
        for (int j = 0; j < MAX_SUBJECTS; j++) {
            sum += scores[i][j];
        }

        studentAverages[i] = sum / MAX_SUBJECTS;
    }
}