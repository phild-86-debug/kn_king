// exercise03.c

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_CARDS 5

/* external variables*/
bool straight, flush, four, three;
int pairs;  /* can be 0, 1, or 2*/

void read_cards(int hand[][2]);
bool duplicate_card(int rank, int suit, int hand[NUM_CARDS][2], int cards_read);
void analyze_hand(int hand[][2]);
void selection_sort(int[], int n);

/****************************************************************
 * main: Calls read cards, analyze_hand and print_result        *
 * repeatedly                                                   *
 ****************************************************************/
int main(void)
{
    int hand[5][2];
    read_cards(hand);
    analyze_hand(hand);

    return 0;
}

/****************************************************************
 * analyze_hand: Determiness whether the hand contains a        *
 *               straight, a flush, four-of-a-kind,             *
 *               and/or three-of-a-kind; determines the         *
 *               number of pairs; stores the results into the   *
 *               the external variables straight, flush,        *
 *               four, three, and pairs.                        *
 ****************************************************************/
void analyze_hand(int hand[][2])
{
   int num_consec = 0;
   int rank, suit;
   int flag = 1;
   
   straight = false;
   flush = false;
   four = false;
   three = false;
   pairs = 0;

   // check for flush
   suit = hand[0][1];
   for (int i = 0; i < NUM_CARDS; i++){
        if (hand[i][1] != suit){
            flag = 0;
            break;
        }
    }
    if (flag)
        flush = true;
    printf("Flush is: %d\n", flush);

    // check for straight
    int destination[NUM_CARDS];
    for (int i = 0; i < NUM_CARDS; i++){
        destination[i] = hand[i][0];
    }

    // calls selection sort on destination
    selection_sort(destination, NUM_CARDS);

    for (int i = 0; i < 5; i++){
        printf("%d ", destination[i]);
    }
}

void selection_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}








/****************************************************************
 * read cards: Reads the cards into the int array hand.         *
 * Checks for bad cards and duplicate cards                     *
 ****************************************************************/
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