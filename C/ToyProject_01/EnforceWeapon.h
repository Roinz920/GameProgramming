#pragma once

#include <stdio.h>		// �⺻����� �Լ��� �����ϴ� ���
#include <stdbool.h>	// bool type �߰�
#include <conio.h>		// _getch() �Է� ���� ���� ������Լ��� �����ϴ� ���
#include <Windows.h>	// system("cls") ������ �ܼ� �Լ��� ���ԵǾ��ִ� ���
#include <stdlib.h>		// rand() ��ɾ ����ϱ� ���� ���
#include <time.h>		// time() ��ɾ ����ϱ� ���� ���
#include "Currency.h"
#include "random.h"



void ShowMenu();
void WeaponCurrenStat();

// ������ ���� ����
// ��ǥ�� �޼� �ߴ°�? (Success) or �������� ��� ����ߴ°�? (Fail)

bool IsGameClear(); //������ ������ ��ǥ������ ������ ���

//���� ����
int weaponLevel;
int TargetLevel;
int BaseAttackPower;
int WeaponLevelPower;
int currentAttackPower;

void WeaponLevelUpgrade();

void WaitingInputAnyKey();


// Money �ý��� ���� ��� ����
// ���׷��̵� �ý��� ����

extern int CurrentMoney;
extern int weaponLevel;
extern int TargetLevel;
extern bool IsClear;
extern bool IsFail;

