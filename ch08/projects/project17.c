/* project17.c
 * 01/04/2025
 * magic square 
 * Generates an n X n magic square
 */


 #include <stdio.h>


 int main(void){
    int n, mid, row, column;
    int digit = 1;
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic_square[n][n];

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            magic_square[i][j] = 0;
        }
    }

    // set 1
    mid = n / 2;
    column = mid;
    row = 0;
    magic_square[row][column] = digit;

    while(digit <= n * n - 1){
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

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d ", magic_square[i][j]);
        }
        printf("\n");
    }
        

    printf("\n");

    return 0;

 }