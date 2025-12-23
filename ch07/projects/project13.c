/* project13.c
 * 12/23/2025
 * Write a program that computes the average word length for a sentence.
 * 
 */


#include <stdio.h>


int main(void)
{
    int num_words = 0;
    int num_letters = 0;
    char ch;

    printf("Enter a sentence: ");
    while((ch = getchar())!= '\n')
        {
            if(ch == ' ')
            {
                num_words ++;
              
            }
            else
                num_letters ++;
        }
    num_words += 1;

    printf("Average word lengh: %.1lf\n", (double)num_letters / num_words);

    return 0;


}