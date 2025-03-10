#include "description.h"

void GameDescription()
{
	printf("\n당신의 동체시력을 테스트하기 위한 간단한 게임입니다!\n");
	printf("화면에 나타는 방향을 키보드 방향키를 사용하여 입력해보세요.\n");
	
	printf("\n난이도에 따라 키 입력 사이의 제한시간과 체력이 다릅니다.\n");
	printf("당신의 한계를 테스트해보세요.\n");

	printf("\n        │  << 제한시간 >> │  << 초기 체력 >> │\n");
	printf(" 쉬  움 │       4초       │        20        │\n");
	printf(" 보  통 │       2초       │        10        │\n");
	printf(" 어려움 │       1초       │         5        │\n");

}
