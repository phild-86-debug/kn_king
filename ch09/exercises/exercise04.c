/* exercise04.c
 * 01/08/2026
 * Write a function day_of_year(month, day, year) that returns the 
 * day of the year(an integer between 1 and 366) specified by the 
 * three arguments. 
 */

 #include <stdio.h>

 int day_of_year(int month, int day, int year);


 int main(void){
    int month, day, year;
    month = 12;
    day = 31;
    year = 2024;
    printf("Day of the year: %d\n", day_of_year(month, day, year));
 }
    

int day_of_year(int month, int day, int year){
    int day_year;
    for (int i = 1; i < month; i++){
        if ( i == 4 || i == 6 || i == 9 || i == 11)
            day_year += 30;
        else if ( i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            day_year += 31;
        else if (i == 2)
        {
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                day_year += 29;
            else
                day_year += 28;
        }
    }

    day_year += day;

    return day_year;
}
 
            

    

  