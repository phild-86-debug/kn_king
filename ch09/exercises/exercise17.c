/* exercise17.c
 * 01/11/2026
 * Rewrite the factorial function so that it is no longer recursive.
 */

 #include <stdio.h>

 int fact(int n);

int main(void){
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, fact(n));

    return 0;
}

 int fact(int n){
    int result = 1;
    if (n == 0)
        return 1;
    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
 }