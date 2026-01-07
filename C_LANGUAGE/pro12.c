#include<stdio.h>
void main()
{
    int i; // for loop 
    
    int start;
    int end;
    
    printf("Enter starting number : ");
    scanf("%d",&start);
    
    printf("Enter ending number : ");
    scanf("%d",&end);
    
    for(i=start;i<=end;i++)
    {
        printf("\t %d ",i);
    }
    
}
