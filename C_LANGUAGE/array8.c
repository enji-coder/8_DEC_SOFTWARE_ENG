#include<stdio.h>
int main()
{
    //  array[row][col];
    
    int a[2][3]  = {
            {10,20,30},
            {40,50,60}
        
    };
    int row,col;
    
    for(row = 0;row < 2;row++)
    {
        for(col = 0;col < 3;col++)
        {
            printf(" %d ",a[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}