/* project11.c
* 12/23/2025
* Write a program that takes a first name, and last name entered by the user and 
* displays the last name, a comma, and the first initial, followed by a period.

 */


#include <stdio.h>


int main(void)
{
    char first_initial;
    char ch;
    printf("Enter first and last name: ");
    scanf(" %c", &first_initial);
    while((ch = getchar()) != ' ')
        ;

    while ((ch = getchar()) != '\n')
        if (ch == ' ')
            ch = getchar();
        else
            printf("%c", ch);
    printf("%c %c.", ',', first_initial);
    printf("\n");
    return 0;

}
   
        

