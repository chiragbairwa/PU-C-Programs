#include <stdio.h>

int main() {
    int arr[5];
    int perc,j, total=0;

        printf("Enter English Marks (out of 100) :");
        scanf("%d", &arr[0]);
         printf("Enter Hindi Marks (out of 100) :");
        scanf("%d", &arr[1]);
         printf("Enter Social Science Marks (out of 100) :");
        scanf("%d", &arr[2]);
         printf("Enter Science Marks (out of 100) :");
        scanf("%d", &arr[3]);
         printf("Enter Mathematics Marks (out of 100) :");
        scanf("%d", &arr[4]);
    
    
    for(j=0; j<5; j++){
        total += arr[j];
    }
    
    perc = total/5;
    
    printf("Percentage of 5 Subjects : %d ", perc);
    
    
    return 0;
}