/*
 * project7.c
 * largest-smallest integer
 * 12/15/2025
 * input :  4 integers
 * output:  The largest and smallest integer
 */


#include <stdio.h>


int main(void)
{
    int n1, n2, n3, n4;
    int g1max, g1min, g2max, g2min, max, min;
    printf("Enter 4 integers: ");
    scanf("%d%d%d%d", &n1, &n2, &n3, &n4);

    if (n1 > n2)
        {
            g1max = n1;
            g1min = n2;

        }
    else
    {
        g1min = n1;
        g1max = n2;
    }
    if(n3 > n4)
    {
        g2max = n3;
        g2min = n4;
    }
    else
    {
        g2min = n3;
        g2max = n4;
    }

    printf("\n");

    if(g1max > g2max)
        max = g1max;
    else
        max = g2max;
    
    if (g1min < g2min)
        min = g1min;
    else
        min = g2min;

    printf("Largest: %d\n", max);
    printf("Smallest: %d\n", min);
    return 0;

}