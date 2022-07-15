/************************************************************************
 * Program to check if A is divisible by B without using modulo(%) and  *
 * division(/) operator, if devisible return reminder                   *
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define ERROR -1

int get_rem(int a, int b)
{
    int q=0, r=0;
    if(b == 0)
    {
        printf("devisor is 0, it will lead devide by zero error!\n");
        return -1;
    }
    if(a == 0)
        return -1;
    else
    {
        while(a && (a>=b))
        {
            a = a-b;
            q++;
        }
        r=a;
        printf("quo: %d, rem: %d\n", q, r);
    }
    return r;
}

int main ()
{
    int num, dev, rem;
    printf("Please enter the number and devior\n");
    scanf("%d %d", &num, &dev);
    rem = get_rem(num, dev);
    if (rem == ERROR)
    {
        printf("can not perform division\n");
    }
    else
    {
        printf("%d is divisble by %d with reminder of %d\n", num, dev, rem);
    }
    return 0;
}