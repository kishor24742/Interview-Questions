
#include <stdio.h>

int main ()
{
  int i;
  char buffer [33];
  printf ("Enter a stringified number: ");
  scanf ("%s",buffer);
  printf ("Entered string: %s\n",buffer);
  
  if(buffer[0] == '0' && buffer[1] == 'x')
    printf("hex\n");
  else if (buffer[0] == '0' && buffer[1] == 'b')
    printf("binary\n");
  else if (buffer[0] == '0' && (buffer[1] >= '1' && buffer[1] <= '8'))
    printf("octal\n");
  else
    printf("decimal\n");
  return 0;
}