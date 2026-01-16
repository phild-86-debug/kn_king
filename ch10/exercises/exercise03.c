// exercise03.c

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5

void read_cards(int hand[][2]);
bool duplicate_card(int rank, int suit, int hand[NUM_CARDS][2], int cards_read);

int main(void)
{
    int hand[5][2];
    read_cards(hand);

    return 0;
}

void read_cards(int hand[5][2]){
    char ch, rank_ch, suit_ch;
    int rank, suit;
    int cards_read = 0;
    int i = 0, j = 0;
    bool bad_card;

    while(cards_read < NUM_CARDS){

        bad_card = false;
        printf("Enter a card: ");
        rank_ch = getchar();
        switch (rank_ch)
        {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch){
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
            default:            bad_card = true;
        }

        while ((ch  = getchar()) != '\n')
            if (ch != ' ') bad_card = true;

        if(bad_card)
            printf("Bad card; ignored.\n");
        else if(duplicate_card(rank, suit, hand, cards_read))
            printf("Duplicate card; ignored.\n");
        else
        {
            cards_read++;
            hand[i][j] = rank;
            hand[i][++j] = suit;
            i++;
            j = 0;
        }



        printf("rank is: %d\n", rank);
        printf("suit is: %d\n", suit);



        
    }

}

bool duplicate_card(int rank, int suit, int hand[NUM_CARDS][2], int cards_read)
{
    int i;
    for (i = 0; i < cards_read; i++){
        if(hand[i][0] == rank && hand[i][1] == suit)
            return true;
    }
    return false;
}