/* project5.c
 * scrabble
 * 12/21/2025
 * input:  Word
 * output: Scrabble score
 * 
 */


#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int score, sum = 0;
    printf("Enter a word: ");
    ch = getchar();
    ch = toupper(ch);
    while (ch != '\n')
    {
        switch(ch)
        {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O':
            case 'R': case 'S': case 'T': case 'U':
                score = 1;
                break;
            case 'D': case 'G':
                score = 2;
                break;
            case 'B': case 'C': case 'M': case 'P':
                score = 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                score = 4;
                break;
            case 'K':
                score = 5;
                break;
            case 'J': case 'X':
                score = 8;
                break;
            case 'Q': case 'Z':
                score = 10;
                            
        }
        sum += score;
        ch = getchar();
        ch = toupper(ch);
    }
    printf("Scrabble value: %d\n", sum);

        

    return 0;



}