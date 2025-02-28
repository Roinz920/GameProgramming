#include "Currency.h"


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