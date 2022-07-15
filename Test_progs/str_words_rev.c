/******************************************************************************
***  Program to reverse a string and its words  ***
*******************************************************************************/
#include <stdio.h>

void rev_str(char *start, char *end)
{
    char temp;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    return;
}

void rev_words(char *s)
{
    char *temp=s;
    char *word_start=s;
    
    while(*temp)
    {
        temp++;
        if(*temp=='\0')
        {
            rev_str(word_start, temp-1);
        }
        else if(*temp==' ')
        {
            rev_str(word_start, temp-1);
            word_start=temp+1;
        }
    }
}

int main()
{
	char s[] = "i love India";
	printf("Before: %s\n", s);
	int len;
	for(len=0; s[len]!='\0';len++);
	printf("len: %d\n", len);
	rev_str(s,s+(len-1));
	printf("After str rev: %s\n", s);
	char * temp=s;
	rev_words(temp);
	printf("After word rev: %s\n", s);
	return 0;
}

