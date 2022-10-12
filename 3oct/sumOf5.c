#include <stdio.h>

int main() {
    int arr[5];
    int i,j, total=0;
    for(i=0; i<5; i++){
        printf("Enter %dth : ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for(j=0; j<5; j++){
        total += arr[j];
    }
    printf("Total : %d ", total);
    
    
    return 0;
}