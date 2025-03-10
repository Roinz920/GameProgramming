#include <stdio.h>
#include <stdbool.h>
#include "title.h"
#include "description.h"
#include "play.h"
#include "Console.h"

int main()
{
	//SetColor(0, 0);
	//printf("Hello World");
	while (true)
	{
		Intro();
		TitleSelect();
		GameReady();			
	}

}