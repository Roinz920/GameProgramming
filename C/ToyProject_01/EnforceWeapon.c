#include <stdio.h>
#include "EnforceWeapon.h"

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


void ShowMenu()
{
	
	int normalCost = 100;
	int refineCost = 50;

	while (true)
	{
		

		printf("\n���׷��̵� �޴��� ������\n");

		printf("������������������������������\n�� 1. ��ȭ�Ѵ�.��\n������������������������������\n");
		printf("������������������������������\n�� 2. �����Ѵ�.��\n������������������������������\n");
		printf("������������������������������\n�� 3. ����Ѵ�.��\n������������������������������\n");

		int inputNo = -1;
		scanf_s("%d", &inputNo);
		while (getchar() != '\n');

		if (inputNo == 1)
		{
			if (UseMoney(normalCost))
			{
				WeaponLevelUpgrade();
			}
		}
		else if (inputNo == 2)
		{
			WeaponCurrenStat();
		}
		else if (inputNo == 3)
		{
			printf("��ȭ�� ����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� �Է°��Դϴ�.\n");
		}

		//������ Ŭ���� ���� Ȯ��
		if (IsGameClear())
		{
			printf("���� Ŭ����!\n");
		}
		else
		{
			printf("��ǥ���� �̴޼�\n");
		}

		WaitingInputAnyKey();
		system("cls");
	}
}

void WeaponLevelUpgrade()
{
	printf("���⸦ ��ȭ�մϴ�.\n");

	int weight = 10;

	weaponLevel = weaponLevel + 1;
	WeaponLevelPower = weight * weaponLevel;
	currentAttackPower = BaseAttackPower + WeaponLevelPower + WeaponRefinePower;
	WeaponCurrenStat();
}

void WeaponRefineUpragde()
{
	printf("������ �����մϴ�.\n");
	int weight = 8;

	weaponRefineLevel = weaponRefineLevel + 1;
	WeaponRefinePower = weight * weaponRefineLevel;
	currentAttackPower = BaseAttackPower + WeaponLevelPower + WeaponRefinePower;
	WeaponCurrenStat();
}

void WeaponCurrenStat()
{
	printf("\n���� ���� ����[+����] : %d [+ %d]\n", weaponLevel, weaponRefineLevel);
	printf("���� ���� �� ���ݷ� : %d [ %d + %d + %d ]\n", currentAttackPower, BaseAttackPower, WeaponLevelPower, WeaponRefinePower);
}

bool IsGameClear()
{
	// ���� ���� ���� == �ִ뷹�� �� ��� 
	// �� ���� ������ A ? B : C;
	// A ���ǽ��� true�̸� B��ȯ, False�̸� C ��ȯ
	return weaponLevel == TargetLevel ? true : false ;
}

void WaitingInputAnyKey()
{
	printf("�����Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");
	_getch();
}