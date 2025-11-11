#include "clib.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *str0 = "012345\0";
	char *str1 = "6789\0";
	int result = strcmp(str0, str0);
	printf("strcmp(\'%s\', \'%s\') = %d\n", str0, str0, result);
	result = strcmp(str0, str1);
	printf("strcmp(\'%s\', \'%s\') = %d\n", str0, str1, result);
	return 0;
}
