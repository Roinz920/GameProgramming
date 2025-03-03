#include "Play.h"

//��ȭ ���ӿ� �ʿ��� ���� ������
int weaponLevel = 10;
int TargetLevel = 10;
int weaponRefineLevel = 0;
int BaseAttackPower = 30;
int WeaponLevelPower = 0;
int WeaponRefinePower = 0;
int currentAttackPower = 0;
bool IsClear = false;
bool IsFail = false;

void ShowTitle()
{
	printf("������ ���� ���Դϴ�.\n");
	printf("====================================================\n");
	printf("====================================================\n");
	printf("====================================================\n");

	printf("                   ���� ��ȭ�ϱ�                   \n\n");
}

void ShowManual()
{
	// 1. ���۹�
	 printf("Ű���� �ӷ� �� ����Ű�� ���� ����.\n");
	 printf("�Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ʿ��մϴ�.\n\n");
	// 2. ���� ��ǥ
	 printf("���� 10�� �����\n\n");
	// 3. ���� ���
	 printf("1. ���ѵ� ���������� ��ǥ�� �޼��ؾ��մϴ�.\n");
	 printf("2. Ư�� ���� �������� ��ȭ �϶��� �����մϴ�.\n");
	 printf("3. Ư�� �������� ���Ⱑ �ı��˴ϴ�.\n\n");
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


