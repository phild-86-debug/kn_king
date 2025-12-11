/* 
 * project3.c
 * A program that breaks apart an ISBN code into its components
 * 12/11/2025
*/


#include <stdio.h>


int main(void)
{
    int prefix, group, publisher, item_number, check_digit;
    printf("Enter an ISBN number: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item_number, &check_digit);
    printf("GSI prefix: %d\n", prefix);
    printf("Group identifier: %d\n", group);
    printf("Publisher code: %d\n", publisher);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);

    

    return 0;

}