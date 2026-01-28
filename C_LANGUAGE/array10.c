/*

ascending array : 

or 

sorting array : 

e.g.   a[5] = [7,6,9,2,8]

small to big 
                |
                V 
        a[5] = [6,7,9,2,8]      
------> 

0th position  >   1st position 

    if(a[0] > a[1])
    {
        temp = a[0]
        a[0] = a[1]
        a[1] = temp
    }
*/

#include<stdio.h>
int main()
{
    int a[5] = {23,4,7,2,9}; 
    int i,j,temp;
    
    for(i = 0;i< 5;i++)
    {
        for(j = i+1;j< 5;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    for(i = 0;i<5;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}