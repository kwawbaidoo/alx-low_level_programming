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

	srand(time(NULL));
	num = srand();
	printf("%u\n", num);
	return (0);
}
