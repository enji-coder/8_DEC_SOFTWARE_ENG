// accept 5 numbers from user 
/*

Enter a number : 89
Enter a number : 5
Enter a number : 9
Enter a number : 2
Enter a number : 5
*/
#include<stdio.h>
void main()
{
    int i; // for loop 
    int n;
    
    for(i=1;i<=5;i++)
    {
        printf("Enter a number : ");
        scanf("%d",&n);
    }
}
