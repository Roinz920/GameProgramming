#include "title.h"

void Intro()
{
	printf("┌─────────────────┐\n│ 동체시력 테스트 │\n└─────────────────┘\n\n");
}

void TitleSelect()
{
	while (true)
	{
		int TitleMenuSelct;

		printf("1. 게임시작\n");
		printf("2. 게임종료\n");

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
			break;
		}
		else
		{
			printf("잘못된 선택입니다.");
		}
	}
}

