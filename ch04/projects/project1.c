/*
 * project1.c
 * reverse digits
 * 12/13/2025
 * Input: two digit number
 * Output: Same number with digits reversed
*/


#include <stdio.h>

int main(void)
{
    int number;
    int second_digit;

    printf("Enter a two digit number: ");
    scanf("%d", &number);

    second_digit = number % 10;
    number /= 10;
    printf("Number is: %d\n", number);

    printf("The reversal is: %d%d\n", second_digit, number);

    return 0;
}