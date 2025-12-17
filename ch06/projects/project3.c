/*
 * project3.c
 * fraction to lowest terms
 * 12/17/2025
 * input: fraction
 * output: fraction reduced to lowest terms

 */


#include <stdio.h>

int main(void)
{
    int numerator, denominator, m, n;
    int remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);
    n = numerator;
    m = denominator;

    // compute gcd of numerator and denominator

        while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    numerator /= m;
    denominator /= m;

    printf("In lowest terms: %d/%d\n", numerator, denominator);

    return 0;


}

