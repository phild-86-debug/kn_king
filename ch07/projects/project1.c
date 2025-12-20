/*  project1.c
    table of squares
    task: run square2.c program from section 6.3.
    Try dififerent int types and try to determine the size of an 
    int on my machine. (size in number of bits).
    12/20/2025
 */


#include <stdio.h>

int main(void)
{
    /* verify int is 4 bytes */
    printf("size of an int is: %zu\n\n", sizeof(int));


    /* prints a table of squares using a for statement*/

    long int i;
    long n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%ld", &n);

    for(i = 1; i <= n; i++)
        printf("%15ld%15ld\n", i, i * i);
    return 0;
}