#include "GameIntro.h"


void IntroMenu()
{
	while (1)
	{
		// ������ �� �� �ִ� UI �ؽ�Ʈ
		printf("1. ���ӽ���\n");
		printf("2. ��������\n");

		//����
		//�Է��� ���� �����ϴ� ���
		//������ ���� ���Ͽ� ���� ��
		int InputNumber = -1;
		scanf_s("%d", &InputNumber);
		while (getchar() != '\n');

		//�� ������ '=='�� ����Ͽ� ���ǹ� ���

		if (InputNumber == 1)
		{
			GameLoop();
			//���� ����
		}
		else if (InputNumber == 2)
		{
			break;
			//���� ����
		}
		else
			printf("�߸��� �Է��Դϴ�.\n");
			//�߸� �� �� 

	}
}
