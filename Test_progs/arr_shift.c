/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void Lshift_arr(int arr[], int size, int count)
{
    if(size == count)
        return;
    for (int i=0;i<count;i++)
    {
        int temp=arr[0];
        for (int j=1; j<(size); j++)
        {
            arr[j-1]=arr[j];
        }
        arr[size-1]=temp;
    }
}

void Rshift_arr(int arr[], int size, int count)
{
    if(size == count)
        return;
    for (int i=0;i<count;i++)
    {
        int temp=arr[size-1];
        for (int j=size-1; j>0; j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }
}

void print_arr(int arr[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int main()
{
    printf("Hello World\n");
    
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    // Test condition for lshft arr by n
    print_arr(arr, size);
    Lshift_arr(arr, size, 4);
    print_arr(arr, size);
    
    // Test condition for Rshft arr by n
    print_arr(arr, size);
    Rshift_arr(arr, size, 4);
    print_arr(arr, size);
    
    return 0;
}
