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

/* strlen(str0) > strlen(str1) */
const int strcontains(const char *str0, const char*str1)
{
	int i = 0;
	int j = 0;
	while((*(str0+(i+j)) == (*(str1+j)))
	{
		j++;
		if(j == strlen(str1))
			return 0;
		if(*(str0+(i+j)) != '\0')
			return 1;
		if(*(str1+j) == '\0')
		{
			j = 0;
			i++;
		}
	}
}

const int strcmp(const char *str0, const char * str1)
{
	if(strlen(str0) != strlen(str1))
		return 1;
	int i = 0;
	while(((*(str0+i)) == (*(str1+i))) & (*(str0+i) != '\0'))
	{
		i++;
		if(i == strlen(str1))
			return 0;
	}
}


  





































