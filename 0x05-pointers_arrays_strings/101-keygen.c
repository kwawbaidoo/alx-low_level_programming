#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *
 */
int main(void)
{
	int num = 0;

	srand(time(NULL));
	num = rand();
	printf("%u\n", num);
	return (0);
}
