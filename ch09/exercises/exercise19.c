/* exercise19.c
 * 01/10/2026
 * Mystery function
 * base 10 to binary.(base 2)
 */


 #include <stdio.h>


 void pb(int n)
 {
    if (n != 0){
        pb(n/2);
        putchar('0' + n % 2);
    }
 }


 int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    pb(n);
    printf("\n");

    return 0;
 }