/*
 * project2.c
 * 24 hour time
 * 12/15/2024
 * input: time in 24 hour time
 * output: time in 12 hour format
 * 
 */


#include <stdio.h>


int main(void)
{
    int hour, minutes, timestamp;
    int twenty_four_hour;

    printf("Enter a 24 hour time (hh:mm): ");
    scanf("%d:%d", &hour,&minutes);
    twenty_four_hour = hour;

    if (twenty_four_hour == 0)
    {
        twenty_four_hour = 12;
    }
    else if (twenty_four_hour > 12)
    {
        twenty_four_hour -= 12;
    }

    printf("\n");
    printf("Equivalent 12-hour time: %d:%.2d ", twenty_four_hour, minutes);
    if(hour < 12)
    {
        printf("AM\n");
    }
    else
    {
        printf("PM\n");
    }


    return 0;
}