// 4. Write a program to check whether entered character is vowel, consonant, digit or a special character.

#include <stdio.h>

int checkChar(char character){
    int vowel=0, consonant=0 , digit=0, special_character=0;
    
    // Check Vowel
    if( (character == 'a') ||  (character == 'e') || (character == 'i') || (character == 'o') || (character == 'u') )
        vowel = 1;
        
    else if( (character == 'A') || (character == 'E') || (character == 'I') || (character == 'O') || (character == 'U') )
        vowel = 1;
        
    // Check Consonant
    else if ((character >=65 && character <= 90) || (character >=97 && character <= 122) )
        consonant = 1;

    // Check DIGIT
    else if(character >=48 && character<=57)
        digit = 1;
        
    // Print
    if(vowel)
        printf("Vowel: Yes\n");
    
    if(consonant)
        printf("Consonant: Yes\n");

    if(digit)
        printf("Digit: Yes\n");

    
    if(! (vowel || digit || consonant))
        printf("Special Character: Yes\n");
    
}

int main() {
    char character;
    
    // Take Character from the user
    printf("Enter a Character: ");
    scanf("%c" , &character);
    
    checkChar(character);
    
    return 0;
}