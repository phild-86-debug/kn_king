/* stack.c
 * A stack template 
*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void)
{
    for (int i = 0; i < 100; i++){
        push(i);
    }

    printf("\ncontents empty?: %d\n", is_empty());

    make_empty();
    printf("contents empty?: %d\n", is_empty());

    for (int i = 0; i < 100; i++){
        push(i);
    }
    // check for overflow
    // int j = 12;
    // push(j);

    // check for underflow
    // printf("number popped: %d\n", pop());
    // make_empty();
    // printf("number popped: %d\n", pop());

    // check if contents is full
    printf("contents is full: %d\n", is_full());
    


    return 0;
}

void stack_overflow(void)
{
    printf("\nStack overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
    printf("\nStack underflow\n");
    exit(EXIT_FAILURE);
}
void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(int i)
{
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

int pop(void)
{
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}
