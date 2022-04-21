#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *
 */
int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%s\n", num);
	return (0);
}
