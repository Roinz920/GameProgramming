#include <stdio.h>
#include "Border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"


//Ŀ�� : output�� ������� ����ϴ� ��ġ�� �ȳ����ִ� ��ȣ.

//Ŀ���� ��ġ�� ���� (������ 0,0 �� ��ǥ ��ǥ x,y)
void SetCursorPosition(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}


//�������� 
bool GameOver = false;
int CurrentScore = 0;
int randomX = 26;
int randomY = 20;
int playtime = 0;

int questItemPositionX = 14;
int questItemPositionY = 5;
bool IsQuest = false;

//Ŀ���� ����� �ʹ�. ture = ���̴� ���� / false = ������ �ʴ� ����. WIndows.h�� ������
void SetCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

/*
* ����
* �÷��̾��� ������ġ�� ���� (SetCursorPosition ���)
* ��ǥ�� ���� ���� 
*/
int main()
{
	extern int Max_Width;
	extern int Max_Height;
	ShowBorder(); 
	CreateRandomSeed();
	SetCursorPosition(randomX, randomY);
	printf("��");
	SetCursorPosition(questItemPositionX, questItemPositionY);
	printf("��");
	SetCursorVisible(false);
	
	// �÷��̾��� ���� ��ǥ�� �����ϱ����� ���� ���� (���� ����)
	int PlayerPositionX = 10; // x�� �� +2 (���������� 1ĭ)
	int PlayerPositionY = 5; // y�� �� +1 (�Ʒ��� 1ĭ)

	// �÷��̾ ���������� ����. 
	SetCursorPosition(PlayerPositionX, PlayerPositionY);//�÷��̾ ��輱 ���ο� �ְ� �ʹ�. (Ŀ���� ��ġ ����)

	printf("��"); // ���� Cursor ��ġ�� ���ڸ� ����Ѵ�.
	

	// ������ �ٷ� ������� �ʵ��� �ϴ� Loop
	// �ݺ������� ����Ǵ� �κ�
	while (1)
	{
		// �������� ǥ���ϱ� ��, �Է� ��� ���� (wait inpukey) 
		// - Ư�� Ű�� ������ �ÿ� �� Player�� X, Y��ǥ ��ȯ
		// �� �ش� ��ǥ�� Ŀ�� ��ġ�� �ٲٰ� printf�� ���
		// �� ���� �ֿܼ� ��µ� ��ǥ�� �Ƿ翧 ����

		if (_kbhit())
		{
			SetCursorPosition(PlayerPositionX, PlayerPositionY);
			printf("  ");
			
			//ȭ��ǥ �Է� �ν�
			if (GetAsyncKeyState(VK_UP) & 0x8000) // ��
			{
				PlayerPositionY -= 1;
				if (PlayerPositionY <= 0)
				{
					PlayerPositionY = 1;
				}
			}
			else if (GetAsyncKeyState(VK_DOWN) & 0x8000) // �Ʒ�
			{
				
				PlayerPositionY += 1;
				if (PlayerPositionY >= 21)
				{
					PlayerPositionY = 20;
				}
			}
			else if (GetAsyncKeyState(VK_LEFT) & 0x8000) // ��
			{
				PlayerPositionX -= 2;
				if (PlayerPositionX <= 0)
				{
					PlayerPositionX = 2;
				}
			}
			else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // ��
			{
				PlayerPositionX += 2;
				if (PlayerPositionX >= 42)
				{
					PlayerPositionX = 40;
				}
			}
			else
			{
				// x, y��ǥ�� �״��
			}
		}
		//printf("���� ��ǥ : ( %d, %d ) \n", PlayerPositionX, PlayerPositionY); //�׽�Ʈ �ڵ�
		
		
		SetCursorPosition(PlayerPositionX, PlayerPositionY);
		printf("��");
				
		
		// UI �ڵ�
		SetCursorPosition(60, 0);  // ����� \n�� Ŀ���� ��ǥ�� 0,0���� �ٲٴ� �۾�
		printf("Score");
		SetCursorPosition(60, 1);
		printf("���� ���� : %d", CurrentScore);

		// �ð� ���� �ڵ�
		playtime++;

		//int hour	= playtime / 60 ^ 2;
		int minute	= playtime / 60;
		int second	= playtime % 60;

		SetCursorPosition(60, 2);
		printf("�÷��� �ð� : %02d �� %02d��", minute, second); //%02d : ����ǥ���� 2�ڸ��� �϶�

		if (IsQuest)
		{
			SetCursorPosition(60, 3);
			printf("����Ʈ�� Ȱ��ȭ�Ǿ����ϴ�.");
		}

		Sleep(50);

		//ĳ���Ͱ� Ư�� ��ġ�� �����ϸ� GameOver ture�� ���ᰡ �ǵ��� ��������.
		if (PlayerPositionX == randomX && PlayerPositionY == randomY)
		{
			CurrentScore += 1;	//���� ���
								//�������� ��ǥ ����
			randomX = ReturnPositionX();
			randomY = ReturnPositionY();
			SetCursorPosition(randomX, randomY);
			printf("��");
		}
		
		if (PlayerPositionX == questItemPositionX && PlayerPositionY == questItemPositionY)
		{
			IsQuest = true;
		}

		if (CurrentScore == 10)
		{
			SetCursorPosition(60, 10);
			printf("GameOver");
			break;
		}

		//break;
	}
}