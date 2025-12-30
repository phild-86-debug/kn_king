/* project14.c
 * 12/30/2025
 * Write a program that reverses the words in a sentence.
 */


 #include  <stdio.h>


 int main(void)
 {

    char ch, terminate_character;
    char sentence[100];
    int i = 0;

    printf("Enter a sentence: ");
    ch = getchar();
    while (ch != '?' && ch != '!' && ch != '.')
    {
        sentence[i] = ch;
        i++;
        ch = getchar();
    }
    terminate_character = ch;

    printf("\n");

    return 0;

 }