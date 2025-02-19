/*
Date : 2025-02-19
Name : ������
Subject : ������ ���� �� �ǽ�
*/

#include <stdio.h>
#include <stdbool.h>
//#include "Test.h"

/*
* #include <> : Visual Studio�� ��ġ�� ���� ��ġ�� �ҽ������� ������ ���� ���
* #incldue "" : Ŀ�������� ������ ���Ϸκ��� �ҷ��� ���� ���
*/

/*
* 
* num1 + num2
* ���� + ����
* 
* ���� ������
* ���� ������ �����Ͽ� �۵��ϴ� ������
* ex.) �������� ������� ǥ�����ִ� ��ȣ : +, - (-10, +10)
*      ��ġ ����ġ ���� !, !=
* 
* ���� ������ : 2���� '��'�� �ʿ���
* �� +,-,*,/
* 
* ���� ������
* ? 1�� = 2�� : 3��
*/

/*
* �������� ���ӻ�
* �� ������ >, <, ==
* ��� ������ +, -, *, /, %
* ��Ʈ ������ (data type)
* ���� ������ (or , and) : || , &&
*/

/*
* �� �������� ��� : ��(true) 1, ����(false) 0
* stdbool.h ���̺귯���� �߰� ��, true & false�� ǥ��
*/

int main()
{
	//printf("Hello Operator!");
	printf("������ �ǽ�1 (���������)\n");

	int num1, num2;
	num1 = 10;
	num2 = 3;

	//����
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//����
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//����
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//������
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//������
	printf("%d ������ %d = % d\n", num1, num2, num1 % num2);

	printf("\n������ �ǽ�2 (�񱳿�����)\n");

	printf("�� ��� num1 > num2 : %d\n", num1 > num2); // ��
	printf("�� ��� num1 < num2 : %d\n", num1 < num2); // ����
		//num1 == num2;

	printf("\n������ �ǽ�3 (���׿�����)\n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("���׿����� ��� ��� : %s \n", result1 ? "true" : "false");
	printf("���׿����� ��� ��� : %d \n", result1 ? 1 : 0);

	printf("\n������ �ǽ�4 (���迬����)\n");

	// !num2 : num2�� �ƴϴ�. false �� true / true �� false
	printf("���� ������ : %d\n", (num1 == num2) || (num1 < num2)); // num1 == num2 �� ���� ���� ��
	printf("���� ������ : %d\n", (num1 != num2) && (num1 > num2)); // num1 != num2 �� ���� �ٸ� ��


	printf("\n������ �ǽ�5 (���տ�����)\n");

	int num3 = 2;
	int num4 = 5;
	//num3 = num3 + num4; // num3�� 2+5�� ���� �ִ´�
	num3 != num4;

	// T += A; �ڱ� �ڽŰ� ���� ���� ���Ͽ� �ٽ� �ڱ� �ڽ��� ������ �ִ� ������ (T = T + A;)
	// T -= A; �ڱ� �ڽŰ� ���� ���� ���� �ٽ� �ڱ� �ڽ��� ������ �ִ� ������ (T = T - A;)
	printf("num3 + num4�� �� : %d\n", num3);

	printf("\n������ �ǽ�6 (����������, ����������)\n");

	printf("num3�� �� : %d\n", num3++);
	printf("num4�� �� : %d\n", ++num4);
	printf("num3�� �� : %d\n", num3);
	printf("num4�� �� : %d\n", num4);

	// ����++ : ����ó���� ���� �Ŀ� ������ ���� 1 �߰� 
	// ++���� : ����ó���� �����ϱ� ���� ������ ���� 1 �߰�


	//���Ⱝȭ ���丮1.
		//���⸦ ��ȭ�� ��, n���� ���� ����, n+1���� ���� ���������� ǥ���ϴ� ���丮

	float attackPower;
	int weaponSTR;
	int weaponbasedmg=30;
	int weaponupgradelevel=1;
	float weaponupgradefactor;
	float succesrate = 0.7 * 100;
	float downrate = 0.05 * 100;
	float failrate = (100 - succesrate - downrate);
	
	weaponupgradefactor = 0.5f;
	weaponSTR = weaponupgradelevel * 5;
	attackPower = weaponbasedmg + weaponSTR * weaponupgradefactor;

	printf("\n����������  [ ��ȭ ��� �� ] ��������\n");
	printf("�� ���� ��ȭ �ܰ� : %d         ��\n", weaponupgradelevel );
	printf("�� ������ݷ� : %f     ��\n", attackPower );
	printf("������������������������������������������������������������\n");
	weaponupgradelevel += 1;
	weaponSTR = weaponupgradelevel * 5;
	attackPower = weaponbasedmg + weaponSTR * weaponupgradefactor;
	printf("�� ���� ��ȭ �ܰ� : %d         ��\n", weaponupgradelevel);
	printf("�� ������ݷ� : %f     ��\n", attackPower);
	printf("������������������������������������������������������������\n");
	weaponupgradelevel -= 1;

	// ������ ���丮2.
	// �������� �κ��丮. Slot. ���� ������ ����. Stack�� 
	// �ִ� ������ ���� �� ������ ����
	// Slot �ִ� ���� �� ������ ����
	// A �������� n�� ȹ��, B �������� m�� ȹ��
	// ���� �κ��丮�� ������ ���� á���� �� á���� ǥ���ϴ� ��� ǥ��
	int SlotNo = 16;
	int ItemA;
	int ItemB;


	// ������ ���丮3.

}