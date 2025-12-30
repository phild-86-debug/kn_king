/* project12.c
 * 12/30/2025
 * scrabble
 * Modify project 5 from chapter 7 to create a scrabble scoring program.
 * The program should prompt the user to enter a word, then calculate and display
 * the scrabble score for that word. Use the following letter values:
 * A, E, I, O, U, L, N, S, T, R - 1 point
 * D, G - 2 points
 * B, C, M, P - 3 points
 * F, H, V, W, Y - 4 points
 * K - 5 points
 * J, X - 8 points

 */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int scores[26] = {
        1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
        5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
        1, 4, 4, 8, 4, 10
    };
    char ch;
    int total_score = 0;

    printf("Enter a word: ");
    while ((ch = toupper(getchar())) != '\n')
    {
        total_score += scores[ch - 'A'];
    }

    printf("Scrabble value: %d\n", total_score);

    return 0;
}