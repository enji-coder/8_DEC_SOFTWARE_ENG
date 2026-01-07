#include<stdio.h>
#include<stdbool.h>
void main()
{
    bool flag=true;  // inintlization 
    int num;
    
    char choice;
    while (flag)
    {
        printf("Enter a number : ");
        scanf("%d",&num);
        
        printf("do you want to continue press 'y' for yes and press 'n' for no : ");
        scanf(" %c",&choice);
        
        if(choice=='y')
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
        
    }
}