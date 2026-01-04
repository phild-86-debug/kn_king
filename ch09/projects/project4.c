/* project4.c
 * 01/03/2025
 * anagrams
 * Modify programming project 16 from chapter 8 so that it includes the following functions:
 *     void read_word(int counts[26])
 *     bool equal_array(int counts1[26], int counts2[26])
 */


 #include <stdio.h>
 #include <ctype.h>
 #include <stdlib.h>
 #include <stdbool.h>


 void read_word(int counts[26]);
 bool equal_array(int counts1[26], int counts2[26]);


 int main(void)
 {
    int letters1[26] = {0};
    int letters2[26] = {0};
    read_word(letters1);
    read_word(letters2);

    if(equal_array(letters1, letters2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");

    return 0;
 }


 void read_word(int counts[26]){
    char ch;
    printf("Enter word: ");
    while((ch = getchar()) != '\n') {
        ch = tolower(ch);
        if(isalpha(ch))
            counts[ch - 'a']++;
    }
 }


 bool equal_array(int counts1[26], int counts2[26]){
    for (int i = 0; i < 26; i++){
        if (counts1[i] != counts2[i])
            return false;
    }
    return true;
 }