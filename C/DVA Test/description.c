#include "description.h"

void GameDescription()
{
	system("cls");
	printf("\n	        당신의 동체시력을 \n	 테스트하기 위한 간단한 게임입니다!\n");
	printf("	      화면에 나타는 방향을 \n     키보드 방향키를 사용하여 입력해보세요.\n");
	
	printf("\n	   난이도에 따라 키 입력 사이의 \n	    제한시간과 체력이 다릅니다.\n");
	printf("	   당신의 한계를 테스트해보세요.\n");

	printf("\n         │  "); SetColor(0, 12); printf(" << 제한시간 >> "); SetColor(0, 15); printf("│"); SetColor(0, 10); printf(" << 초기 체력 >> │\n"); SetColor(0, 15);
	printf("  쉬  움 │        2초               20        │\n");
	printf("  보  통 │        1초               10        │\n");
	printf("  어려움 │      0.5초                5        │\n");

	Sleep(1000);
}
