#include <stdio.h>

int main(void)

{

    int i = 12345;
    float j = 326.123456f;
    double k = 326.123456;
    // right justification
    printf("int i: %10d\n", i);
    // left justification
    printf("int i: %-10d", i);
    printf("%d\n", 123345);
    printf("Double k: %-10g", k);
    printf("%g\n", k);

    // right justification
    printf("float j: %2.0f\n", j);
    printf("float j: %f\n", j);
    printf("Double k: %f\n", k);
    // so width includes the dot '.'  
    printf("Double k: %11f\n", k);
    printf("Double k: %3f\n", k);
    return 0;

}


