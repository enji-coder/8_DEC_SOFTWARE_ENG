/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
#include <stdio.h>
void main()
{
    int row; // variable declaration for row 
    int col; // variable declaration for column 
    
    for(row = 1;row<=5;row++)
    {
        for(col = 1;col<=row;col ++)
        {
            printf(" %d ",col);
        }
        printf("\n");
    }
}