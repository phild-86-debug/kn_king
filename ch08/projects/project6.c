/* project6.c
  * 12/26/2025
  * BIFF Speak
  * Input: a sentence
  * Output: sentence with selected letters changed to numbers.
  */


 #include <stdio.h>
 #include <ctype.h>


 int main(void)
 {
    // enter sentence, place in char array and print.
    char message[200] = {0}, ch;
    printf("Enter message: ");
    int i = 0;

    while ((ch = getchar()) != '\n')
    {
        message[i] = ch;
        i++;
    }
    printf("\n");

    for(i = 0; i < 200; i++)
    {
        
        switch(ch = toupper(message[i]))
        {
            case 'A':
                putchar('4');
                break;
            case 'B':
                putchar('8');
                break;
            case 'E':
                putchar('3');
                break;
            case 'I':
                putchar('1');
                break;
            case 'O':
                putchar('0');
                break;
            case 'S':
                putchar('5');
                break;
            default:
                putchar(ch);
                break;

        }

    }
    printf("!!!!!!!!!!\n");

    return 0;
 }