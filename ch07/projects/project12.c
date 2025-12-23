/* project12.c
 * 12/23/2025
 * "Write a program that evaluates an expression"
 */


#include <stdio.h>


int main()
{
    double result = 0.0, operand = 0.0;
    char ch;

    printf("Enter an expression: ");
    scanf("%lf", &result);

    while ((ch = getchar())!= '\n')
    {
        switch(ch)
        {
            case '+':
                scanf("%lf",&operand);
                result = result + operand;
                break;
            case '-':
                scanf("%lf", &operand);
                result = result - operand;
                break;
            case '/':
                scanf("%lf", &operand);
                result = result /operand;
                break;
            case '*':
                scanf("%lf", &operand);
                result = result * operand;
                break;

        }
    }

    printf("Value of expression: %f\n", result);
    printf("\n");

    return  0;

}
