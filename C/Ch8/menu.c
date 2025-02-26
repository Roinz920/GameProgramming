#include "menu.h"
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int weaponLevel;
int basePower;
int weight;


void SelectMenu()
{
	// Ctrl + K + S : 코드 감싸기 단축키
	while (true)
	{
		system("cls"); // 화면의 내용을 지우라는 코드 (Windows.h 헤더가 필요함)
		printf("┌─────────────┐\n│ 1. 강화한다.│\n└─────────────┘\n");
		printf("┌─────────────┐\n│ 2. 취소한다.│\n└─────────────┘\n");
		printf("┌─────────────┐\n│ 3. 종료한다.│\n└─────────────┘\n");

		int inputNo = -1;
		scanf_s("%d", &inputNo);
		while (getchar() != '\n');
		// char 타입의 문자를 가져오겠다라는 뜻 
		// → scanf에 값을 입력할 때에, 빈칸 입력(\n 즉, 엔터키)이 나오기 전까지 작동함
		// → 이를 방지하기 위하여 getchar를 이용하여 버퍼에 기입된 정보를 휘발시킴

		//Alt + 화살표 위/아래 (↑/↓) : 비주얼 스튜디오 단축키 중 하나. 작업한 코드의 줄 위치 변경
		if (inputNo == 1)
		{
			printf("강화를 진행합니다.\n");

			double succesrate = 70 - (2.5 * weaponLevel);
			double downrate = 1 + (0.2* weaponLevel);
			double failrate = (100 - succesrate - downrate);

			srand(time(NULL)*succesrate);
			double randomNo = (rand() % 100) + 1;

			printf("강화 성공 확률 : %f\n", succesrate);
			printf("강화 실패 확률 : %f\n", failrate);
			printf("강화 하락 확률 : %f\n", downrate);

			printf("랜덤 상수 : %f\n", randomNo);
			printf("[성공 조건 판별 (강화 실패+강화 하락] < 랜덤 상수\n %f < %f  ", (failrate+downrate), randomNo);

				if (randomNo < downrate)
				{
					printf("(대실패) 무기의 레벨이 1 하락하였습니다!\n");

					if (weaponLevel <= 0)
					{
						weaponLevel = 0;
					}
					else
					{
						weaponLevel--;
					}
					// 무기의 공격력 = 기본공격력 + 레벨 * 가중치
					int attackPower = basePower + weaponLevel * weight;
					printf("현재 공격력 : %d  / 레벨 : %d\n", attackPower, weaponLevel);
				}
				else if (randomNo > downrate && randomNo < (100 - succesrate))
				{
					printf("(실패) 강화에 실패하였습니다!\n");
					int attackPower = basePower + weaponLevel * weight;
					printf("현재 공격력 : %d  / 레벨 : %d\n", attackPower, weaponLevel);
				}
				else
				{
					printf("(성공) 무기의 레벨이 1 상승하였습니다!\n");
					weaponLevel++;
					int attackPower = basePower + weaponLevel * weight;
					printf("현재 공격력 : %d  / 레벨 : %d\n", attackPower, weaponLevel);

				}
		}
		else if (inputNo == 2)
		{
			printf("강화를 취소합니다.\n");
		}
		else if (inputNo == 3)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("잘못된 입력값입니다.\n");
		}

		// 플레이어가 특정 키를 입력했을 때에 다음 코드로 넘어가도록 하고 싶다.
		// 키보드의 문자값을 가져올 수 있게 해주는 함수를 사용 (conio.h 헤더가 필요함)

		printf("진행을 위해 아무 키나 입력해주세요.");
		_getch(); //입력 값을 받아오는 명령어



	}
}
