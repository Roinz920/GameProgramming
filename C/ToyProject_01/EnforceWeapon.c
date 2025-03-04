#include <stdio.h>
#include "EnforceWeapon.h"





void ShowMenu()
{
	
	int normalCost = 100;
	
	while (true)
	{
		

		printf("\n���׷��̵� �޴�\n");

		printf("��������������������������������������������\n�� 1. ���⸦ ��ȭ�Ѵ�.��\n��������������������������������������������\n");
		printf("��������������������������������������������\n�� 2. ���¸� Ȯ���Ѵ�.��\n��������������������������������������������\n");
		printf("��������������������������������������������\n�� 3. ��ȭ�� ����Ѵ�.��\n��������������������������������������������\n");

		int inputNo = -1;
		scanf_s("%d", &inputNo);
		while (getchar() != '\n');

		if (inputNo == 1)
		{
			
			if (UseMoney(normalCost))
			{
				if (CheckRandomFunc(50)) // 50% ����
				{
					printf("�����߽��ϴ�.\n");
					WeaponLevelUpgrade();
				}
				else
				{
					printf("�����߽��ϴ�.\n");
				}
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
			printf("\n���� Ŭ����!\n");
			IsClear = true;
		}
		else
		{
			printf("\n��ǥ���� �̴޼�\n");
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
	currentAttackPower = BaseAttackPower + WeaponLevelPower;
	WeaponCurrenStat();
}

void WeaponCurrenStat()
{
	printf("\n���� ���� ���� : %d [+ %d]\n", weaponLevel, WeaponLevelPower);
	printf("���� ���� �� ���ݷ� : %d [ %d + %d ]\n", currentAttackPower, BaseAttackPower, WeaponLevelPower);
}

bool IsGameClear()
{
	// ���� ���� ���� == �ִ뷹�� �� ��� 
	// �� ���� ������ A ? B : C;
	// A ���ǽ��� true�̸� B��ȯ, False�̸� C ��ȯ
	return weaponLevel >= TargetLevel ? true : false ;
}

void WaitingInputAnyKey()
{
	printf("�����Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");
	_getch();
}