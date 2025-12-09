// project7.c
// provides denomination of bills for a given amount

#include <stdio.h>

int main(void)
{

    int amount;
    int subtotal;
    int twenty, ten, five, one;
    printf("Enter a dollar amount:$ ");
    scanf("%d", &amount);
    subtotal = amount;
    twenty = subtotal / 20;
    subtotal = subtotal - twenty * 20;
    ten = subtotal / 10;
    subtotal = subtotal - ten * 10;
    five = subtotal / 5;
    subtotal = subtotal - five * 5;
    one = subtotal / 1;


    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$ 5 bills: %d\n", five);
    printf("$ 1 bills: %d\n", one);

    return 0;


}