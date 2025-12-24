/* project2.c
 * 12/24/2025
 * repeated digit;  print table
 * Modify repdigit.c program of section 8.1 so that it prints a table
 * showing how many times each digit appears in ithe number.
 * 
 */


#include <stdbool.h>
#include <stdio.h>


int main(void)
{
    // bool digit_seen[10] = {false};
    int digit_count[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }

    printf("\n");


    printf("%-13s", "Digit:");
    for(int i = 0 ; i < 10; i++)
        printf("%d  ", i);

    printf("\n");
    printf("Occurrences: ");
    for(int i = 0; i < 10; i++)
        printf("%-3d", digit_count[i]);
    
    printf("\n");
    
    return 0;
}