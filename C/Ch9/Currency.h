#pragma once

#include <stdio.h>
#include <stdbool.h>

// extern : 외부에 CurrentMoney라는 이름의 같은 변수가 있으니 그것을 사용하라.
extern int CurrentMoney; 

bool IsEnoughMoeny(int amount);

bool UseMoney(int price);