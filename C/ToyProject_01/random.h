#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

// 1 ~ 100 �����ϰ� ���� ��� (����)
// 30% ���� (1 ~ 100) 70���� ũ�ų� ������ ����

// A	�̸�(B)
// A :	��ȯ��
// B :	�Ű�����

int ReturnRandomValue();
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max); // �������� �����Ǵ� ������ ���� ����