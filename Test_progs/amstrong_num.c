/******************************************************************************
***  Program check if num is amstrong number  ***
*******************************************************************************/
#include <stdio.h> 
#include <stdlib.h>

int main(int argc, char* argv[])
{ 
    if (argc<2)
    {
        printf("invlid no. of args\n");
        return 0;
    }
    int num=atoi(argv[1]);
    
    int temp=num, sum=0, rem;
    
    while(temp)
    {
        rem= temp%10;
        sum=sum + (rem * rem * rem);
        temp=temp/10;
    }
    
    if (sum==num)
        printf("%d is Amstrong number\n", num);
    else
        printf("It's NOT Amstrong number\n");
    return 0; 
} 