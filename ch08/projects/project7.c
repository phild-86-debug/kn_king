/* project7.c
 * 12/26/2025
 * 5 x 5 matrix
 * write a program that reads a 5 x 5 array of integers and then prints the row 
 * sums snd the column sums.
 */


#include <stdio.h>

#define MAX 5

int main()
{
    int arr_ints[MAX][MAX];
    int row, column, row_sum = 0, column_sum = 0;

    // enter data
    for (row = 0; row < MAX; row++){
        printf("Enter row %d: ", row + 1);
        for (column = 0; column < MAX; column++)
        {
            scanf("%d", &arr_ints[row][column]);
        }
    }
    // get row totals
    printf("Row Totals: ");

    for (row = 0; row < MAX; row ++)
    {
        for (column = 0; column < MAX; column ++)
        {
            row_sum += arr_ints[row][column];
        }

        printf("%d ", row_sum);
        row_sum = 0;
        
    }

    // get column totals:
    printf("\nColumn Totals: ");

    for (column = 0; column < MAX; column++)
    {
        for (row = 0; row < MAX; row++)
        {
            column_sum += arr_ints[row][column];
        }
        printf("%d ", column_sum);
        column_sum = 0;
    }

    printf("\n");

    return 0;
}