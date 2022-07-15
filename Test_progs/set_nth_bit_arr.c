/******************************************************************************
* WAP set 100th in given int arr                                              *
*******************************************************************************/
#include <stdio.h>

void set_nth_pos_arr(int *arr, int pos)
{
	int quos, rem;
	quos= pos/(sizeof(int)*8);
	printf("quos: %d\n",quos);
	rem= pos%(sizeof(int)*8);
	printf("rem: %d\n",rem);
	arr[quos]= arr[quos] | (0x01 << rem);
}

void print_arr(int *arr, int size)
{
	for (int i=0; i<size; i++)
	{
		printf("%d\t",arr[i]);
	}
	printf("\n");
}


int main()
{
    int arr[10]={0};
    int sz= sizeof(arr)/sizeof(arr[0]);
    
    print_arr(arr, sz);
    set_nth_pos_arr(arr, 101);
    print_arr(arr, sz);

    return 0;
}
