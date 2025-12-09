/*
 *  project4.c
 *  Accepts an amount and adds 5% sales tax
 */

#include <stdio.h>


int main(void)
{

    float amount;
    printf("Enter the amount: ");
    scanf("%f", &amount);
    printf("With tax added: %f\n", amount * 1.05);
    return 0;
}