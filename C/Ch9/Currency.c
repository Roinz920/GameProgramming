#include "Currency.h"


bool IsEnoughMoeny(int amount)
{
	return ((CurrentMoney >= amount) ? true : false);
}

bool UseMoney(int price)
{
	if (IsEnoughMoeny(price))
	{
		//printf("����մϴ�.\n");
		CurrentMoney = CurrentMoney - price;
		printf("�����ݿ��� %d�� ����մϴ�.\n", price);
		printf("���� ������ : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		printf("�������� �����մϴ�.\n");
		return false;
	}
}