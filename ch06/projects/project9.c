/* project9.c
 * loan balance
 * 12/19/2025
 * task: Modify ch02/program 8.c
 * input: number of payments
 * output: displays the balance after each of the payments
 * 
 */


#include <stdio.h>

int main(void)
{
    float loan_amount;
    float interest_rate;
    float monthly_rate;
    float monthly_payment;
    float payment_due, num_payments;
    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    
    monthly_rate = interest_rate/100;
    monthly_rate = monthly_rate / 12;
    printf("Monthly rate is: %f\n", monthly_rate);
    printf("Enter the number of payments: ");
    scanf("%f", &num_payments);
    for(int i = 0; i < num_payments; i++)
    {
        payment_due = loan_amount- monthly_payment + (loan_amount * monthly_rate);
        loan_amount = payment_due;
        printf("Balance remaining after payment %d: %.2f\n",i+1,payment_due);
    }

    
    
    return 0;




}