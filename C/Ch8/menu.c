#include "menu.h"
#include <stdio.h>
#include <stdbool.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int weaponLevel;
int basePower;
int weight;


void SelectMenu()
{
	// Ctrl + K + S : �ڵ� ���α� ����Ű
	while (true)
	{
		system("cls"); // ȭ���� ������ ������ �ڵ� (Windows.h ����� �ʿ���)
		printf("������������������������������\n�� 1. ��ȭ�Ѵ�.��\n������������������������������\n");
		printf("������������������������������\n�� 2. ����Ѵ�.��\n������������������������������\n");
		printf("������������������������������\n�� 3. �����Ѵ�.��\n������������������������������\n");

		int inputNo = -1;
		scanf_s("%d", &inputNo);
		while (getchar() != '\n');
		// char Ÿ���� ���ڸ� �������ڴٶ�� �� 
		// �� scanf�� ���� �Է��� ����, ��ĭ �Է�(\n ��, ����Ű)�� ������ ������ �۵���
		// �� �̸� �����ϱ� ���Ͽ� getchar�� �̿��Ͽ� ���ۿ� ���Ե� ������ �ֹ߽�Ŵ

		//Alt + ȭ��ǥ ��/�Ʒ� (��/��) : ���־� ��Ʃ��� ����Ű �� �ϳ�. �۾��� �ڵ��� �� ��ġ ����
		if (inputNo == 1)
		{
			printf("��ȭ�� �����մϴ�.\n");

			double succesrate = 70 - (2.5 * weaponLevel);
			double downrate = 1 + (0.2* weaponLevel);
			double failrate = (100 - succesrate - downrate);

			srand(time(NULL)*succesrate);
			double randomNo = (rand() % 100) + 1;

			printf("��ȭ ���� Ȯ�� : %f\n", succesrate);
			printf("��ȭ ���� Ȯ�� : %f\n", failrate);
			printf("��ȭ �϶� Ȯ�� : %f\n", downrate);

			printf("���� ��� : %f\n", randomNo);
			printf("[���� ���� �Ǻ� (��ȭ ����+��ȭ �϶�] < ���� ���\n %f < %f  ", (failrate+downrate), randomNo);

				if (randomNo < downrate)
				{
					printf("(�����) ������ ������ 1 �϶��Ͽ����ϴ�!\n");

					if (weaponLevel <= 0)
					{
						weaponLevel = 0;
					}
					else
					{
						weaponLevel--;
					}
					// ������ ���ݷ� = �⺻���ݷ� + ���� * ����ġ
					int attackPower = basePower + weaponLevel * weight;
					printf("���� ���ݷ� : %d  / ���� : %d\n", attackPower, weaponLevel);
				}
				else if (randomNo > downrate && randomNo < (100 - succesrate))
				{
					printf("(����) ��ȭ�� �����Ͽ����ϴ�!\n");
					int attackPower = basePower + weaponLevel * weight;
					printf("���� ���ݷ� : %d  / ���� : %d\n", attackPower, weaponLevel);
				}
				else
				{
					printf("(����) ������ ������ 1 ����Ͽ����ϴ�!\n");
					weaponLevel++;
					int attackPower = basePower + weaponLevel * weight;
					printf("���� ���ݷ� : %d  / ���� : %d\n", attackPower, weaponLevel);

				}
		}
		else if (inputNo == 2)
		{
			printf("��ȭ�� ����մϴ�.\n");
		}
		else if (inputNo == 3)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� �Է°��Դϴ�.\n");
		}

		// �÷��̾ Ư�� Ű�� �Է����� ���� ���� �ڵ�� �Ѿ���� �ϰ� �ʹ�.
		// Ű������ ���ڰ��� ������ �� �ְ� ���ִ� �Լ��� ��� (conio.h ����� �ʿ���)

		printf("������ ���� �ƹ� Ű�� �Է����ּ���.");
		_getch(); //�Է� ���� �޾ƿ��� ��ɾ�



	}
}
