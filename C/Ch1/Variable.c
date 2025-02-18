/*
Date : 2025-02-17
Name : 김정민
Subject : C언어에서의 변수
*/

//환경 설정
#include <stdio.h>

int main()
{
	// player : 닉네임 (문자열 타입 변수)
	// enemy : 몬스터 이름 (문자열 타입 변수)
	// player's_attackpower : 플레이어의 공격력 (숫자 타입 변수)
	// enemy's_attackpower : 몬스터의 공격력 (숫자 타입 변수)

	//char player = "용사";
	//char enemy = "고블린";
	int playerAttackPower = 5;
	int enemyAttackPower = 4;
	
	printf("%s와 %s가 어딘가에서 만났습니다.\n","용사", "고블린");
	printf("%s는 아직 %s를 눈치채지 못하였다.\n", "고블린", "용사");
	printf("player의 선공!\n");
	printf("player가 enemy에게 %d의 데미지를 입혔다.\n", playerAttackPower);
	printf("player와 enemy가 서로 공격하여 %d와 %d 데미지 교환.\n\n", playerAttackPower, enemyAttackPower);

	char char1 = 'a';
	int int1 = 10;
	float float1 = 0.8f;
	
	printf("문자열 출력 : %c\n", char1);
	printf("정수 출력 : %d\n", int1);
	printf("실수 출력 : %f\n", float1);
	printf("문자열 출력 : 용사와 고블린\n\n");

	// 강화 시스템 스토리
	// 아이템 이름, 현재 레벨, 성공 확률
	// 강화 시도

	//int itemname
	int itemlevel = 0;
	float succesrate = 0.7*100;
	float downrate = 0.05*100;
	float failrate = (100 - succesrate - downrate);
	
	printf("아이템 강화 시스템\n");
	printf("아이템 이름 : %s\n", "itemname");
	printf("강화 확률(성공/유지/하락)\n(%f, % f, % f)\n", succesrate, failrate, downrate);
	printf("강화 시도\n\n");
	
}
//콘솔 창에 "안녕 변수" 출력 (F5로 디버깅)

