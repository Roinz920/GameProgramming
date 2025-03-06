#include <stdio.h>
#include "Border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>


//Ŀ�� : output�� ������� ����ϴ� ��ġ�� �ȳ����ִ� ��ȣ.

//Ŀ���� ��ġ�� ���� (������ 0,0 �� ��ǥ ��ǥ x,y)
void SetCursorPosition(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
bool GameOver = false;

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
		system("cls");
		ShowBorder();
		SetCursorPosition(PlayerPositionX, PlayerPositionY);
		printf("��");
		Sleep (50);
		
		//ĳ���Ͱ� Ư�� ��ġ�� �����ϸ� GameOver ture�� ���ᰡ �ǵ��� ��������.
		if (PlayerPositionX == 26 && PlayerPositionY == 20)
		{
			GameOver = true;
		}
		
		if (GameOver)
		{
			break;
		}

		//break;
	}
}