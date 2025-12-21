/* project4.c
 * Alphabetic phone number to numeric
 * 12/21/2025
 * task: Write a program that translates an alphabetic phone number
 * into numeric form.

 */


#include <stdio.h>
#include <ctype.h>


int main(void)
{
    char ch;
    printf("Enter phone number: ");
    ch = getchar();
    while (ch != '\n')
    {

        if (isalpha(ch))
        {
            switch(ch)
            {
                case 'A':
                case 'B':
                case 'C':
                    printf("%c", '2');
                    break;
                case 'D':
                case 'E':
                case 'F':
                    printf("%c", '3');
                    break;
                case 'G':
                case 'H':
                case 'I':
                    printf("%c", '4');
                    break;
                case 'J':
                case 'K':
                case 'L':
                    printf("%c", '5');
                    break;
                case 'M':
                case 'N':
                case 'O':
                    printf("%c", '6');
                    break;
                case 'P':
                case 'R':
                case 'S':
                    printf("%c", '7');
                    break;
                case 'T':
                case 'U':
                case 'V':
                    printf("%c", '8');
                    break;
                case 'W':
                case 'X':
                case 'Y':
                    printf("%c", '9');
                    break;
            }
        }
        else
        {
            printf("%c", ch);
        }

        ch = getchar();
    
    }

    printf("\n");

    return 0;
}