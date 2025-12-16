/*
 * project10.c
 * Numerical grade to letter grade
 * 12/16/2025
 * input : numerical grade
 * output: convert to letter grade via a switch statement
 * 
 */


#include <stdio.h>


int main()
{
    int numerical_grade;
    int tens_digit;
    printf("Enter numerical grade: ");
    scanf("%d", &numerical_grade);

    /*  Separate digits so that tens_digit can be used in switch statement */

    if (numerical_grade > -1 && numerical_grade <= 100)
        numerical_grade /= 10;
    else
        numerical_grade = -1;
    tens_digit = numerical_grade;

    printf("Letter Grade: ");

    switch(tens_digit)
    {

        case 10 : case 9:
            printf("A\n");
            break;
        case 8: 
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        case 5: case 4: case3: case 2: case 1: case 0:
            printf("F\n");
            break;
        default:
            printf("ERROR- Incorrect entry\n");



    }

    printf("\n");




    

    return 0;



}