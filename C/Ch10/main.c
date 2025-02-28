/*
Date : 2025-02-28
Name : ������
Subject : �Լ��� ����
*/

/*
* �Լ� : input�� �����ϸ� output�� ��ȯ(return)�Ѵ�.
		   A				B
* A�����͸� ��򰡿� �����Ͽ� B��� ��������� ��ȯ�Ѵ�.
* 
* A,B ����	: ������Ÿ�԰� �̸� ����, �����ϱ����� ���� ����� ��ȯ�ϱ� ���� ����
* ���	: �Լ��� �̸�
* ����		: ȣ��� �Լ��� ��ġ
* 
* void Uprgae() {}
  1.	void	: ��ȯ ����. B������ ������� Ÿ���� ����. ��ȯ���� ���ٴ� ��
  2.	Uprage	: �Լ��� �̸�
  3.	()		: ����� �����ϱ� ���� ����(�Ű�����)�� �����ϴ� ���. �̹��� ��쿡�� A���� Ÿ���� �����ϴ� ��. �ƹ��͵� ���Ե��� ���� ���, void Ÿ��
  4.	{}		: �ڵ尡 ���ǵǴ� �κ�. body
*/

/*
* void ����. ��ȯ ���¿����� ������ �Ұ���������, �Ű����������� �ش� ������ ������ �� ����
   Upgrade(){} // ��ǻ�Ϳ��� �ν� �Ұ���
   �� void Upgrade(){}
*/

#include <stdio.h>
#include <stdbool.h>

/*
* ��ȯ���� ���� �� ������ void. ������ ���� ���� (int)
*/

int CurrentMoney = 100;

//�������� ��ġ�� amount ������ �� �ִ��� ������
// ���ǹ����� �ڵ带 ����� ����
// �� ������ : ������ < ������ ��ġ �� �� ���� �� false ��ȯ

bool IsMoneyEnough(int amount)
{
	return ((CurrentMoney >= amount) ? true : false);
}

void BuyItem(int price)
{
	if (IsMoneyEnough(price))
	{
		printf("�������� �����մϴ�.\n");
	}
	else
	{
		printf("�������� �����մϴ�.\n");
	}
}

void Example()
{
	printf("���� ���\n");
}

int MultiplyNo(int input)
{
	int a = 10;
	return 10 * input; // �� ��ȯ ��ɾ�� �Լ��� ����� ���¿� ������ ������Ÿ���� ��ȯ��.
}

int main()
{
	//printf("Ch10!\n");

	//void ���� �Լ� 
	Example();
	//int�� ��ȯ�ϴ� �Լ�
	printf("����� ��� : %d\n", MultiplyNo(5));
	
	//true, false ��ȯ �Լ�

	BuyItem(50);

}