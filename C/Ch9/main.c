/*
Date : 2025-02-27
Name : ������
Subject : ���, �Լ�, ���� ����, ���� ����
*/

/*
* ���׷��̵� �ý���
* - menu
*/

#include "lecture.h"
#include "Upgrade.h"
#include "main.h"
#include "Currency.h"

int number = 1; // ��main �Լ� �ܺο� �����Ƿ� ���� ����

int CurrentMoney = 1000;

//���� ���� �������� ���� ǥ��

void ShowInfo()
{
	printf("ĳ������ Ŭ���� : %s\n", "���谡");
	printf("���� ������ : %d\n", CurrentMoney);
	WaitingInputAnyKey();
}

void WaitingInputAnyKey()
{
	printf("�����Ϸ��� �ƹ� Ű�� �Է����ּ���.\n");
	_getch();
}


int main()
{

	//ShowExample();

	ShowInfo();
	
	ShowUpgradeMenu();


}