/*
 * project4.c
 * Beaufort wind scale
 * 12/15/2025
 * input: wind speed in knots
 * output: corresponding description
 * 
 */

#include <stdio.h>

int main(void)
{
    int wind_speed = 0;

    printf("Enter a wind speed in knots: ");
    scanf("%d", &wind_speed);

    printf("The description for a wind speed of %d is: ", wind_speed);

    if(wind_speed < 1)
        printf("Calm\n");
    else if (wind_speed < 4)
        printf("Light air\n");
    else if (wind_speed < 28)
        printf("Breeze\n");
    else if (wind_speed < 48)
        printf("Gale\n");
    else if (wind_speed < 64)
        printf("Storm\n");
    else
        printf("Hurricane\n");

}