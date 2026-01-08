/* Exercise06.c
 * 01/08/2026
 * Write a function digit(n, k) that retunrs the kth digit from the right.
 * Return 0 if k exceeds the number of digits. 
 */


 #include <stdio.h>


 int digit(int n, int k);

 
 int main (void){
    int n, k;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Enter k: ");
    scanf("%d", &k);
    printf("kth digit: %d\n", digit(n, k));

    return 0;

 }


 int digit(int n, int k){
    int iter = 0;
    while (n > 0){    
        iter++;
        if (iter == k)
            return n % 10; 
        n /= 10;     
    }

    return 0;
 }