/* project6.c
 * sizeof()
 * 12/21/2025
 * prints sizeof(int, short, long, float, double, long double
 * 
 */


#include <stdio.h>


int main(void)
{
    printf("sizeof int: %zu\n", sizeof(int));
    printf("size of short: %zu\n", sizeof(short));
    printf("sizeof long: %zu\n", sizeof(long));
    printf("sizeof float: %zu\n", sizeof(float));
    printf("sizeof double: %zu\n", sizeof(double));
    printf("sizeof long double: %zu\n", sizeof(long double));
    
    return 0;
}