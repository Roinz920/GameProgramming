#include "Console.h"

void SetColor(unsigned char _BGColor, unsigned char _TextColor)
{
	if (_BGColor > 15 || _TextColor > 15) return; // 1000 1000

	// 0000 0111이라면 0111 0000으로 변경 (<< : bit의 이동 명령어)
	unsigned short ColorNum = (_BGColor << 4) | _TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}

void SetCursorPosition(int x, int y)
{
	COORD position = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void SetCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}