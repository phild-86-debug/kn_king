/* project7.c
 * compute fractions; calculator; gcd
 * 12/22/2025
 * task: Modify project6 from ch 03 so that the user may add, multiply, subtract
 * or divide two fractions. 
 * 
*/


#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;
    char operator;
    int m, n, gcd, remainder;

    printf("Enter two fractions separated by an operator: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1,&operator,  &num2, &denom2);

    switch(operator)
    {
        case '+':
            result_num = num1 * denom2 + num2 * denom1;
            result_denom = denom1 * denom2;
            break;
        case '/':
            result_num = num1 * denom2;
            result_denom = denom1 * num2;
            break;
        case '*':
            result_num = num1 * num2;
            result_denom = denom1 * denom2;
            break;
        case '-':
            result_num = num1 * denom2 - num2 * denom1;
            result_denom = denom1 * denom2;
            break;
    
    }

         // compute gcd
    n = result_num;
    m = result_denom;

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    gcd = m;
    
    result_num /= gcd;
    result_denom /= gcd;

    printf("The reduced result is: %d/%d\n", result_num,result_denom);

    printf("\n");



        

  

    return 0;

}