// project4.c
// A c program that asks for a phone number and then prints it out in a specified format
// 12/11/2025


#include <stdio.h>

int main(void)
{
    int area_code;
    int location;
    int number;

    printf("Enter phone number [(xxx) xxx-xxxx)]");
    scanf("(%d) %d-%d", &area_code, &location, &number);
    printf("You entered %d.%d.%d\n", area_code, location, number);


    return 0;


}
