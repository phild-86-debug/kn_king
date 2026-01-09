/* project7.c
 * 01/09/2026
 * power function modified; recursive power function
 */


 #include <stdio.h>


 int power(int x, int n);


 int main(void)
 {
    int x, n;
    printf("Enter an integer for x: ");
    scanf("%d", &x);
    printf("Enter an integer for n: ");
    scanf("%d", &n);

    printf("%d ^%d is: %d\n", x, n, power(x, n));
 }


  int power(int x, int n){
    int y;
    if(n == 0)
        return 1;
    else
        if (n % 2 == 0){
            y = power(x, n/2);
            return y * y;
        }
        else
            return x * power(x, n-1);
            
            
  }