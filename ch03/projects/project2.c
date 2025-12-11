// project2.c
// a program that formats product information entered by the user.

#include <stdio.h>


int main(void)
{
    int item_number;
    double unit_price;
    int month;
    int day; 
    int year;


    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit_price: ");
    scanf("%lf", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day ,&year);

    // format table
    printf("Item\t\tUnit\t\t\tPurchase\n");
    printf("\t\tPrice\t\t\tDate\n");
    printf("%-d\t\t%s%6.2f\t\t\t%.2d/%.2d/%d\n",item_number, "$", unit_price, month, day, year);

    return 0;


}
