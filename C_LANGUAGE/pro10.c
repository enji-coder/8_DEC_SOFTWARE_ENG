#include<stdio.h>
void main()
{
    char char_value; // variable declaration
    printf("Enter a character : ");
    scanf("%c",&char_value);
    
    switch(char_value)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel");
            break;
            
        default:
            printf("not a vowel");
            
    }
}