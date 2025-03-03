#include "Play.h"

//강화 게임에 필요한 전역 변수들
int weaponLevel = 10;
int TargetLevel = 10;
int weaponRefineLevel = 0;
int BaseAttackPower = 30;
int WeaponLevelPower = 0;
int WeaponRefinePower = 0;
int currentAttackPower = 0;
bool IsClear = false;
bool IsFail = false;

void ShowTitle()
{
	printf("게임이 실행 중입니다.\n");
	printf("====================================================\n");
	printf("====================================================\n");
	printf("====================================================\n");

	printf("                   무기 강화하기                   \n\n");
}

void ShowManual()
{
	// 1. 조작법
	 printf("키보드 임력 중 엔터키를 눌러 선택.\n");
	 printf("입력 조건 이외의 키를 입력할 시에 재선택이 필요합니다.\n\n");
	// 2. 게임 목표
	 printf("무기 10강 만들기\n\n");
	// 3. 방해 요소
	 printf("1. 제한된 소지금으로 목표를 달성해야합니다.\n");
	 printf("2. 특정 무기 레벨에서 강화 하락이 존재합니다.\n");
	 printf("3. 특정 레벨에서 무기가 파괴됩니다.\n\n");
}

void GameLogic()
{
	while (1)
	{


		//메뉴 선택 화면
		ShowMenu(); // EnforceWeapon.h에 있는 함수

		//게임을 클리어했거나, 게임오버 되었을 경우
		if (IsClear || IsFail)
		{
			break;
		}

	}
	
	if (IsClear)
	{
		printf("GAME CLEAR!\n");
		_getch();
		
	}
	
	if (IsFail)
	{
		printf("GAME OVER...\n");
		_getch();
	}

}

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();

}


