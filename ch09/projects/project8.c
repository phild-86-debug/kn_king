/* project8.c
 * 01/09/2026
 * craps
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


int roll_dice(void);
bool play_game(void);


int main(void){
    srand(time(NULL));

    int win = 0, lose = 0;
    bool outcome;
    char ch;

    while(1){
        outcome = play_game();
        if (outcome)
            win += 1;
        else
            lose  += 1;
        printf("\n\nPlay again y or n: ");
        scanf(" %c", &ch);
        printf("\n");
        if (ch != 'Y' && ch != 'y')
            break;
     }

     printf("\nWins: %d  Losses: %d\n", win, lose);

     return 0;

}


bool play_game(void){
    int point;
    int sum = roll_dice();
    printf("You rolled : %d\n", sum);
    if ( sum == 7 || sum == 11){
        printf("You win!");
        return true;
    }
    else if ( sum == 2 || sum == 3 || sum == 12){
        printf("You lose!");
        return false;
    }
    else
        point = sum;
        printf("Your point is %d\n", point);

    while(1){
        sum = roll_dice();
        printf("You rolled %d\n", sum);
        if (sum == 7){
            printf("You lose!");
            return false;
        }
        if (sum == point)
            break;

    }
    printf("You won!");
    return true;
}


int roll_dice (void){
    int dice1, dice2;
    dice1 =  1 + rand() % (6 - 1 + 1);
    dice2 =  1 + rand() % (6 - 1 + 1);
    return dice1 + dice2;

}