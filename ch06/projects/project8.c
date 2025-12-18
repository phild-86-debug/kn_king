/*
 * project8.c
 * one month calendar
 * 12/18/2025
 * task: Write a program that prints a one month calendar. 
 * The user specifies the number of days in the month and the 
 * day of the week on which the month begins. 
 */


#include <stdio.h>


int main(void)
{
    int n, start_date;
    int i, day = 1;

    printf("Enter the number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat)");
    scanf("%d", &start_date);
    printf("\n");

    for(i = 1; i <= n+start_date-1; i++)
    { 
        if(i < start_date)
            printf("   ");
        else
        {
            printf("%3d", day);
            day += 1;
            
        }
        if (i % 7 == 0)
            printf("\n"); 
    }
    printf("\n");
    return 0;

}