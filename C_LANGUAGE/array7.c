/*

There are mainly 2 types of array 

1) single dimensional array :

        1D Array 

    [] 

2) Multi dimensional array : 

        2D array , 3D array 

        [][]  , [][][] 

*/

#include<stdio.h>
int main()
{
    //  array[row][col];
    
    int a[2][3]  = {
            {10,20,30},
            {40,50,60}
        
    };
    
    printf("\n %d ",a[0][0]);
    printf("\n %d ",a[1][2]);
    return 0;
}