#include "GameIntro.h"


void IntroMenu()
{
	while (1)
	{
		// 유저가 볼 수 있는 UI 텍스트
		printf("1. 게임시작\n");
		printf("2. 게임종료\n");

		//로직
		//입력을 통해 실행하는 방식
		//변수의 값을 비교하여 실행 함
		int InputNumber = -1;
		scanf_s("%d", &InputNumber);
		while (getchar() != '\n');

		//비교 연산자 '=='를 사용하여 조건문 사용

		if (InputNumber == 1)
		{
			GameLoop();
			//게임 시작
		}
		else if (InputNumber == 2)
		{
			break;
			//게임 종료
		}
		else
			printf("잘못된 입력입니다.\n");
			//잘못 된 값 

	}
}
