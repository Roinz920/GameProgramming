#include <stdio.h>
#include <stdbool.h>
#include "title.h"
#include "description.h"
#include "play.h"
#include "Console.h"

bool GameOver = false;
int main()
{
	
	system("mode con: cols=50 lines=25");
	SetCursorVisible(false);
	SetColor(0, 15);
	
	while (true)
	{
		Intro();
		TitleSelect();
		
		if (GameOver == true)
		{
			break;
		}
		else
		{
			GameReady();

			if (GameReadySet == false)
			{
				system("cls");
			}
			else if (GameReadySet == true)
			{
				MainGame();
			}
		}
	}	
}