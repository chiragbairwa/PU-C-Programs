#include <stdio.h>

int main() {
    
    int first,second, total=0;
    printf("Enter 1st Num : ");
    scanf("%d" , &first);
    
    printf("Enter 2nd Num : ");
    scanf("%d", &second);
    
    first == second ? printf("Num are equal "):
        first > second ? printf("First num is greater %d: ", first) : 
        printf("Second num is greater %d: ", second) ;
    
    return 0;
}