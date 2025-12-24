/* project1.c
 * 12/24/2025
 * Modify the repdigit.c program of section 8.1 so that is shows which digits(if any)
 * were repeated.  
 */


#include <stdbool.h>
#include <stdio.h>


int main(void)
{
    bool digit_seen[10] = {false};
    bool digit_repeated[10] = {false};
    int digit;
    long n;
    int i;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit])
            digit_repeated[digit] = true;
        digit_seen[digit] = true;
        n /= 10;
    }

    printf("Repeated digit(s): ");
    for (i = 0; i < 10; i++)
    {
        if (digit_repeated[i])
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}