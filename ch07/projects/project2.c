/* project2.c
 * table of squares
 * 12/12/2025
 * task: Modify the square2.c program so that it pauses every 24 square and displays
 *  "Press Enter to continue..."
 * 
 */

#include <stdio.h>

int main(void)
{
     /* prints a table of squares using a for statement*/

    int i;
    int n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in the table: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        if (i % 24 == 0)
        {   
            if(i == 24)
                getchar();
            printf("Press Enter to coninue...\n");
            getchar();
        }
    }
    printf("\n");

       
    return 0;
}