/* decompose.c
 * 01/12/2026
 * Breaks a floating point into its int
 * part and its fractional part. 
 */

 #include <stdio.h>

void decompose(double x, long *int_part, double *frac_part);

int main(void)
{
    long i;
    double d;
    decompose(3.14159, &i, &d);

    printf("int part: %ld\n", i);
    printf("frac. part: %f\n", d);

    return 0;


}

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x;
    *frac_part = x - *int_part;
}