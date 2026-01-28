#include<stdio.h>

void add(); // function declaration 
void mul(); 
void division();
void sub(); 

void main()
{
    int choice;
    
    printf("\n MENU   :: \n");
    printf("\n press 1 for addition : ");
    printf("\n press 2 for multiplication : ");
    printf("\n press 3 for division : ");
    printf("\n press 4 for substration : ");
    
    printf("\n\nEnter your choice :");
    scanf("%d",&choice);
    
    switch(choice)   
    {
        case 1:
            add();
            break;
            
            case 2:
            mul();
            break;
    }
}

void add()
{
   int num1,num2;
   printf("Enter number 1 : ");
   scanf("%d",&num1);
   
   printf("Enter number 2 : ");
   scanf("%d",&num2);
   
   int ans = num1 + num2;
   printf("\n ans = %d",ans);
}

void mul()
{
    int num1,num2;
   printf("Enter number 1 : ");
   scanf("%d",&num1);
   
   printf("Enter number 2 : ");
   scanf("%d",&num2);
   
   int ans = num1 * num2;
   printf("\n ans = %d",ans);
}

void division()
{
    
}

void sub()
{
    
}