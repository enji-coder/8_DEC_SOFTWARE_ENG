// find factorial value 
#include <stdio.h>
int findFactorial(int num)
{
    int f= 1,i;
    for(i = 1;i<=num;i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    int number;
    int result;
    printf("Enter a number which you want to find factorial :: ");
    scanf("%d",&number);
    
    result = findFactorial(number);
    printf("\n result = %d",result);
}