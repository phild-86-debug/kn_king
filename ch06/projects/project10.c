/* project10.c
 * earliest date
 * 12/19/2025
 * task: Modify project 9/chapter 05
 * input: Any number of dates
 * output: The ealiest date of the entered dates.
 * 
 */


#include <stdio.h>


int main(void)
{
    int month, day, year;
    int low_month = 13, low_day = 32, low_year = 90;

    while(1)
    {
        printf("Enter date: (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);
        if(month == 0)
            break;
        if(year < low_year)
        {
            low_year = year;
            low_month = month;
            low_day = day;
    
        }
        else if(month < low_month && year == low_year)
        {
            low_year = year;
            low_month = month;
            low_day = day;
        }
        else if (day < low_day && month == low_month && year == low_month)
        {

            low_year = year;
            low_month = month;
            low_day = day;
        }

    }
    printf("%d/%d/%2.2d is the earliest_date\n", low_month, low_day, low_year);
    printf("\n");

    return 0;
}
   