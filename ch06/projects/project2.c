/*
 * project2.c
 * gcd - Euclids algorithm
 * 12/17/2025
 * input: two integers
 * output: greatest common divisor(gcd) of the two numbers
 * 
 */


#include <stdio.h>


int main(void)
{

    int m, n, remainder;
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);

    return 0;
}


