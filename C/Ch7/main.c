/*
Date : 2025-02-24
Name : ������
Subject : �ڵ��� �帧 ���� - �ݺ��� (for, while)
*/

/*
* �ݺ���
* 1+1+1+1+1 �� 1 * 100
* 
* for (int i=0;i<10;i += 1) 
* �� ( (���� ���� ����) ; (���� ���� �Ǻ� ����) ; (���� ��ȯ ����) )
* �� ���ǿ��� ��(true), ����(false) �� ������ true�� ������ �ݺ����� ����, false�� ������ �ݺ��� Ż��
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	//printf("Chapter 7!\n");

	printf("for �ݺ��� ����1\n");
	//A �������� ȹ�� - ����

	int ACount = 0;
	printf("������ A�� ���� : %d\n", ACount);
	
	// A �������� ȹ���ߴ�.
	for (int i = 0; i < 100; i += 1)
	{
		ACount = ACount + 1;
	}
	
	printf("������ A�� ���� : %d\n", ACount);

	printf("for �ݺ��� ����2\n");

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("������ B�� ���� : %d\n", BCount);

	printf("for �ݺ��� ����3\n");

	for (int reverse_i = 10; reverse_i > 0; reverse_i--)
	{
		printf("���� �ݺ����� i �� : %d\n", reverse_i);
	}

	// ���� ��ȭ â�� �̾߱�
	// break�� �ݺ��� �ߴ� ����

	for (;;) 
	{
		// 1. ������ Stat ǥ�� �ܰ�
		// ������ �̸�
		printf("������ �̸� : %s\n", "�ռҵ�");
		// ������ ����
		int weaponLevel = 0; // ���� �̸��� ������ ���� ������Ⱑ �ʿ��� �κ��� �빮�ڷ� ���� (ī����)
		// �⺻ ���ݷ�, ����, ����ġ
		int basePower = 10;
		int weight = 5;
		// ������ ���ݷ� = �⺻���ݷ� + ���� * ����ġ
		int attackPower = basePower + weaponLevel * weight;
		
		// 2. ��ȭ�� �����ϴ� �ܰ�
		// ��ȭ�� ������ ���ΰ�? ��ȭ�� ���� ���ΰ�
		printf("��ȭ�� �����Ͻðڽ��ϱ�? (Y / N)\n");
		char check = ' ';
		scanf_s("%c", &check,1);
		if (check == 'Y')
		{
			// ��ȭ ����
			printf("��ȭ�� �����մϴ�.\n");
		}
		else if (check == 'N')
		{
			// ��ȭ ����
			printf("��ȭ�� �����մϴ�.\n");
		}
		else
		{
			printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");
			scanf_s("%c", &check, 1);
			while (getchar() != '\n');
			if (check == 'Y')
			{
				printf("��ȭ�� �����մϴ�.\n");
			}
			else if (check == 'N')
			{
				printf("��ȭ�� �����մϴ�.\n");
			}
			else
			{
				printf("�߸��� ���� �Է��Ͽ����ϴ�.\n");

				char another = ' ';
				scanf_s("%c", &another, 1);
				while (getchar() != '\n');

				if (check == 'Y')
				{
					printf("��ȭ�� �����մϴ�.\n");
				}
				else if (check == 'N')
				{
					printf("��ȭ�� �����մϴ�.\n");
				}
				else
				{
					printf("���α׷��� �����մϴ�.\n");
				}
			}
		}
		break;
	}

	// �ݺ����� ���
	// for �ݺ����� ����ؼ� ���ϴ� Ƚ����ŭ�� �ݺ��� ���� ǥ���ϱ� ���� ��� 
	// (�� ���� �ڵ尡 3�� �̻� �ݺ� �� ���, �ڵ�ȭ ��õ)
	// ����� �ݺ��� �����ϴ��� �𸣴� ��� (ex. ��Ȯ�� ���� �Է����� ����, ��Ȯ�� ���� �䱸�ϴ� �ڵ�)
	
	// while �ݺ���

	int xi = 0; //while �ݺ��� ���� ���� ����
	while (xi<10) // ( ) ���ǽ��� true�� ���� { } body�� ����, ���ǽ��� false�� ���� �ݺ��� Ż��
	{
		xi++; //while�� Ż���ϱ� ���� ���ǹ�

		printf("xi�� �� : %d\n", xi);
	}

	// for �ݺ��� �� while �ݺ��� ǥ��
	// �ݺ��� Ƚ���� �������ִ� ���, for �ݺ����� �ۼ��� ����
	// �ݺ� Ƚ���� �Ǻ��� ����� ���, while �ݺ����� �ۼ��� ����

	// ��) ??�� �ݺ��� �ڵ� �ۼ�
	
	// 2��ŭ �����ϴ� ������ ���� NumA
	// numA�� 10���� ũ�ų� ���� ���� ����
	// numA�� ���ڰ� 10���� Ŀ���� ���� �ݺ��� Ƚ���� Ȯ���ϰ��� ��
	// ��  �ݺ��� Ƚ���� CountA�� �����Ͽ� ���
	int numA = 0;
	int CountA = 0;
	printf("\nnumA�� ���� �Է����ּ��� (��, 10���� �۾ƾ� ��)\n");
	scanf_s("%d", &numA);

	while (numA<10)
	{
		numA += 2;
		CountA++;

		if (numA >= 10) //Ư�� ������ �޼��Ǹ�, ���ǹ��� Ż��
		{
			printf("���ۼ��ڿ��� �ݺ��Ͽ� ���� Ƚ�� : %d\n\n", CountA);
			break;
		}
	}
	 
	// �ǽ� ����1
	// 1~10������ ���� printf�� ����غ��ÿ�
	// (��, for�ݺ����� ¦��, while �ݺ����� Ȧ��)

	int forPrinting = 0;
	for (int i = 0; i < 10; i += 2)
	{
		forPrinting = forPrinting + 2;
		printf("for �ݺ��� ��°� : %d\n", forPrinting);
	}

	int whilePrinting = 1;
	while (whilePrinting < 10)
	{
		printf("while �ݺ��� ��°� : %d\n", whilePrinting);
		whilePrinting += 2;
		if (whilePrinting >= 10)
		{
			break;
		}
	}
	
}