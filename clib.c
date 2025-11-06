#include <stdio.h>

const int strlen(const char *str)
{
  int length = 0;
  while(*(str+length) != '\0')
      length++;
  return length;
}

const char *strdup(const char *str)
{
  int str_len = 0;
  char *str_dup = (char *)malloc(sizeof(char));
  while( *(str+str_len) != '\0' )
  {
    *(str_dup+(str_len*sizeof(char))) = *(str_len*sizeof(char));
    str_len++;
    *(str_dup+(str_len*sizeof(char))) = '\0';
  }
   return str_dup;
}
