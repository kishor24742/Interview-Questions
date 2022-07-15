/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <limits.h>

void swap(int *num1, int*num2)
{
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
    return;
}

int _3rd_largest(int arr[], int len)
{
    int fL, sL, tL, temp;
    fL=sL=tL=INT_MIN;
    for(int i=0; i<len; i++)
    {
        temp=arr[i];
        if(temp>tL)
            swap(&temp, &tL);
        if(tL>sL)
            swap(&tL, &sL);
        if(sL>fL)
            swap(&sL, &fL);
    }
    
    return tL;
}

int main()
{
    int arr[]={4,3,2,8,12,11,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("3rd largest in arr: %d\n",_3rd_largest(arr, size));

    return 0;
}
