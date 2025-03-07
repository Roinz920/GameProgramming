#include "random.h"

void CreateRandomSeed()
{
	srand(time(NULL)*100*clock());
}

int ReturnPositionX()
{
	// 0 ~ 40 
	//랜덤한 숫자를 생성해서 짝수로 반환해야함
	// 방식 1) 랜덤한 숫자를 생성 → rand() A범위 B범위 → 판별하여 보정
	// 방식 2) 1~20의 숫자를 생성 → x2를 하여 반환

	int randvalue = rand() % 40 + 1; // 1~40
	return randvalue %2 == 0 ? randvalue : randvalue +1;

	/*
	in randvalue = rand() %20 + 1;
	return (randvalue * 2);
	*/
}

int ReturnPositionY()
{
	int randvalue = rand() % 20 + 1;
	return randvalue;
}
