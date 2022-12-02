// 5. Find Sum of Digits of an integer using Recursive Function.
#include <stdio.h>
int sumOfDigits(int num){
    int result = 0;
    
    if(num <= 0)
        return 0;
    
    result = num % 10;
    
    return result + sumOfDigits(num/10);
}


int main() {
    int num=12345;
    
    printf("Sum of Digits of %d is : %d",num ,  sumOfDigits(num) );

    return 0;
}