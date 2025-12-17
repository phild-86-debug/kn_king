/*
 * project5.c
 * reverse digits
 * 12/17/2025
 * input:  integer
 * output: integer with numbers reversed
 * 
 * 
 */

#include <stdio.h>


int main(void)
{
    int number,remainder;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Digits reversed: ");

    while (number > 0)
    {
        remainder = number % 10;
        printf("%d", remainder);
        number /= 10;

    }

    printf("\n");

    return 0;
}