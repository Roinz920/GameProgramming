/*
Date : 2025-02-24
Name : ������
Subject : �ڵ��� �帧 ����
*/

/*
* main�Լ��� ���α׷��� ����������
* ���������� �Ʒ���� ������� �ڵ尡 ����
*/

/*
* ����� : ���α׷��� �ߴܽ��Ѽ� �ڵ带 Ȯ���ϴ� ���
* F9�� ����Ͽ� �ߴ��� ����&���� ����
*/

/*
* �ڵ��� �帧�� �ٲٱ� ���� �ʿ��� �� : ���ǹ�, �б�, branch
* 
* - if ���� - 
* if() {}
* �� () : ����
* �� {} : ��ü(body)
* 
* �� ������ : if(); {}�� �ع����� if()�� {}�� �и��Ǿ ���ǹ��� ()�� �����ϰ� �� ���� �ڵ��� {}�� �۵� ��
* 
* - if ����(����1) - 
* if // �ֿ� ����
* else // ������ ��� ��
*/

/*
* ���� ��� ��� ���� �ý���
* 100�� �̻� : S��ũ
* 90�� �̻� : A��ũ
* 80�� �̻� : B��ũ
*/

/*
* �ڵ��� �帧 ���� �� ���ǿ� ���� Ư�� �κи� �����ϴ� �ڵ� �ۼ�
* if (true) {} ���� / false �������� ����
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time�� ����ϱ� ���� �������

int main() // ���α׷��� ������ main() �Լ�
{
	//printf("Chapter 6!\n");

	// if() ~ else ��
	printf("���ǹ� ����1\n"); 

	int count = 5; // int : ������ �����ϰڴ� (��, 32bit ũ�� �Ҵ�)

	if (count < 10) // if�� �Ұ�ȣ �ȿ��� true(1) �Ǵ� false(0)�� �ߴ� ������ �־�� ��
	{
		printf("count�� ���� 10���� �۽��ϴ�\n");
	}
	else
	{
		printf("count�� ���� 10���� ũ�ų� �����ϴ�.\n");
	}
	// if() ~ if else ~ else ��
	printf("���� ����1\n");

	int score; 
	score = 89;

	if (score >= 100)
	{
		printf("S���, ���� ���� : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A���, ���� ���� : %d\n", score);
	}
	else
	{
		printf("B���, ���� ���� : %d\n", score);
	}

	// ���ڰ���
	/*
	* ������ ���� ����
	* �ܼ�â�� ���� �Է�
	* ���� ������ ���ں��� Ŭ ��� : ���ں��� Ů�ϴ�!
	* ���� ������ ���ں��� ���� ��� : ���ں��� �۽��ϴ�!
	* ���� ������ ������ ��� : ����!
	*/

	srand(time(NULL)); // �ð��� ������� �� �õ� ���� �ʱ�ȭ
	int randomNo = (rand() % 100) + 1; // 1~100������ ���� ���� �ο�
	int searchNo = 0;
	int countNo = 1;

	printf("���� ���� : %d\n", randomNo);
	while (searchNo != randomNo)
	{
		printf("\n���� ���� �Է� : ");
		scanf_s("%d", &searchNo);
		if (randomNo < searchNo)
		{
			printf("�Է��� ������ڰ� ���� ���ں��� Ů�ϴ�!\n");
			countNo++;
		}
		else if (randomNo > searchNo)
		{
			printf("�Է��� ������ڰ� ���� ���ں��� �۽��ϴ�!\n");
			countNo++;
		}
		else if (randomNo == searchNo)
		{
			printf("�����Դϴ�!\n");
		}
	}
	
	printf("����� �õ� Ƚ�� : %d\n", countNo);

	// ���� ����2
	// ���� ���߱� ���ӿ��� ������ ���� Ƚ���� ���� ��ŷ�� �ο�
	// 
	
	if (countNo == 1)	
		{
			printf("����� ��� : SS ��ũ\n");
		}
	else if ((1 < countNo) && (countNo <= 3))
		{
			printf("����� ��� : S ��ũ\n");
		}
	else if ((3 < countNo) && (countNo <= 5))
		{
			printf("����� ��� : B ��ũ\n");
		}
	else
		{
			printf("����� ��� : C ��ũ\n");
		}
	

	// switch��
	/* printf("switch ����\n");
	switch (countNo)
	{
		case 1 : printf("����� ��� : S ��ũ\n"); break;
		case 2 : printf("����� ��� : A ��ũ\n"); break;
		case 3 : printf("����� ��� : B ��ũ\n"); break;
		case 4 : printf("����� ��� : C ��ũ\n"); break;
	}
	*/

	/*
	* �Ʒ��� ���� �ڵ��� ������ case 1, case 2�� ���� ������� ����Ѵ�.
	switch (countNo)
	{
	case 1: 
	case 2: printf("����� ��� : A ��ũ\n"); break;
	case 3: printf("����� ��� : B ��ũ\n"); break;
	case 4: printf("����� ��� : C ��ũ\n"); break;
	}
	*/

	/*
	* ���� �� ��ŷ, Ƚ�� ���� ��ŷ
	* ��ŷ�� �ο��� �� �ִ� ���丮 �ۼ�
	*/



}
