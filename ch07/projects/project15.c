/* project15.c
 * 12/23/2025
 * Write a program that computes the factorial of a positive integer.
 */


#include <stdio.h>


int main(void)
{

    long double result = 1;
    int i, n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        result = result * i;
    }

    printf("Factorial of %d is %Lg\n", n, result);

    return 0;

    
}