#pragma once

#include <stdio.h>
#include <stdbool.h>

// extern : �ܺο� CurrentMoney��� �̸��� ���� ������ ������ �װ��� ����϶�.
extern int CurrentMoney; 

bool IsEnoughMoeny(int amount);

bool UseMoney(int price);