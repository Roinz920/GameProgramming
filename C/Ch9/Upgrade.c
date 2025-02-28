#include "Upgrade.h"

/*
* ���׷��̵� �ý���
* ������ ������ ������ ���� ���ݷ� ����
* ����, ���ݷ� ������ ����Ǿ�� �� �� ���� ������ ���� (C++ �ٸ�������� ���� ��, C������ �ٸ�������� ����)
*/

int weaponLevel = 1;
int weaponRefineLevel = 0;
int BaseAttackPower = 30;
int WeaponLevelPower = 0;
int WeaponRefinePower = 0;
int currentAttackPower = 0;

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int refineCost = 50;

	while (true)
	{
		system("cls");

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
			if (UseMoney(refineCost))
			{
				WeaponRefineUpragde();
			}
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
		
		WaitingInputAnyKey();
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