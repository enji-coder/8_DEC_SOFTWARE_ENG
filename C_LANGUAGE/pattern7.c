/*

1
2 3
4 5 6
7 8 9 10

*/
#include <stdio.h>
void main()
{
    int row; // variable declaration for row 
    int col; // variable declaration for column 
    int num = 1;
    
    for(row = 1;row<=4;row++)
    {
        for(col = 1;col<=row;col ++)
        {
            printf(" %d ",num);
            num++;
        }
        printf("\n");
    }
}