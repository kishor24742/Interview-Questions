#include <stdio.h>
#define MAX_SIZE 100
int rand_nums[MAX_SIZE];
enum {false=0,true} result;

void create_rand_num(int lim)
{
    if(lim>MAX_SIZE)
    {
        printf("Random_number_limit_exceeded\n");
        return;
    }
    else
    {
        for(int i=0; i<lim; i++)
        {
            rand_nums[i]=i+1; // considering min random num is 1
        }
    }
}

void randomize(int lim)
{
    int rand_idx=0,temp;
    for(int i=0; i<lim; i++)
    {
        rand_idx=rand()%lim;
        if(rand_idx != i)
        {
            temp=rand_nums[i];
            rand_nums[i]=rand_nums[rand_idx];
            rand_nums[rand_idx]=temp;
        }
    }
}

void disply_rand_num(int lim)
{
    printf("\n");
    for(int i=0; i<lim; i++)
        {
            printf("%d\t", rand_nums[i]);
        }
}

int get_random_num(int limit)
{
    static int count=0;
    if (count>limit)
    {
        count=0;
    }
    int num;
    return num;
}

int main()
{
    int lim=10;
    create_rand_num(lim);
    disply_rand_num(lim);
    randomize(lim);
    disply_rand_num(lim);
    
    return 0;
}
