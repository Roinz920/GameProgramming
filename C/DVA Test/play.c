#include "play.h"

int StartDifficulty = 0;
int CurrentDifficulty = 0;
int ResultDifficulty = 0;
int CurrentHP = 0;
int MaxHP = 0;
int CurrentScore = 0;
bool GameReadySet = false;
int ArrowSleepTime;
extern int ArrowRandomSeed;
extern bool GameOver;

void SelectDifficulty()
{
	while (true)
	{
		SetCursorPosition(18, 14);
		printf("\n[ 시작 난이도 선택 ]\n\n");
		printf("     1. 쉬  움\n");
		printf("     2. 보  통\n");
		printf("     3. 어려움\n");

		SetCursorPosition(10, 20);
		scanf_s("%d", &StartDifficulty);
		while (getchar() != '\n');

		CurrentDifficulty = StartDifficulty;

		switch (CurrentDifficulty)
		{
		case 1: MaxHP = 20; ArrowSleepTime = 4000; SetCursorPosition(30, 17); printf("선택 된 난이도 :"); SetCursorPosition(30, 18); printf("%s\n", "쉬  움");  break;
		case 2: MaxHP = 10; ArrowSleepTime = 2000; SetCursorPosition(30, 17); printf("선택 된 난이도 :"); SetCursorPosition(30, 18); printf("%s\n", "보  통");  break;
		case 3: MaxHP = 5;	ArrowSleepTime = 1000; SetCursorPosition(30, 17); printf("선택 된 난이도 :"); SetCursorPosition(30, 18); printf("%s\n", "어려움");  break;
		default: printf("다시 선택해주세요\n");
		}
		CurrentHP = MaxHP;
		//printf("체력 : %d / %d\n", CurrentHP, MaxHP);

		if (CurrentDifficulty == 1 || CurrentDifficulty == 2 || CurrentDifficulty == 3)
		{
			break;
		}

	}
}

void GameReady()
{
	int GameReadyLoad;
	SetCursorPosition(12, 21);
	printf("게임을 시작하시겠습니까?");
	SetCursorPosition(12, 22);
	printf(" 1.시작   2.타이틀 화면");
	SetCursorPosition(24, 23);

	while (true)
	{
		scanf_s("%d", &GameReadyLoad);
		while (getchar() != '\n');

		if (GameReadyLoad == 1)
		{
			GameReadySet = true;
			break;
		}
		else if (GameReadyLoad == 2)
		{
			GameReadySet = false;
			break;
		}
		else
		{
			printf("다시 선택해주세요\n");
		}
	}

}

void InputDelay()
{
	Sleep(ArrowSleepTime / 5);
}
void GameOverCheck()
{
	if (CurrentHP <= 1)
	{
		GameOver = true;
	}
}

void MainGame()
{
	DirectionBorder();
	StarCount();
	while (true)
	{
		InGameDisplay();
		DirectionArrow();
		if (_kbhit())
		{
			if (ArrowRandomSeed == 1)
			{
				if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
				{
					CurrentScore += 1;
					InputDelay();
				}
				else
				{
					CurrentHP -= 1;
					InputDelay();
				}
			}
			else if (ArrowRandomSeed == 2)
			{
				if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 우
				{
					CurrentScore += 1;
					InputDelay();
				}
				else
				{
					CurrentHP -= 1;
					InputDelay();
				}
			}
			else if (ArrowRandomSeed == 3)
			{
				if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
				{
					CurrentScore += 1;
					InputDelay();
				}
				else
				{
					CurrentHP -= 1;
					InputDelay();
				}
			}
			else if (ArrowRandomSeed == 4)
			{
				if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 좌
				{
					CurrentScore += 1;
					InputDelay();
				}
				else
				{
					CurrentHP -= 1;
					InputDelay();
				}
			}
			else
			{
				CurrentHP -= 1;
				InputDelay();
			}
		}
	}
}