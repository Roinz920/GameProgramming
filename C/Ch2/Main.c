/*
Date : 2025-02-18
Name : ������
Subject : ������ ���� ����
*/

#include <stdio.h> // google �˻�, ChatGPT�� 'C��� ����� ��� ���̺귯��' or DeepL ����

int main()
{
	//int attackPower;
	//attackPower = 10;
	float attackPower;
	//attackPower = 10.5;

		//char weapontypetext[5]="melee";
	int weaponSTR;
	int weaponINT;
	int weaponbasedmg;
	int weaponupgradelevel;
	float weaponupgradefactor;
	float succesrate = 0.7 * 100;
	float downrate = 0.05 * 100;
	float failrate = (100 - succesrate - downrate);

	weaponbasedmg = 30;
	int weapontype = 0;
	// if (weapontype = 0)
	// {
	// 	weapontypetext = "melee";
	// }
	// else
	// {
	// 	weapontypetext = "magic";
	// }
	weaponupgradelevel = 0;
	if (weapontype = 0)
	{
		weaponupgradefactor = 0.5f;
		weaponSTR = weaponupgradelevel * 5;
		attackPower = weaponbasedmg + weaponSTR * weaponupgradefactor;
	}
	else
	{
		weaponupgradefactor = 0.4f;
		weaponINT = weaponupgradelevel * 3;
		attackPower = weaponbasedmg + weaponINT * weaponupgradefactor;
	}
		
	printf("������ ��ȭ �ý���\n");
	printf("������ �̸� : %s (Ÿ�� : %s)\n", "itemname", "melee");
	printf("��ȭ Ȯ��(����/����/�϶�)\n(%f, % f, % f)\n", succesrate, failrate, downrate);
	printf("��ȭ �õ�\n\n");
	printf("��ȭ ��, ������ ���ݷ��� %f �Ǿ����ϴ�.\n\n", attackPower);




	int width, height, extent;

	printf("�簢���� ���̸� ���մϴ�\n");
	printf("������ ���� : \n");
	scanf_s("%d", &width );
	printf("������ ���� : \n");
	scanf_s("%d", &height );
	
	extent = width * height;
	
	printf("�簢���� ���̴� %d �Դϴ�.\n", extent);


}

/*
* ��������
* ���� ���� : �Ʒ��� ���� �ۼ��Ͽ� ����.
* (������ Ÿ��) (������ �̸�); // "������ �̸��� ������Ÿ���� ������ ���´�." ��� ����. Data�� ������ ���� ����!
* ���� �ʱ�ȭ : ������ ���ʷ� ���� �����ϴ� �۾� (�̹� ������ ������ �缱�� �Ұ�
* 
* ���� ����� ���ؼ��� ���� ��, �ʱ�ȭ�ؾ� �Ѵ�.
* 
* ������
* ��Ģ���� : +, -, *, /
* ������, �� :
* 0,1bit ������
* ���迬���� a > b, a < b
* 
* ������ �̸� ��Ģ
* 1. ������ ���� �̸��� ���ڰ� ���� �ȵȴ�.
* 2. �̸��� Ư����ȣ�� ���� �ȵȴ�.
* 3. underbar, alphabet, number ��밡��
* 4. �̸� ���̿� ���鹮�� ���Ұ�
* 5. Ű����� �̸����� ���Ұ�
*/

// ����
// �簢���� ���̸� ���ϴ� ����

// ������ ������ ����, width, height
// ���� = ���� x ����
// �簢���� ���̸� ���մϴ�.
// ���ο� ���θ� ���մϴ�.
//�簢���� ���̸� n�Դϴ�.

