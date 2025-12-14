/*
 * project5.c
 * upc code
 * 12/14/2025
 * Modify upc.c program to ask user to enter 11 digits at a time instead of in groups of 5.
 * input: 11 digit upc code
 * output: upc check digit

*/

#include <stdio.h>


int main(void)
{

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11;
    int first_sum, second_sum, total;

    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7,
    &n8, &n9, &n10, &n11);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n2 + n4 + n6 + n8 + n10;
    total = 3 * first_sum + second_sum;

    printf("\n");
    
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;






}