/*
 * project6.c
 * even squares
 * 12/17/2025
 * input: integer (n)
 * output: Even squares from 1 to n. 
 */


#include <stdio.h>

int main(void)
{

    int n;
    int i = 2, square;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while(1)
    {
        square = i * i;
        if (square > n)
            break;
        else
            printf("%d\n", square);
        
        i += 2;
    }

    return 0;


}