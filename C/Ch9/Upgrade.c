#include "Upgrade.h"

/*
* 업그레이드 시스템
* 무기의 레벨과 레벨에 따른 공격력 증가
* 레벨, 공격력 정보가 저장되어야 함 → 전역 변수로 선언 (C++ 다른방식으로 저장 됨, C언어에서도 다른방식으로 선언)
*/

int weaponLevel = 1;
int weaponRefineLevel = 0;
int BaseAttackPower = 30;
int WeaponLevelPower = 0;
int WeaponRefinePower = 0;
int currentAttackPower = 0;

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int refineCost = 50;

	while (true)
	{
		system("cls");

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
			if (UseMoney(refineCost))
			{
				WeaponRefineUpragde();
			}
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
		
		WaitingInputAnyKey();
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