/*******************************************************
* Program to Count substring occurence in given string *
*******************************************************/
#include <stdio.h>
#include <string.h>

int substr_count(char *src_str, char *sub_str)
{
    int src_len= strlen(src_str);
    int sub_len= strlen(sub_str);
    printf("%d, %d\n", src_len, sub_len);
    int i, j, count=0, count1=0;
    
    for (i=0; i<src_len; )
    {
        j=0;
        count=0;
        while(src_str[i]==sub_str[j])
        {
            count++;
            i++;
            j++;
        }
        if(count==sub_len)
        {
            count1++;
            count=0;
        }
        else
            i++;
    }
    
    return count1;
}
int main()
{
    printf("Hello World\n");
    
    char *src="This is test prog";
    char *sub="s";
    // Test condition for lshft arr by n
    
    int n=substr_count(src, sub);
    
    printf("substring count: %d\n", n);
    return 0;
}
