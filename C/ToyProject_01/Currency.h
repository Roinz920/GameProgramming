#pragma once

#include <stdio.h>
#include <stdbool.h>
#include "play.h"


extern int CurrentMoney;
extern int NormalCost;
extern bool IsFail;


bool IsEnoughMoeny(int amount); // Ctrl + R 2�� = ��� �Լ� �̸� ��� �ٲٱ�

bool UseMoney(int price);