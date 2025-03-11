#include "Display.h"

extern int ArrowSleepTime;
extern int CurrentScore;
extern int CurrentHP;
extern int MaxHP;
int ArrowRandomSeed;
int ArrowColorSeed;

void DirectionBorder()
{
	system("cls");
	SetCursorPosition(13, 1);
	printf(" 忙式式式式式式式式式式式式式式式式式式式忖\n");
	SetCursorPosition(13, 2);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 3);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 4);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 5);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 6);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 7);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 8);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 9);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 10);
	printf(" 弛                   弛\n");
	SetCursorPosition(13, 11);
	printf(" 戌式式式式式式式式式式式式式式式式式式式戎\n");

}

void StarCount()
{
	SetCursorPosition(18, 16);
	printf("3...");
	Sleep(500);
	printf("2...");
	Sleep(500);
	printf("1...");
	Sleep(500);
	printf("GO!");
	Sleep(500);
	SetCursorPosition(18, 16);
	printf("                        ");
}
void DirectionArrow()
{
	srand((unsigned int)time(NULL) * 100 + clock());

	ArrowRandomSeed = rand() % 4 + 1;
	ArrowColorSeed = rand() % 15 + 1;


	if (ArrowRandomSeed == 1)
	{
		SetColor(0, ArrowColorSeed);
		SetCursorPosition(24, 6);
		printf("～");
	}
	else if (ArrowRandomSeed == 2)
	{
		SetColor(0, ArrowColorSeed);
		SetCursorPosition(24, 6);
		printf("Ⅱ");
	}
	else if (ArrowRandomSeed == 3)
	{
		SetColor(0, ArrowColorSeed);
		SetCursorPosition(24, 6);
		printf("∪");
	}
	else if (ArrowRandomSeed == 4)
	{
		SetColor(0, ArrowColorSeed);
		SetCursorPosition(24, 6);
		printf("９");
	}
	Sleep(ArrowSleepTime);
	//Sleep(1000);
}

void InGameDisplay()
{
	SetColor(0, 15);
	SetCursorPosition(20, 16);
	printf("<< H P >>");
	SetCursorPosition(22, 17);
	printf("%2d / %2d", CurrentHP, MaxHP);

	SetCursorPosition(19, 19);
	printf("<< Score >>");
	SetCursorPosition(24, 20);
	printf("%d", CurrentScore);


}
