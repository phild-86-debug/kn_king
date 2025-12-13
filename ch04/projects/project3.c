/*
 * project3.c
 * Reverse Digits(without using math)
 * input: Three digit number
 * output: three digit number with digits reversed
 * Date: 12/13/2025
 * 
*/


#include <stdio.h>


int main(void)
{
    int first_digit, second_digit, third_digit;
    
    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &third_digit, &second_digit, &first_digit);
    
    printf("The number reversed: %d%d%d\n", first_digit, second_digit, third_digit);

    return 0;
}