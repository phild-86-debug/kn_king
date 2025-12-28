/* rand_int.c
 *12/28/2025
 * chooses a random integer between 0 and n-1
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
    int n = 9;

    for(int i = 0; i < 5; i++)
    {
        int r = rand() % n;
        printf("%d\n", r);
    }
    return 0;
}

