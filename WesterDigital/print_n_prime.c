/**************************************************************************************************
 * Program to print n prime numbers from given prime number                                       *
 * 1. create a script which should accept command line arg as starting prime number and number of *
 *    next prime numbers to print                                                                 *
 *                                                                                                *
 * Author: Kishor H. Bhoite date: 22nd June 2019                                                  *
 **************************************************************************************************/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

typedef enum {False = 0, True = 1} bool;

bool check_prime(int num);
void print_n_prime_number(int seed, int count);

int main(int argc,char* argv[])
{
    if(argc < 3)
    {
        printf("Invalied input args\n");
        return 0;
    }
    else 
    {
        int seed = atoi(argv[1]);
        int count = atoi(argv[2]);
        print_n_prime_number(seed, count);
    }
    return 0;
}

bool check_prime(int num)
{
    if (num <= 1)
        return False;
    
    for (int i=2; i<= sqrt(num); i++)
    {
        if(num%i==0)
            return False;
    }
    return True;
}

void print_n_prime_number(int seed, int count)
{
    while(count)
    {
        if(check_prime(seed))
        {
            printf("%d\t",seed);
            count--;
        }
        seed++;
    }
    return;
}