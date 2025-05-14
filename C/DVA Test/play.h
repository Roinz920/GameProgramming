#pragma once

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "description.h"
#include "Console.h"
#include "Display.h"

int StartDifficulty;
int CurrentDifficulty;
int ResultDifficulty;
int CurrentHP;
int MaxHP;
bool GameReadySet;
extern bool GameOver;

void SelectDifficulty();
void GameReady();
void GameReset();
void GameOverCheck();
void GameDifficultyRais();
void MainGame();

