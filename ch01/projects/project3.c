/* 
 * project3.c
 * Volume of a sphere with user input.
*/


#include <stdio.h>

int main(void)
{
    float radius;
    float volume;

    printf("Enter a radius: ");
    scanf("%f", &radius);
    volume = 4.0/3.0 * 3.14159f * radius * radius * radius;
    printf("The volume is: %f\n", volume);
    return 0;   
}