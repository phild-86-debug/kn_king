/* project2.c
 * 01/02/2026
 * income_tax
 * Modify project 5 from chapter 5 so that it uses a function to compute the amount of income tax. 
 * When passed an amount of taxable income, the function will return 
 * the tax due. 
 */


 #include <stdio.h>

 float income_tax(float income);


 int main(void)
 {
    float tax_income;
    float tax_due;
    printf("Enter the amount of taxable income: ");
    scanf("%f", &tax_income);
    tax_due = income_tax(tax_income);
    printf("The tax due is: $%.2f\n", tax_due);

    return 0;
 }


 float income_tax(float tax_income){
    // returns the amount of tax due
    float tax_due = 0.00f;
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

    return tax_due;

 }