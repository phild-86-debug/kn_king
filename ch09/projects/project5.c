/* project5.c
 * 01/05/2025
 * magic square
 * Modify project 17 from chapter 8 so that it includes the following functions:
 *      void create_magic_square(int n, char magic_square[n][n]);
 *      void print_magic_square(int n, char magic_square [n][n]);

 */

 #include <stdio.h>


 void create_magic_square(int n, int magic_square[n][n]);
 void print_magic_square(int n,  int magic_square [n][n]);


 int main(void) {
    int n;
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd integer between 1 and 99.\n");
    printf("Enter the size of the magic square: ");
    scanf("%d", &n);
    int magic_square[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            magic_square[i][j] = 0;

        }
    }

    create_magic_square(n, magic_square);
    print_magic_square(n, magic_square);

    return 0;

 }


 void create_magic_square(int n, int magic_square[n][n]){
    int mid, row, column;
    int digit = 1;
    mid = n / 2;
    column = mid;
    row = 0;
    magic_square[row][column] = digit;

    while(digit <=  n * n - 1){
        digit++;
        row -= 1;
        column += 1;

        if (row < 0)
             row = n-1;
        if (column >= n)
            column = 0;
        if(magic_square[row][column] != 0){
            row ++;
            if (row >= n)
                row = 0;
            column --;
            if (column < 0)
                column = n-1;
            row ++;     
            
        }

        magic_square[row][column] = digit;

    }   

 }

 void print_magic_square(int n, int magic_square [n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", magic_square[i][j]);
        }
        printf("\n");
    }
        
    printf("\n");
 }