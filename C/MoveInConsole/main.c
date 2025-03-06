#include <stdio.h>
#include "Border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>


//커서 : output된 결과물을 출력하는 위치를 안내해주는 기호.

//커서의 위치의 변경 (기준점 0,0 → 목표 좌표 x,y)
void SetCursorPosition(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}
bool GameOver = false;

/*
* 도전
* 플레이어의 시작위치의 설정 (SetCursorPosition 사용)
* 좌표에 대한 감각 
*/
int main()
{
	extern int Max_Width;
	extern int Max_Height;
	ShowBorder(); 
	
	// 플레이어의 현재 좌표를 설명하기위한 변수 선언 (정수 선언)
	int PlayerPositionX = 10; // x의 값 +2 (오른쪽으로 1칸)
	int PlayerPositionY = 5; // y의 값 +1 (아래로 1칸)

	// 플레이어가 시작지점에 등장. 
	SetCursorPosition(PlayerPositionX, PlayerPositionY);//플레이어를 경계선 내부에 넣고 싶다. (커서의 위치 변경)

	printf("▣"); // 현재 Cursor 위치에 문자를 출력한다.
	

	// 게임이 바로 종료되지 않도록 하는 Loop
	// 반복적으로 실행되는 부분
	while (1)
	{
		// 움직임을 표현하기 전, 입력 대기 상태 (wait inpukey) 
		// - 특정 키를 눌렀을 시에 → Player의 X, Y좌표 변환
		// → 해당 좌표로 커서 위치를 바꾸고 printf로 출력
		// → 기존 콘솔에 출력된 좌표의 실루엣 제거

		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_UP) & 0x8000) // 위
			{
				PlayerPositionY -= 1;
				if (PlayerPositionY <= 0)
				{
					PlayerPositionY = 1;
				}
			}
			else if (GetAsyncKeyState(VK_DOWN) & 0x8000) // 아래
			{
				
				PlayerPositionY += 1;
				if (PlayerPositionY >= 21)
				{
					PlayerPositionY = 20;
				}
			}
			else if (GetAsyncKeyState(VK_LEFT) & 0x8000) // 좌
			{
				PlayerPositionX -= 2;
				if (PlayerPositionX <= 0)
				{
					PlayerPositionX = 2;
				}
			}
			else if (GetAsyncKeyState(VK_RIGHT) & 0x8000) // 우
			{
				PlayerPositionX += 2;
				if (PlayerPositionX >= 42)
				{
					PlayerPositionX = 40;
				}
			}
			else
			{
				// x, y좌표가 그대로
			}
		}
		//printf("현재 좌표 : ( %d, %d ) \n", PlayerPositionX, PlayerPositionY); //테스트 코드
		system("cls");
		ShowBorder();
		SetCursorPosition(PlayerPositionX, PlayerPositionY);
		printf("▣");
		Sleep (50);
		
		//캐릭터가 특정 위치에 도달하면 GameOver ture로 종료가 되도록 만들어보세요.
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