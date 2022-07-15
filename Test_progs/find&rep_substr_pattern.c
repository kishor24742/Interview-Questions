/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

String: abcdefg
pattern: cd  -> xy
output: abxyefg

*******************************************************************************/
#include <stdio.h>

void str_replace(char str[], char patt[])
{
    int patt_len=0;
    while(patt[patt_len]!='\0'){patt_len++;}
    //printf("lengths, pattern:%d\n", patt_len);
    int i=0;
    for(int i=0; i<patt_len; i++)
    {
        str[i]=patt[i];
    }
    return;
}

void pattern_replace(char str[], char sub_str[], char patt[])
{
    int str_len=0, sub_str_len=0;
    while(str[str_len]!='\0'){str_len++;}
    while(sub_str[sub_str_len]!='\0'){sub_str_len++;}
    //printf("lengths, str:%d, sub_str:%d\n", str_len, sub_str_len);
    int i=0, j=0, k=0;
    while(i<str_len)
    {
        //printf("outer loop iterator: %d\n",i);
        j=0;
        while(j<sub_str_len)
        {
            //printf(" strchar: %c, substrchar: %c\n", str[i], sub_str[j]);
            if(str[i]==sub_str[j])
            {
                i++;
                j++;
            }
            else
            {
                //printf("pattern not found\n");
                break;
            }
        }
        //printf("inner counter, i: %d, j: %d\n",i,j);
        if((j != 0) && (j==sub_str_len))
        {
            //printf("updating str with pattern");
            str_replace(&str[i-j], patt);
            i--;
        }
        i++;
    }
}

int main()
{
    char str[20];
    char sub_str[5];
    char patt[5];
    printf("Enter String ,sub string and pattern\n");
    scanf("%s %s %s", str, sub_str, patt);
    
    printf("Before: %s\n", str);
    pattern_replace(str, sub_str, patt);
    printf("After: %s\n", str);

    return 0;
}
