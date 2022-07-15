#include <stdio.h>
#include <stdint.h>

uint8_t bit_swap (uint8_t num)
{
    uint8_t final = 0;
    for (int i = 0, j = 7; i < j; i++, j--)
        {
          uint8_t temp1, temp2;
          temp1 = (num>>i)& 0x1;
          //printf("bit1:%x\t",temp1);
          temp2 = (num>>j)& 0x1;
          //printf("bit2:%x\t",temp2);
          //printf("lshft_or:%x\t", ((temp1 << j) | (temp2 << i)));
          final = final | ((temp1 << j) | (temp2 << i));
        }
    //printf("%d\t",final);
    return final;
}

int
main ()
{
    uint8_t num=0x2C;
    printf("before bit swap: %d\n",num);
    printf("after bit swap: %d\n",bit_swap(num));
    return 0;
}