/* exercise10.c
 * 01/10/2026
 * Write functions for: The largest element of the array, the average
 * of all elements in array, the number of positive elements in array.
 *  Where a is an array of ints 
 * and n is the length of the array.
 */


 #include <stdio.h>


int largest(int arr[], int n);
double average(int arr[], int n);
int positive_elements(int arr[], int n);


int main(void){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d array elements: ", n);
    for(int i =  0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The largest element in the array: %d\n", largest(arr, n));
    printf("The average of the array is: %.2f\n", average(arr, n));
    printf("Number of positive elements: %d\n", positive_elements(arr, n));

    return 0;
}


int positive_elements(int arr[], int n){
    int num_positive = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] > 0)
            num_positive += 1;
    }
    return num_positive;
}


double average(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return (double)sum / n;

}


int largest(int arr[], int n){
int max = arr[0];
for (int i = 0; i < n; i++){
    if (arr[i] > max)
            max = arr[i];
}
return max;
}