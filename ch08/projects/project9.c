/* project9.c
 * 12/28/2025
 * Write a program that generates a random walk across a 10 X 10 array.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10


int main(void)
{
    char matrix[SIZE][SIZE];
    int i = 0, j = 0;
    char ch = 'A';
    int rand_int;
    bool up, down, left, right;

   
   
    srand(time(NULL));

    // initialize matrix
    for(int i = 0; i < SIZE; i++){
        for(int j = 0; j < SIZE; j++)
        {
            matrix[i][j] = '.';
        }
    }
    // program loop
    matrix[i][j] = ch;
    ch++;
    while(1)
    {

        up = 1;
        down = 1;
        left = 1;
        right = 1;
        
        
        
        if(ch >'Z')
            break;
            

        rand_int = rand() % 4;

        switch(rand_int)
        {
            case 0: /* up*/
                up = 1;
                if(i-1 >= 0 && matrix[i-1][j] == '.')
                {
                    i--;
                    matrix[i][j] = ch;
                    ch++;
                    up = 1;
                    break;
                }
                else
                    up = 0;
                    
            case 1: /* down*/
                down = 1;
                if(i+1 <= 9 && matrix[i+1][j] == '.')
                {

                    down = 1;
                    i++;
                    matrix[i][j] = ch;
                    ch++;
                    down = 1;
                    break;
                }
                else
                    down = 0;
                    
            case 2: /*left*/
                left = 1;
                if(j-1 >= 0 && matrix[i][j-1] == '.')
                {
                    left = 1;
                    j--;
                    matrix[i][j] = ch;
                    ch++;
                    left = 1;
                    break;
                }
                else
                    left = 0;
                    
            case 3: /*right*/
                right = 1;
                if(j+1 <= 9 && matrix[i][j+1] == '.')
                {
                    right = 1;
                    j++;
                    matrix[i][j] = ch;
                    ch++;
                    right = 1;
                    break;
                }
                else
                    right = 0;
                
        }
        if (up == 0 && down == 0 && left == 0 && right == 0)
            break;
    }

    for(int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++){
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("left: %d\n", left);
    printf("right: %d\n", right);
    printf("down: %d\n", down);
    printf("up: %d\n", up);

    
        

        





    printf("\n");

    return 0;

    
}