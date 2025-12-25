/* project4.c
 * 12/25/2025
 * Modify the reverse.c program of section 8.1 to use the sizeof() expression
 * for the array length. 
 */

#include <stdio.h>

#define LENGTH (int)(sizeof(a)/sizeof(a[0]))






int main(void)
{
    

    int a[10], i;
  

    printf("Enter %d numbers: ", LENGTH);
    for (i = 0; i < LENGTH; i++)
        scanf("%d", &a[i]);
    printf("In reverse order: ");
    for(i = LENGTH - 1; i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");

    return 0;
}