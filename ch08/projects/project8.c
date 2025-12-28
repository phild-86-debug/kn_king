/* project8.c
 * 12/27/2025
 * Modify project7.c so that it prompts for five quiz grades for each of 
 * five students, then computes the total score and average score for each student, 
 * , and the average score, high score and low score for each quiz.
 *
 */


#include <stdio.h>

#define MAX 5

int main(void)
{
    int test_scores[MAX][MAX];
    int row, column, row_sum = 0, column_sum = 0;
    int low_score = 101, high_score = 0;

    // enter test scores
    for(row = 0; row < MAX; row++)
    {
        printf("Enter student %d marks: ", row + 1);
        for(column = 0; column < MAX; column++)
        {
            scanf("%d", &test_scores[row][column]);
        }
    }

    printf("\n");

        // get row totals
    
    for (row = 0; row < MAX; row ++)
    {
        for (column = 0; column < MAX; column ++)
        {
            row_sum += test_scores[row][column];
        }

        printf("Student %d total score: %d\n", row + 1, row_sum);
        printf("Student %d average score: %.2f\n",  row + 1, (double)row_sum / MAX);
        printf("\n");
        row_sum = 0;
    }

        // get column totals:

    for (column = 0; column < MAX; column++)
    {
        for (row = 0; row < MAX; row++)
        {
            column_sum += test_scores[row][column];
            if (test_scores[row][column] < low_score)
                 low_score = test_scores[row][column];
            if (test_scores[row][column] > high_score)
                 high_score = test_scores[row][column];
        }
        printf("Quiz %d average score: %.2f\n",column + 1,  (double)column_sum / MAX);
        printf("Quiz %d high score: %d\n", column + 1, high_score);
        printf("Quiz %d low_score: %d\n", column + 1, low_score);
        column_sum = 0;
        high_score = 0;
        low_score = 101;
        printf("\n");  
    }

    return 0;
}