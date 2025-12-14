// project1.c
// number of digits
// 12/14/2025
// Write a program that displays the number of digits
// Input:  a number up to 4 digits
// Output: Number of digits


#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The number %d has ", num);

    if(num >= 0 && num < 10)
    {
        printf("1 digit\n");
    }
    else if(num >= 10 && num < 100)
    {
        printf("2 digits\n");
    }
    else if(num >= 100 && num < 1000)
    {
        printf("3 digits\n");
    }
    else
    {
        printf("4 digits\n");
    }





    return 0;
}
