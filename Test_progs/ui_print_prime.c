#include<stdio.h>

typedef enum {false, true} bool;

bool isPrime(int num)
{
    if (num<=1)
        return false;
    
    for (int i=2; i<(num/2);i++)
    {
        if (num%i==0)
            return false;
    }
    return true;
}

void print_n_prime_series(int seed, int count)
{
    while(count)
    {
        if(isPrime(seed))
        {
            printf("%d\t",seed);
            count--;
        }
        seed++;
    }
}
int main()
{
    int seed, count;
    printf("Enter prime num and count\n");
    scanf("%d%d",&seed,&count);
    print_n_prime_series(seed,count);
    return 0;
}