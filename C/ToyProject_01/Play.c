#include "Play.h"

//��ȭ ���ӿ� �ʿ��� ���� ������
int weaponLevel = 0;
int TargetLevel = 10;
int BaseAttackPower = 30;
int WeaponLevelPower = 0;
int currentAttackPower = 0;
bool IsClear = false;
bool IsFail = false;


// ���ؿ���
int CurrentMoney = 10000;

void ShowTitle()
{
	printf("������ ���� ���Դϴ�.\n\n");
	printf("===========================================================\n");
	printf("====================== ���� ��ȭ�ϱ� ======================\n");
	printf("===========================================================\n\n");
}

void ShowManual()
{
	printf("����������������������������������������������������������������������������������������������������������������������\n");
	// 1. ���۹�
	printf("��  [���۹�]						  ��\n");
	 printf("��  Ű���� �ӷ� �� ����Ű�� ���� ����.			  ��\n");
	 printf("��  �Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ʿ��մϴ�. ��\n");
	// 2. ���� ��ǥ
	 printf("��  [���� ��ǥ]						  ��\n");
	 printf("��  ���� 10�� �����					  ��\n");
	// 3. ���� ���
	 printf("��  [���� ����]						  ��\n");
	 printf("��  1. ���ѵ� ���������� ��ǥ�� �޼��ؾ��մϴ�.		  ��\n");
	 printf("��  2. Ư�� ���� �������� ��ȭ �϶��� �����մϴ�.	  ��\n");
	 printf("��  3. Ư�� �������� ���Ⱑ �ı��˴ϴ�.			  ��\n");
	 printf("����������������������������������������������������������������������������������������������������������������������\n\n");
}

void GameLogic()
{
	while (1)
	{


		//�޴� ���� ȭ��
		ShowMenu(); // EnforceWeapon.h�� �ִ� �Լ�

		//������ Ŭ�����߰ų�, ���ӿ��� �Ǿ��� ���
		if (IsClear || IsFail)
		{
			break;
		}

	}
	
	if (IsClear)
	{
		printf("GAME CLEAR!\n");
		_getch();
		
	}
	
	if (IsFail)
	{
		printf("GAME OVER...\n");
		
		_getch();
	}
	
}

void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();

}


