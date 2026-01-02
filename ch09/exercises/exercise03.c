/* Write a function gcd(m, n) that calculates the greatest common
   divisor between m and n
 */

 #include <stdio.h>

 int gcd(int m, int n){
    int remainder;
    while(n != 0)
    {
        remainder  = m % n;
        m = n;
        n = remainder;
    }
    return m;
 }


 int main(void){
    int a = 4;
    int b = 132;

    printf("gcd of %d and %d is %d\n", a, b, gcd(a, b));

    return 0;
 }