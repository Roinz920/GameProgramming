#include <stdio.h>
#include "EnforceWeapon.h"

bool IsEnoughMoeny(int amount)
{
	return ((CurrentMoney >= amount) ? true : false);
}

bool UseMoney(int price)
{
	if (IsEnoughMoeny(price))
	{
		//printf("충분합니다.\n");
		CurrentMoney = CurrentMoney - price;
		printf("소지금에서 %d을 사용합니다.\n", price);
		printf("현재 소지금 : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		printf("소지금이 부족합니다.\n");
		return false;
	}
}


void ShowMenu()
{
	
	int normalCost = 100;
	int refineCost = 50;

	while (true)
	{
		

		printf("\n업그레이드 메뉴를 보여줘\n");

		printf("┌─────────────┐\n│ 1. 강화한다.│\n└─────────────┘\n");
		printf("┌─────────────┐\n│ 2. 제련한다.│\n└─────────────┘\n");
		printf("┌─────────────┐\n│ 3. 취소한다.│\n└─────────────┘\n");

		int inputNo = -1;
		scanf_s("%d", &inputNo);
		while (getchar() != '\n');

		if (inputNo == 1)
		{
			if (UseMoney(normalCost))
			{
				WeaponLevelUpgrade();
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
			printf("게임 클리어!\n");
		}
		else
		{
			printf("목표레벨 미달성\n");
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
	currentAttackPower = BaseAttackPower + WeaponLevelPower + WeaponRefinePower;
	WeaponCurrenStat();
}

void WeaponRefineUpragde()
{
	printf("제련을 진행합니다.\n");
	int weight = 8;

	weaponRefineLevel = weaponRefineLevel + 1;
	WeaponRefinePower = weight * weaponRefineLevel;
	currentAttackPower = BaseAttackPower + WeaponLevelPower + WeaponRefinePower;
	WeaponCurrenStat();
}

void WeaponCurrenStat()
{
	printf("\n현재 무기 레벨[+제련] : %d [+ %d]\n", weaponLevel, weaponRefineLevel);
	printf("현재 무기 총 공격력 : %d [ %d + %d + %d ]\n", currentAttackPower, BaseAttackPower, WeaponLevelPower, WeaponRefinePower);
}

bool IsGameClear()
{
	// 현재 무기 레벨 == 최대레벨 일 경우 
	// → 삼항 연산자 A ? B : C;
	// A 조건식이 true이면 B반환, False이면 C 반환
	return weaponLevel == TargetLevel ? true : false ;
}

void WaitingInputAnyKey()
{
	printf("진행하려면 아무 키를 입력해주세요.\n");
	_getch();
}