/* project1.c
 * 01/02/2025
 * selection_sort
 * 


*/


#include <stdio.h>
#define SIZE_MAX 100

void selection_sort(int a[], int n);

int main()
{
    int arr[SIZE_MAX];
    int n;
    
    printf("Enter the number of integers you wish to enter: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selection_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;


}


void selection_sort(int a[], int n){

    if(n == 1)
        return;
    int largest_value = a[0], ind= 0;
    for (int i = 0; i < n; i++){
        if (a[i] > largest_value){
             largest_value = a[i];
             ind = i;
            
        }
           
    }

    int temp = a[n-1];
    a[n-1] = a[ind];
    a[ind] = temp;

    selection_sort(a, n-1);


}