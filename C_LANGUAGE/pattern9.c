/*

display all alphabets 
     A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z 

*/
#include <stdio.h>
void main()
{ 
    int row; // for loop purpose 
    int num = 65;
    
    for(row = 1 ;row <= 26;row ++)
    {
        printf(" %c ",num);
        num ++;
    }
    
}