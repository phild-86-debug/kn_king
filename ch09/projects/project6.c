/* project6.c
 * 01/09/2026
 * A program that asks the user for the value x and returns the value
 * of a certain polynomial.
 */


 #include <stdio.h>


 int poly_value(int x);


 int main(void)
 {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("The value of the polynomial is: %d\n", poly_value(x));
    
    return 0;
 }



  int poly_value(int x){
    return 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 
        7 * x - 6;
  }