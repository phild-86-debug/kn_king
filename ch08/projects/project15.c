/* project15.c
 * 01/01/2025
 * Ceasar Cipher
 * input : A message less than 80 characters.
 * output: A message encrypted by using a Ceasar Cipher.
 */


 #include <stdio.h>
 #include <ctype.h>

 #define SIZE 80


 int main(void)
 {
    char ch, message[80] = {0};
    int n, i = 0;
    int counter  = 0;

    printf("Enter message to be encrypted: ");
    while((ch = getchar()) != '\n' && i < SIZE) {
        message[i]  = ch;
        i++;
        counter++;
    }
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    printf("Encrypted message: ");

    for (i = 0; i < counter; i++){
        if(isupper(message[i]))
            message[i] = ((message[i] - 'A') + n) % 26 + 'A';
        else if(islower(message[i]))
            message[i] = ((message[i] - 'a') + n) % 26 + 'a';
        
        putchar(message[i]);
    }

    printf("\n");
 }