/*

* * * * * 
* * * * * 
* * $ * * 
* * * * * 
* * * * * 

*/
#include <stdio.h>
void main()
{
    int row; // variable declaration for row 
    int col; // variable declaration for column 
    
    for(row = 1;row <= 5;row++)
    {
        for(col = 1;col <= 5;col++)
        {
            if (row == 3 && col == 3)
            {
                printf(" $ ");
            }
            else 
            {
                printf(" * ");
            }
        }
        printf("\n");  // so, it will add new line after each new row 
    }
}