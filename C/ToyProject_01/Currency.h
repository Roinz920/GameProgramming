#pragma once

#include <stdio.h>
#include <stdbool.h>
#include "play.h"


extern int CurrentMoney;
extern int NormalCost;
extern bool IsFail;


bool IsEnoughMoeny(int amount); // Ctrl + R 2번 = 모든 함수 이름 모두 바꾸기

bool UseMoney(int price);