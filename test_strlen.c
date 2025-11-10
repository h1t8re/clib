#include "clib.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *str = "123456789\0";
	int len_of_str = strlen(str);
	printf("%d is length of %s\n", len_of_str, str);
	return 0;
}