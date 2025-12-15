/*
 * project5.c
 * income tax
 * 12/15/2025
 * input:  The amount of taxable income
 * output: The tax due
 */


#include <stdio.h>


int main(void)
{
    float tax_income;
    float tax_due;
    printf("Enter the amount of your taxable income: ");
    scanf("%f", &tax_income);

    // tax due chart
    if(tax_income <= 750.00f)
        tax_due = .01f * tax_income;
    else if (tax_income <= 2250.00f)
        tax_due = 7.50f + .02f * (tax_income - 750.00f);
    else if (tax_income <= 3750.00f)
        tax_due = 37.50 + .03f * (tax_income - 2250.00f);
    else if (tax_income <= 5250.0f)
        tax_due = 82.50f + .04f * (tax_income - 3750.00f);
    else if (tax_income <= 7000.00f)
        tax_due = 142.50f + .05f * (tax_income - 5250.00f);
    else
        tax_due = 230.00f + .06f * (tax_income - 7000.00f);

    printf("The tax due is: $%.2f\n", tax_due);



    return 0;
        
}