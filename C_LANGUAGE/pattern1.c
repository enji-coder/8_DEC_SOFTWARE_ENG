/*
1 # # # 
2 # # # 
3 # # # 
4 # # # 
5 # # # 
*/
#include <stdio.h>
void main()
{
    int row; // variable declaration 
    int col; // variable declaration
    for(row = 1;row <= 5;row++)  // row 1 -  5 
    {
        printf("\n %d ",row);
        for(col = 1;col <= 3;col ++ )
        {
            printf(" # ");
        }
    }
}