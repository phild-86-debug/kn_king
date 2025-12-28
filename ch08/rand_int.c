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

    // Random number in a range function:

/*     int random_in_range(int min, int max) {
    return min + rand() % (max - min + 1);
} */
    return 0;
}

