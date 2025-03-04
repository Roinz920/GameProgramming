#include <stdio.h>
#include "EnforceWeapon.h"





void ShowMenu()
{
	
	int normalCost = 100;
	
	while (true)
	{
		

		printf("\n업그레이드 메뉴\n");

		printf("┌────────────────────┐\n│ 1. 무기를 강화한다.│\n└────────────────────┘\n");
		printf("┌────────────────────┐\n│ 2. 상태를 확인한다.│\n└────────────────────┘\n");
		printf("┌────────────────────┐\n│ 3. 강화를 취소한다.│\n└────────────────────┘\n");

		int inputNo = -1;
		scanf_s("%d", &inputNo);
		while (getchar() != '\n');

		if (inputNo == 1)
		{
			
			if (UseMoney(normalCost))
			{
				if (CheckRandomFunc(50)) // 50% 성공
				{
					printf("성공했습니다.\n");
					WeaponLevelUpgrade();
				}
				else
				{
					printf("실패했습니다.\n");
				}
			}
		}
		else if (inputNo == 2)
		{
			WeaponCurrenStat();
		}
		else if (inputNo == 3)
		{
			printf("강화를 취소합니다.\n");
			break;
		}
		else
		{
			printf("잘못된 입력값입니다.\n");
		}

		//게임의 클리어 여부 확인
		if (IsGameClear())
		{
			printf("\n게임 클리어!\n");
			IsClear = true;
		}
		else
		{
			printf("\n목표레벨 미달성\n");
		}

		WaitingInputAnyKey();
		system("cls");
	}
}

void WeaponLevelUpgrade()
{
	printf("무기를 강화합니다.\n");

	int weight = 10;

	weaponLevel = weaponLevel + 1;
	WeaponLevelPower = weight * weaponLevel;
	currentAttackPower = BaseAttackPower + WeaponLevelPower;
	WeaponCurrenStat();
}

void WeaponCurrenStat()
{
	printf("\n현재 무기 레벨 : %d [+ %d]\n", weaponLevel, WeaponLevelPower);
	printf("현재 무기 총 공격력 : %d [ %d + %d ]\n", currentAttackPower, BaseAttackPower, WeaponLevelPower);
}

bool IsGameClear()
{
	// 현재 무기 레벨 == 최대레벨 일 경우 
	// → 삼항 연산자 A ? B : C;
	// A 조건식이 true이면 B반환, False이면 C 반환
	return weaponLevel >= TargetLevel ? true : false ;
}

void WaitingInputAnyKey()
{
	printf("진행하려면 아무 키를 입력해주세요.\n");
	_getch();
}