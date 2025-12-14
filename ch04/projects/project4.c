/* 
 * project4.c
 * Convert to octal
 * 12/13/2025
 * input decimal integer
 * output: Five digit octal number
 * note- no loops allowed
*/


#include <stdio.h>


int main(void)
{
    int remainder, number;
    int octal_number = 0;
    int place_holder = 1;


    printf("Enter a number between 1 and 32767: ");
    scanf("%d", &number);

    remainder = number %8;
    octal_number = octal_number + remainder * place_holder;
    number /= 8;
    place_holder *= 10;

    remainder = number %8;
    octal_number = octal_number + remainder * place_holder;
    number /= 8;
    place_holder *= 10;

    remainder = number %8;
    octal_number = octal_number + remainder * place_holder;
    number /= 8;
    place_holder *= 10;

    remainder = number %8;
    octal_number = octal_number + remainder * place_holder;
    number /= 8;
    place_holder *= 10;

    remainder = number %8;
    octal_number = octal_number + remainder * place_holder;
    number /= 8;
    place_holder *= 10;

    printf("In octal, your number is: %.5d\n", octal_number);



    return 0;

}