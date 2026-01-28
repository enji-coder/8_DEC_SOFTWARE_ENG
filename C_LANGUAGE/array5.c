#include<stdio.h>
void main()
{
    // accept 5 numbers from users and perform addition operation using of array 
    
    int a[5]; // which is contain array values here,
    int i;  // for loop iteration 
    int sum=0; // for sum value 
    
    for(i = 0;i< 5;i++)
    {
        printf("\n Enter element %d :",i+1);
        scanf("%d",&a[i]);
        sum += a[i];
    }
    
    printf("\n result = %d ",sum);
}