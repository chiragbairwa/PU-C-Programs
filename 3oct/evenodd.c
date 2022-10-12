#include <stdio.h>

int main() {
    
    int first;
    printf("Enter a Number : ");
    scanf("%d" , &first);
    
    first & 1 ? printf("Odd") : printf("Even") ;
    
    return 0;
}