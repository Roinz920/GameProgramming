#pragma once

#include <stdio.h>		// 기본입출력 함수를 포함하는 헤더
#include <stdbool.h>	// bool type 추가
#include <conio.h>		// _getch() 입력 버퍼 없이 입출력함수를 포함하는 헤더
#include <Windows.h>	// system("cls") 윈도우 콘솔 함수가 포함되어있는 헤더
#include <stdlib.h>		// rand() 명령어를 사용하기 위한 헤더
#include <time.h>		// time() 명령어를 사용하기 위한 헤더
#include "Currency.h"
#include "random.h"



void ShowMenu();
void WeaponCurrenStat();

// 게임의 종료 조건
// 목표를 달성 했는가? (Success) or 소지금을 모두 사용했는가? (Fail)

bool IsGameClear(); //무기의 레벨이 목표레벨과 같아질 경우

//전역 변수
int weaponLevel;
int TargetLevel;
int BaseAttackPower;
int WeaponLevelPower;
int currentAttackPower;

void WeaponLevelUpgrade();

void WaitingInputAnyKey();


// Money 시스템 관련 헤더 구현
// 업그레이드 시스템 구현

extern int CurrentMoney;
extern int weaponLevel;
extern int TargetLevel;
extern bool IsClear;
extern bool IsFail;

