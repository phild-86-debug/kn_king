/* project3.c
 * 01/03/2025
 * Modiify programming project 9 from chapter 8 so that it includes the following functions:
 *      void generate_random_walk(char, walk[10][10])
 *      void print_array(char walk[10][10]).
 */


 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <stdbool.h>

 void generate_random_walk(char walk[10][10]);
 void print_array(char walk[10][10]);

 #define SIZE 10


 int main(void)
 { 
    srand(time(NULL));

    char matrix[SIZE][SIZE];
    generate_random_walk(matrix);
    print_array(matrix);

    return 0;
 }


  void generate_random_walk(char walk[10][10]){
    int i = 0, j = 0;
    char ch = 'A';
    int rand_int;

    // initialize matrix
    for (int row = 0; row < SIZE; row++){
        for(int column = 0; column < SIZE; column++){
            walk[row][column] = '.';
        }
    }

    walk[i][j] = ch;
    ch++;

    // control loop
    while(1){
        bool up = 1, down = 1, left = 1, right = 1;
        if(ch > 'Z')
            break;
        rand_int = rand() % 4;

        switch(rand_int)
        {
            case 0: /* up*/
                //up = 1;
                if(i-1 >= 0 && walk[i-1][j] == '.')
                {
                    i--;
                    walk[i][j] = ch;
                    ch++;
                    break;
                }
                else
                    up = 0;
                    
            case 1: /* down*/
                if(i+1 <= 9 && walk[i+1][j] == '.')
                {
                    i++;
                    walk[i][j] = ch;
                    ch++;
                    break;
                }
                else
                    down = 0;
                    
            case 2: /*left*/
                if(j-1 >= 0 && walk[i][j-1] == '.')
                {
                    j--;
                    walk[i][j] = ch;
                    ch++;
                    break;
                }
                else
                    left = 0;
                    
            case 3: /*right*/
                if(j+1 <= 9 && walk[i][j+1] == '.')
                {
                    j++;
                    walk[i][j] = ch;
                    ch++;
                    break;
                }
                else
                    right = 0;
                
        }
        if (up == 0 && down == 0 && left == 0 && right == 0)
            break;
    }
    printf("\n");
}

 void print_array(char walk[10][10]){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%3c", walk[i][j]);
        }
        printf("\n");
    }
 }


