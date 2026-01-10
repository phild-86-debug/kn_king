/* exercise11.c
 * 01/10/2026
 * write a function float compute_GPA(char grades[], int n).
 * The function computes a gpa from letter grades to a numerical
 * average and returns the average. 
 */


 #include <stdio.h>
 #include <ctype.h>

float compute_GPA(char grades[], int n);
int main(void){
    int n;
    char ch;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    char grades[n];
    printf("Enter %d grades: ", n);
    for (int i = 0; i < n; i++){
        scanf(" %c", &ch);
        grades[i] = ch;
    }
    

    printf("GPA: %.2f\n", compute_GPA(grades, n));

    return 0;
}


float compute_GPA(char grades[], int n){
    int grade_total = 0;
    for (int i = 0; i < n; i++){
        switch(toupper(grades[i]))
        {
            case 'A':
                grade_total += 4;
                break;
            case 'B':
                grade_total += 3;
                break;
            case 'C':
                grade_total += 2;
                break;
            case 'D':
                grade_total += 1;
                break;
            case 'F':
                grade_total += 0;
                break;
        }
    }
    return (float)grade_total / n;


}