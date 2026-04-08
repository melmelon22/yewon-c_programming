#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100


void read_guesses(int secret_number);


void initialize_random_number_generator() {
    srand(time(NULL));
}


int get_new_secret_number() {
    return rand() % MAX_NUMBER + 1;
}



int main(void) {
    char command = '\0';  //null character
    int secret_number = 0;

    printf("Guess random number between 1 and %d\n", MAX_NUMBER);

    printf("\n");

    initialize_random_number_generator();


    do {
        secret_number = get_new_secret_number();

        printf("Guess number!\n");
        read_guesses(secret_number);

        printf("One more? (Y/N): ");
        scanf(" %c", &command);

        printf("\n");
    } while (command == 'Y' || command == 'y');


    return 0;
}



void read_guesses(int secret_number) {
    int guess = 0;
    int trial_count = 1;
    
    while (guess != secret_number) {
        printf("Answer? ");
        scanf("%d", &guess);

        if (guess == secret_number) {
            printf("Great! Trial count is %d\n", trial_count);
        } else if (guess > secret_number) {
            trial_count++;
            
            printf("Greater than secret number. Try again.\n");
        } else {
            trial_count++;
            
            printf("Less than secret number. Try again.\n");
        }
    }    
}