#pragma once
#include <Windows.h>
#include <stdlib.h>
#include <stdbool.h>

// 배경색, 글자색 동시에 변경해주는 함수
void SetColor(unsigned char _BGColor, unsigned char _TextColor);
void SetCursorPosition(int x, int y);
void SetCursorVisible(bool enable);