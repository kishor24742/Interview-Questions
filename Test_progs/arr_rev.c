#include<stdio.h>
#include<string.h>

void arrRevv(int arr[], int start, int end)
{
    int temp;
    
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    return;
}

void printArr(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0]);
    printf("Before, size=%d\n",end);
    printArr(arr,end);
    arrRevv(arr,2,5);
    printf("\nafter reversed\n");
    printArr(arr,end);
    return 0;
}