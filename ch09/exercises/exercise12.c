/* excercise12.c
 * 01/10/2026
 * Write the following function:
 * double inner_product (double a[], double b[], int n);
 * The function should return a[0] * b[0] + a[i] * b[i] + ... + a[n-1] *
 * b[n-1]
 */


 #include <stdio.h>


 double inner_product(double a[], double b[], int n);
 int main(void){
    double a[] = {1.0, 7.9, 2.2, 3, 5};
    double b[] = {7, 8.1, 8.2, 6, 9};
    printf("inner product: %.2f\n", inner_product(a, b, 5));

    return 0;

 }


 double inner_product(double a[], double b[], int n){
    double result = 0;
    for (int i = 0; i < n; i++){
        result += a[i] * b[i];
    }

    return result;
 }