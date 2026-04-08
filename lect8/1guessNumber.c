#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

void read_guesses(int secret_number);

void initialize_random_number_generator() {
    srand(time(NULL));
}

void get_new_secret_number();



int main(void) {
    char command = '\0';
    int secret_number = 0;

    printf("Guess random number between 1 and %d\n", MAX_NUMBER);

    initialize_random_number_generator();


    do {
        //secret_number = get_new_secret_number();
        printf("Guess number: ");
        read_guesses(secret_number);

        
    } while (secret_number != 0); //wrong






    return 0;
}