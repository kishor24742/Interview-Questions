/************************************************************************
 * Program to check if system is Little or Big Endian with given number *
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    if(argc<2)
        printf("Invalid input\n");
        
    int i= atoi(argv[1]);   //4bytes
    
    char *cptr = (char *)&i; 
    int mask = i & 0xff;    //1byte
    
    if(*cptr == mask)
        printf("Little Endian\n");
    else
        printf("Big Endian\n");
    return 0;
}