/* exercise18.c
 * 01/11/2026
 * write a recursive version of the gcd function. (Greatest common divisor)
 */

#include <stdio.h>

int gcd (int m, int n);

int main(void){
    int m, n;
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);
    printf("The gcd: %d\n", gcd(m, n));

    return 0;

}
int gcd(int m, int n){
    if (n == 0)
        return m;
    else
        gcd(n, m % n);

}