/*
 * project3.c
 * broker
 * 12/15/2025
 * Modify the broker.c program to enter number of shares and price per share and
 * modify to include the commision from a rival broker.
 * input: number of shares and cost per share
 * output: Broker commission and rival broker commission
 
 */


#include <stdio.h>

int main(void)
{
    float commission, value;
    int num_shares;
    float cost_share;
    float rival_commission;

    printf("Enter number of shares and cost per share: ");
    scanf("%d%f", &num_shares, &cost_share);
    value = num_shares * cost_share;

    printf("\n");
    // first broker commisssion

    if(value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if(value < 20000)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if(value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    // rival broker commission

    if(num_shares < 2000)
        rival_commission = 33.00f + 0.03 * num_shares;
    else
        rival_commission = 33.00f + .02f * num_shares;

    printf("Broker commission: $%.2f\n", commission);
    printf("Rival broker commission: $%.2f", rival_commission);
    




    return 0;
}