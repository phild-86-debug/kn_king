/* project10.c
 * count vowels 
 * 12/22/2025
 *  task: A c program that counts the number of vowels in a sentence.
 */


#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch;
    int sum = 0;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n')
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            sum ++;
    }

    printf("Your sentence contains %d vowels\n", sum);
    return 0;

}


