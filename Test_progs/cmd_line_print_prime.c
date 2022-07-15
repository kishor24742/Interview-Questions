#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef enum {false, true} bool;

bool isPrime(int num)
{
    if (num<=1)
        return false;
    
    for (int i=2; i<sqrt(num);i++)
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
int main(int argc, char* argv[])
{
    if (argc < 3)
        printf("please provide correct input\n");
    else
    {
        print_n_prime_series(atoi(argv[1]),atoi(argv[2]));
    }
    
    return 0;
}