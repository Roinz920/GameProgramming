/*
Date : 2025-02-17
Name : ������
Subject : C������ ����
*/

//ȯ�� ����
#include <stdio.h>

int main()
{
	// player : �г��� (���ڿ� Ÿ�� ����)
	// enemy : ���� �̸� (���ڿ� Ÿ�� ����)
	// player's_attackpower : �÷��̾��� ���ݷ� (���� Ÿ�� ����)
	// enemy's_attackpower : ������ ���ݷ� (���� Ÿ�� ����)

	//char player = "���";
	//char enemy = "���";
	int playerAttackPower = 5;
	int enemyAttackPower = 4;
	
	printf("%s�� %s�� ��򰡿��� �������ϴ�.\n","���", "���");
	printf("%s�� ���� %s�� ��ġä�� ���Ͽ���.\n", "���", "���");
	printf("player�� ����!\n");
	printf("player�� enemy���� %d�� �������� ������.\n", playerAttackPower);
	printf("player�� enemy�� ���� �����Ͽ� %d�� %d ������ ��ȯ.\n\n", playerAttackPower, enemyAttackPower);

	char char1 = 'a';
	int int1 = 10;
	float float1 = 0.8f;
	
	printf("���ڿ� ��� : %c\n", char1);
	printf("���� ��� : %d\n", int1);
	printf("�Ǽ� ��� : %f\n", float1);
	printf("���ڿ� ��� : ���� ���\n\n");

	// ��ȭ �ý��� ���丮
	// ������ �̸�, ���� ����, ���� Ȯ��
	// ��ȭ �õ�

	//int itemname
	int itemlevel = 0;
	float succesrate = 0.7*100;
	float downrate = 0.05*100;
	float failrate = (100 - succesrate - downrate);
	
	printf("������ ��ȭ �ý���\n");
	printf("������ �̸� : %s\n", "itemname");
	printf("��ȭ Ȯ��(����/����/�϶�)\n(%f, % f, % f)\n", succesrate, failrate, downrate);
	printf("��ȭ �õ�\n\n");
	
}
//�ܼ� â�� "�ȳ� ����" ��� (F5�� �����)

