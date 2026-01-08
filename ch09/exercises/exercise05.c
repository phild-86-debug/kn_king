/* exercise05.c
 * 01/08/2025
 * Write a function digit(n) that returns the number of digits 
 * in n, a positive integer. 
 */


 #include <stdio.h>


 int digit(int n);


 int main(void){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Number of digits in %d is %d\n", n, digit(n));

    return 0;
 }


 int digit(int n){
    int num_digits = 0;

    while (n > 0){
        n /= 10;
        num_digits ++;
    }

    return num_digits;

 }
