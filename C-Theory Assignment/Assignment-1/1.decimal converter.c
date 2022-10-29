// Convert a decimal number to binary, octal and hexadecimal number using functions.
#include <stdio.h>
int toBinary(int number){
    int result = 0, tempToStoreRemainder , position=1 ;
    if(number == 0)
        return 0;
    
    while(number > 0){
        tempToStoreRemainder = number % 2;
        
        // result = result + 101 = 1001
        result += tempToStoreRemainder * position;
        number /= 2;
        position *= 10;
    }
    return result;
}

int toOctal(int number){
    int result = 0, tempToStoreRemainder , position=1 ;
    if(number == 0)
        return 0;
    
    while(number > 0){
        tempToStoreRemainder = number % 8;
        
        // result = result + 101 = 1001
        result += tempToStoreRemainder * position;
        
        number /= 8;
        position *= 10;
    }
    return result;
}
// int toHexadecimal(int number){
//     int result = 0, tempToStoreRemainder , position=1 ;
//     if(number == 0)
//         return 0;
    
//     while(number > 0){
//         tempToStoreRemainder = number % 16;
        
//         // result = result + 101 = 1001
//         result += tempToStoreRemainder * position;

//         number /= 16;
//         position *= 10;
//     }
//     return result;
// }

int main() {
    int number;
    
    // Take number from the user
    printf("Enter a decimal number: ");
    scanf("%d", &number);
    
    // To Binary
    printf("%d\n", toBinary(number) );
    
    // To Octal
    printf("%d\n", toOctal(number) );
    
    // To Hexadecimal
    // printf("%d\n", toHexadecimal(number) );
    

    return 0;
}