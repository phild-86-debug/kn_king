/*
* project1.c
* print largest number
* 12/17/2025
* input : float numbers until 0 or negative number is entered.
* output: the largest number entered
*/


#include <stdio.h>


int main(void)
{
    float number;
    float max = 0.00f;

    do 
    {
        printf("Enter a number: ");
        scanf("%f", &number);
        if (number > max)
            max = number;
    }   while(number > 0);

    printf("The largest number entered was %.2f\n", max);

    printf("\n");

    return 0;


}
 





