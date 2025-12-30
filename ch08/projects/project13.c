/* project13.c
 * 12/30/2025
 * Modify project11.c from chapter 7 so that the program labels it output. 
 * The program will need to store the last name only in an array.
 * Output: last name,first initial.
 */


 #include <stdio.h>


 int main(void)
 {
    char ch;
    char last_name[20];
    char first_initial;
    int i = 0;

    printf("Enter a first and last name: ");
    scanf(" %c", &first_initial);
    while((ch = getchar()) != ' ')
        ;

    while ((ch = getchar()) != '\n')
    if (ch == ' ')
    {
        continue;
    }     
            
    else
    {
        last_name[i] = ch;
        i++;
    }
    last_name[i] = '\0';

    for(int j = 0; last_name[j] != '\0'; j++)
        printf("%C", last_name[j]);
    printf("%c %c%c",',', first_initial, '.');

    printf("\n");

    return 0;


 }