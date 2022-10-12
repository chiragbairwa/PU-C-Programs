#include <stdio.h>

int main() {
    
    int first,second,third;
    printf("Enter 1st Num : ");
    scanf("%d" , &first);
    
    printf("Enter 2nd Num : ");
    scanf("%d", &second);
    
    printf("Enter 3rd Num : ");
    scanf("%d", &third);
    
    if(first > second) {
        if(first > third) 
            printf("First Num is greater :");
        else
            printf("Third Num is greater :");
    }
    else if(second > third){
        printf("Second Num is greater :");
    }
    else printf("Third Num is greater :");
    
    return 0;
}