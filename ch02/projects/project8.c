/*
 *  project8.c
 *  Compute loan amount for three months
*/

#include <stdio.h>

int main(void)
{
    float loan_amount;
    float interest_rate;
    float monthly_rate;
    float monthly_payment;
    float month_one, month_two, month_three;
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    monthly_rate = interest_rate/100;
    monthly_rate = monthly_rate / 12;
    printf("Monthly rate is: %f\n", monthly_rate);

    month_one = loan_amount- monthly_payment + loan_amount * monthly_rate;
    month_two = month_one - monthly_payment + month_one * monthly_rate;
    month_three = month_two - monthly_payment + month_two * monthly_rate;


    printf("Balance remaining after first payment: %.2f\n", month_one);
    printf("Balance remaining after second payment: %.2f\n", month_two);
    printf("Balance remaining after third payment: %.2f\n", month_three);

    return 0;




}