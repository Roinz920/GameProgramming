#include "random.h"

int ReturnRandomValue(int reversePercent)
{
	srand(time(NULL));

	return (rand() % 100) + 1;
	
}
