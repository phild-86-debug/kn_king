/* project16.c
 * 01/03/2025
 * Write a program that tests whether two words are anagrams(pemutations of the same letters)
 */

 #include <stdio.h>
 #include <ctype.h>
 #include <stdlib.h>

 int main(){
    int letters[26] = {0};
    char ch;
    printf("Enter first word: ");
    while((tolower(ch = getchar()))!= '\n'){
        if(isalpha(ch)){

            letters[ch - 'a'] ++;
        }
    }
    printf("Enter second word: ");
     while((tolower(ch = getchar()))!= '\n'){
        if(isalpha(ch)){

            letters[ch - 'a'] --;
        }
    }

    for (int i = 0; i < 26; i++){
        if (letters[i] != 0){
            printf("The words are not anagrams.\n");
            exit(EXIT_SUCCESS);
        }
    }
    printf("The words are anagrams.\n");

    return 0;



 }                                                                                                                   