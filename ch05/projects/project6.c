/* 
 * project6.c
 * upc code
 * 12/15/2025
 * Modify upc.c program (4.1) so that it displays whether a upc code is valid or invalid
 * input:  12 digit upc code


 */


#include <stdio.h>


int main(void)
{

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12;
    int first_sum, second_sum, total;
    int check_digit;

    printf("Enter the first 12 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &n1, &n2, &n3, &n4, &n5, &n6, &n7,
    &n8, &n9, &n10, &n11, &n12);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n2 + n4 + n6 + n8 + n10;
    total = 3 * first_sum + second_sum;

    printf("\n");

    
    
    check_digit =  9 - ((total - 1) % 10);

    if (n12 == check_digit)
        printf("Valid\n");
    else
        printf("Not Valid\n");
    return 0;






}