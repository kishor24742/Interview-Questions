/******************************************************************************
***  Program to calculate no. of bit flips required to make Num1 as Num2    ***
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>	// For atoi()

int main(int argc, char *argv[])
{
    
    int num1=atoi(argv[1]);
    int num2=atoi(argv[2]);
    int count=0, t1, t2;
    
    while(num1>0 || num2>0)
    {
        t1=(num1 & 0x1);
        t2=(num2 & 0x1);
        
        if((t1 ^ t2)==1)
            count++;
        
        num1=(num1>>1);
        num2=(num2>>1);
    }
    
    printf("No of bit flips required :%d", count);

    return 0;
}
