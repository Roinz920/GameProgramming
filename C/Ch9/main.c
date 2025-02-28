/*
Date : 2025-02-27
Name : 김정민
Subject : 헤더, 함수, 지역 변수, 전역 변수
*/

/*
* 업그레이드 시스템
* - menu
*/

#include "lecture.h"
#include "Upgrade.h"
#include "main.h"
#include "Currency.h"

int number = 1; // ←main 함수 외부에 있으므로 전역 변수

int CurrentMoney = 1000;

//내가 가진 소지금의 정보 표시

void ShowInfo()
{
	printf("캐릭터의 클래스 : %s\n", "모험가");
	printf("현재 소지금 : %d\n", CurrentMoney);
	WaitingInputAnyKey();
}

void WaitingInputAnyKey()
{
	printf("진행하려면 아무 키를 입력해주세요.\n");
	_getch();
}


int main()
{

	//ShowExample();

	ShowInfo();
	
	ShowUpgradeMenu();


}