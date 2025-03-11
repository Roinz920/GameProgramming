#include "title.h"

extern bool GameOver;

void Intro()
{
	SetCursorPosition(14, 4);
	printf("┌───────────────────┐ ");
	SetCursorPosition(14, 5);
	printf("│  동체시력  테스트 │ ");
	SetCursorPosition(14, 6);
	printf("└───────────────────┘ ");
}

void TitleSelect()
{
	while (true)
	{
		int TitleMenuSelct;
		SetCursorPosition(19, 18);
		printf("1. 게임시작");
		SetCursorPosition(19, 19);
		printf("2. 게임종료");

		SetCursorPosition(25, 21);
		scanf_s("%d", &TitleMenuSelct);
		while (getchar() != '\n');

		if (TitleMenuSelct == 1)
		{
			GameDescription();
			SelectDifficulty();
			break;
		}
		else if (TitleMenuSelct == 2)
		{
			GameOver = true;
			break;
		}
		else
		{
			printf("잘못된 선택입니다.");
		}
	}
	
}

