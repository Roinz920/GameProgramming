#include "random.h"

void CreateRandomSeed()
{
	srand(time(NULL)*100*clock());
}

int ReturnPositionX()
{
	// 0 ~ 40 
	//������ ���ڸ� �����ؼ� ¦���� ��ȯ�ؾ���
	// ��� 1) ������ ���ڸ� ���� �� rand() A���� B���� �� �Ǻ��Ͽ� ����
	// ��� 2) 1~20�� ���ڸ� ���� �� x2�� �Ͽ� ��ȯ

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
