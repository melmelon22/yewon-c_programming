#include <stdio.h>

#define STACK_SIZE 100


int g_contents[STACK_SIZE];
int g_top = 0;


void stack_overflow() {
    printf("OVERFLOW!");
}


int stack_underflow() {
    printf("UNDERFLOW!");
    return -1;
}


void make_empty(void) {
    g_top = 0;
}


int is_empty (void) {
    return g_top == 0;
}


int is_full(void) {
    return g_top == STACK_SIZE;
}


void push(int item) {
    if (is_full()) {
        stack_overflow();
    } else {
        g_contents[g_top++] = item; //enter value then increment index
    }
}


int pop() {
    if (is_empty()) {
        stack_underflow();
    } else {
        return g_contents[g_top--];
    }
}


void print_stack() {
    for (int i = 0; i < g_top; i++) {
        printf("%d: %d\n", i, g_contents[i]);
    }
}



int main() {
    
    

    return 0;
}