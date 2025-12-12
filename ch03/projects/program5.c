/*
 * program5.c                                           *
 * 12/12/2025                                           *
 * Write a program that asks the user to enter the      *
 * numbers from 1-16. 1) display the numbers in a       *
 * 4x4 arrangement. 2) print sum of row, columns        *
 * and diagnal.  (Magic Square)                                       *

*/


#include <stdio.h>


int main(void)
{
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;
    printf("Enter the numbers from 1-16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11, &n12, &n13, &n14, &n15, &n16);


    /* print out 4*4 matrix*/
    printf("%3d%3d%3d%3d\n", n1, n2, n3, n4);
    printf("%3d%3d%3d%3d\n", n5, n6, n7, n8);
    printf("%3d%3d%3d%3d\n", n9, n10, n11, n12);
    printf("%3d%3d%3d%3d\n", n13, n14, n15, n16);

    /* row sums*/
    printf("Row sums: %3d %3d %3d %3d\n", (n1 + n2 + n3 + n4), (n5 + n6 + n7 + n8), (n9 + n10 + n11 + n12), (n13 + n14 + n15+n16));

    /* column sums*/
    printf("Column sums: %3d %3d %3d %3d\n", (n1 + n5 + n9 + n13), (n2 + n6 + n10 + n14), 
    (n3 + n7 + n11 + n15), (n4 + n8 + n12 + n16));

    /* Diagonal sums*/
    printf("Diagonal sums: %3d %3d\n", (n1 + n6 + n11 + n16), (n4 + n7 + n10 + n13));







    return 0;




}