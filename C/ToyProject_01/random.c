#include "random.h"

int ReturnRandomValue()
{
	srand((unsigned int)time(NULL)*100 + clock());

	return (rand()%100 + 1);
}

bool CheckRandomFunc(int percent)
{
	int randValue = ReturnRandomValue(); // 1~100�������� ��ȯ

	if(randValue <= percent)
	{
		printf("\n <�������� üũ> %d\n", randValue);
		return true;
	}
	else
	{
		printf("\n <�������� üũ> %d\n", randValue);
		return false;
	}
	
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)(time(NULL) * 100 + clock()));

	return (rand() % (max - min + 1) + min);
}
