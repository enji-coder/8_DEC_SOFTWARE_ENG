#include<stdio.h>
void main()
{
    char char_value; // variable declaration
    printf("Enter a character : ");
    scanf("%c",&char_value);
    
    if(char_value == 'a' || char_value == 'e' || char_value == 'i' || char_value == 'o' || char_value == 'u')
    {
        printf("vowel");
    }
    else
    {
        printf("not a vowel");
    }
}