/*
 * project2.c
 * reverse digits- three digits
 * 12/13/2025
 * Input: three digit number
 * Output: Same number with digits reversed
*/

#include <stdio.h>


int main(void)
{
    int number;
    int first_number, second_number, third_number;

    printf("Enter a three digit number: ");
    scanf("%d", &number);

    first_number = number % 10;
    number /= 10;
    second_number = number % 10;
    number /= 10;
    third_number = number;

    printf("The reversal is: %d%d%d\n", first_number, second_number, third_number);

    return 0;
}
