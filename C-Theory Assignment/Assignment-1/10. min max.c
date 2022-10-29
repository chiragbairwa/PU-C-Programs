// 10. Find out maximum and minimum elements of an array.

#include <stdio.h>

int findMinMax(int arr[], int arrSize){
    int min, max,i;
    min = max = arr[0];
    
    for(i=0; i<arrSize; i++){
        if(arr[i] < min){
            arr[i] = arr[i] + min;
            min = arr[i] - min;
            arr[i] = arr[i] -min;
        }
        
        if(arr[i] > max){
            arr[i] = arr[i] + max;
            max = arr[i] - max;
            arr[i] = arr[i] - max;
        }
    }
    
    printf("%d  %d", min , max);
}

int main() {
    int arr[] = {2,5,7,2,68,9,4,6,8,0};
    
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    findMinMax(arr, arrSize);
        
    return 0;
}