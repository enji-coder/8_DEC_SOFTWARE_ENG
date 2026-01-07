/*

* 
* * 
* * * 
* * * * 
* * * * * 

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
            printf(" * ");
        }
        printf("\n");
    }
}