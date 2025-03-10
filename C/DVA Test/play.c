#include "play.h"

int StartDifficulty = 0;
int CurrentDifficulty = 0;
int ResultDifficulty=0;
int CurrentHP=0;
int MaxHP=0;

void SelectDifficulty()
{
	while (true)
	{
		system("cls");
		printf("\n[ 시작 난이도 선택 ]\n\n");
		printf("1. 쉬  움\n");
		printf("2. 보  통\n");
		printf("3. 어려움\n");

		scanf_s("%d", &StartDifficulty);
		while (getchar() != '\n');

		CurrentDifficulty = StartDifficulty;

		switch (CurrentDifficulty)
		{
		case 1: MaxHP = 20; printf("선택 된 난이도 : %s\n", "쉬  움");  break;
		case 2: MaxHP = 10; printf("선택 된 난이도 : %s\n", "보  통"); break;
		case 3: MaxHP = 5;	printf("선택 된 난이도 : %s\n", "어려움"); break;
		case 4: printf("다시 선택해주세요\n"); 
		}
		CurrentHP = MaxHP;
		printf("체력 : %d / %d\n", CurrentHP, MaxHP);

		if (CurrentDifficulty == 1 || CurrentDifficulty == 2 || CurrentDifficulty == 3)
		{
			break;
		}
		
	}
}

void GameReady()
{
	int GameReadyLoad;

	printf("게임을 시작하시겠습니까?\n");
	printf(" 1.시작\n 2.난이도 재선택\n 3.게임 종료\n");
	scanf_s("%d", &GameReadyLoad);
	while (getchar() != '\n');

	if (GameReadyLoad == 1)
	{
		MainGame();
	}
	else if (GameReadyLoad == 2)
	{
		SelectDifficulty();
	}
	else if (GameReadyLoad == 3)
	{
		return;
	}
	else
	{
		printf("다시 선택해주세요\n");
	}
}

void MainGame()
{
	printf("게임 로딩 중...\n");
}
