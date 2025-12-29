/* project11.c
 * phone number
 * 12/29/2025
 * Modify project 4 from chapter 7 so that the program labels its output.
 * task: Write a program that translates an alphabetic phone number
 * into numeric form.
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 15

int main(void)
{
    char ch;
    int i = 0;
    char phone_number[15];
    printf("Enter phone number: ");

    while((ch = getchar()) != '\n' && i < SIZE - 1)
    {
        if (isalpha(ch))
        {
            ch = toupper(ch);
            if (ch >= 'A' && ch <= 'C')
                ch = '2';
            else if (ch >= 'D' && ch <= 'F')
                ch = '3';
            else if (ch >= 'G' && ch <= 'I')
                ch = '4';
            else if (ch >= 'J' && ch <= 'L')
                ch = '5';
            else if (ch >= 'M' && ch <= 'O')
                ch = '6';
            else if (ch >= 'P' && ch <= 'S')
                ch = '7';
            else if (ch >= 'T' && ch <= 'V')
                ch = '8';
            else if (ch >= 'W' && ch <= 'Z')
                ch = '9';
        }
        phone_number[i] = ch;
        i++;
    }

    phone_number[i] = '\0'; 
    printf("In numeric form: ");

   

    for (int j = 0; j < i; j++)
    {
        putchar(phone_number[j]);
    }

    putchar('\n');


}



