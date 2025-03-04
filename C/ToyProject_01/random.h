#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// 1 ~ 100 랜덤하게 숫자 출력 (정수)
// 30% 성공 (1 ~ 100) 70보다 크거나 같으면 성공

// A	이름(B)
// A :	반환값
// B :	매개변수

int ReturnRandomValue();
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max); // 랜덤으로 생성되는 숫자의 범위 조정