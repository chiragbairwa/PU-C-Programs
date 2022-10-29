// 9. Reverse the elements of an array without using any other array.

#include <stdio.h>

int reverseArray(int arr[] , int size){
    int i,temp;
    for(i=0 ; i< (size)/2; i++){
        temp = arr[i];
        arr[i] = arr[(size-i) -1];
        arr[(size-i)-1] = temp;
    }
    
    return 1;
}
int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int arrSize = sizeof(arr)/ sizeof(arr[0]);
    int i;
    
    reverseArray(arr, arrSize);
    
    for(i=0; i<arrSize; i++)
        printf("%d ", arr[i]);
        
    return 0;
}