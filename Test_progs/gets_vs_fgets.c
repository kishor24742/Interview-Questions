/******************************************************************************
***  Program to demonstrate gets(str) vs fget(str,size,stdin or fp)  ***
*******************************************************************************/
#include <stdio.h> 
#include <string.h>
#define SIZE_OF_BUFF 10 

int main()
{ 
    char str[SIZE_OF_BUFF]; 
   
    //gets(str);  //dangerous should not be used, can cause out_of_bound err
    fgets(str, SIZE_OF_BUFF, stdin);
    
    printf("You entered: %s\n", str);
    int i=strlen(str);
    printf("length: %d\n", i);
    
    return 0; 
} 