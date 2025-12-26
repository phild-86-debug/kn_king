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
    int row, column, row_sum = 0;


    for (row = 0; row < MAX; row++){
        printf("Enter row %d: ", row + 1);
        for (column = 0; column < MAX; column++)
        {
            scanf("%d", &arr_ints[row][column]);
        }
    }


/*     for (row = 0; row < MAX; row++)
    {
        for (column = 0; column < MAX; column++)
            scanf("%d", &arr_ints[row][column]);
    }  */

    // remove 

    for (int i = 0; i < MAX; i++){
        for (int j = 0; j < MAX; j++)
        {
            printf("%d ", arr_ints[i][j]);
        }
        printf("\n");
    }
    printf("Row Totals: ");
    
    // get row totals

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
    



    return 0;
}