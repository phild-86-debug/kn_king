/* project9.c
 * 12-hour time to 24-hr time
 * 12/22/2025
 * task: Write a program that asks the user for a 12-hour time, then displays 
 * the time in 24 hour format.
 * 
 */


#include <stdio.h>
#include <ctype.h>


int main(void)
{
    int hour, minute;
    char timestamp;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &timestamp);

    if (toupper(timestamp) == 'A')
    {
        if (hour == 12)
            hour = 0;
        
    }
    else
    {
        if (hour != 12)
            hour = hour + 12;
            
    }

    printf("Equivalent 24-hour time: %2.2d:%2.2d\n", hour, minute);

    return 0;
}