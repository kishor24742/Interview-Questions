#include<stdio.h>
#include<string.h>

void strrevv(char str[])
{
    char temp;
    int len=strlen(str);
    for(int i=0;i<(len/2);i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
    return;
}

int main()
{
    char str[100];
    printf("Enter string to be reversed\n");
    scanf("%s",str);
    strrevv(str);
    printf("after reversed: %s",str);
    return 0;
}