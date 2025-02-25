/*
Date : 2025-02-24
Name : 김정민
Subject : 코드의 흐름 제어 - 반복문 (for, while)
*/

/*
* 반복문
* 1+1+1+1+1 → 1 * 100
* 
* for (int i=0;i<10;i += 1) 
* ※ ( (변수 선언 조건) ; (변수 상태 판별 조건) ; (변수 변환 조건) )
* ※ 조건에는 참(true), 거짓(false) → 조건이 true일 때에만 반복문을 시행, false일 때에는 반복문 탈출
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
	//printf("Chapter 7!\n");

	printf("for 반복문 예제1\n");
	//A 아이템의 획득 - 갯수

	int ACount = 0;
	printf("아이템 A의 개수 : %d\n", ACount);
	
	// A 아이템을 획득했다.
	for (int i = 0; i < 100; i += 1)
	{
		ACount = ACount + 1;
	}
	
	printf("아이템 A의 개수 : %d\n", ACount);

	printf("for 반복문 예제2\n");

	int BCount = 0;

	for (int i = 0; i < 10; i++)
	{
		BCount = BCount + i;
	}
	printf("아이템 B의 개수 : %d\n", BCount);

	printf("for 반복문 예제3\n");

	for (int reverse_i = 10; reverse_i > 0; reverse_i--)
	{
		printf("현재 반복문의 i 값 : %d\n", reverse_i);
	}

	// 게임 강화 창의 이야기
	// break로 반복문 중단 가능

	for (;;) 
	{
		// 1. 무기의 Stat 표현 단계
		// 무기의 이름
		printf("무기의 이름 : %s\n", "롱소드");
		// 무기의 레벨
		int weaponLevel = 0; // 변수 이름의 선언할 때에 띄워쓰기가 필요한 부분은 대문자료 설정 (카멜방식)
		// 기본 공격력, 레벨, 가중치
		int basePower = 10;
		int weight = 5;
		// 무기의 공격력 = 기본공격력 + 레벨 * 가중치
		int attackPower = basePower + weaponLevel * weight;
		
		// 2. 강화를 선택하는 단계
		// 강화를 진행할 것인가? 강화를 멈출 것인가
		printf("강화를 진행하시겠습니까? (Y / N)\n");
		char check = ' ';
		scanf_s("%c", &check,1);
		if (check == 'Y')
		{
			// 강화 진행
			printf("강화를 진행합니다.\n");
		}
		else if (check == 'N')
		{
			// 강화 종료
			printf("강화를 종료합니다.\n");
		}
		else
		{
			printf("잘못된 값을 입력하였습니다.\n");
			scanf_s("%c", &check, 1);
			while (getchar() != '\n');
			if (check == 'Y')
			{
				printf("강화를 진행합니다.\n");
			}
			else if (check == 'N')
			{
				printf("강화를 종료합니다.\n");
			}
			else
			{
				printf("잘못된 값을 입력하였습니다.\n");

				char another = ' ';
				scanf_s("%c", &another, 1);
				while (getchar() != '\n');

				if (check == 'Y')
				{
					printf("강화를 진행합니다.\n");
				}
				else if (check == 'N')
				{
					printf("강화를 종료합니다.\n");
				}
				else
				{
					printf("프로그램을 종료합니다.\n");
				}
			}
		}
		break;
	}

	// 반복문의 사용
	// for 반복문을 사용해서 원하는 횟수만큼의 반복을 쉽게 표현하기 위해 사용 
	// (※ 같은 코드가 3번 이상 반복 될 경우, 자동화 추천)
	// 몇번의 반복을 진행하는지 모르는 경우 (ex. 정확한 값을 입력했을 때에, 정확한 값을 요구하는 코드)
	
	// while 반복문

	int xi = 0; //while 반복을 위한 변수 선언
	while (xi<10) // ( ) 조건식이 true일 때에 { } body를 실행, 조건식이 false일 때에 반복문 탈출
	{
		xi++; //while을 탈출하기 위한 조건문

		printf("xi의 값 : %d\n", xi);
	}

	// for 반복문 ↔ while 반복문 표현
	// 반복의 횟수가 정해져있는 경우, for 반복문의 작성이 편함
	// 반복 횟수의 판별이 어려운 경우, while 반복문의 작성이 편함

	// 예) ??번 반복할 코드 작성
	
	// 2만큼 증가하는 정수형 변수 NumA
	// numA가 10보다 크거나 같을 때에 종료
	// numA의 숫자가 10보다 커지기 위해 반복된 횟수를 확인하고자 함
	// →  반복한 횟수를 CountA로 지정하여 출력
	int numA = 0;
	int CountA = 0;
	printf("\nnumA의 값을 입력해주세요 (단, 10보다 작아야 함)\n");
	scanf_s("%d", &numA);

	while (numA<10)
	{
		numA += 2;
		CountA++;

		if (numA >= 10) //특정 조건이 달성되면, 조건문을 탈출
		{
			printf("시작숫자에서 반복하여 더한 횟수 : %d\n\n", CountA);
			break;
		}
	}
	 
	// 실습 예제1
	// 1~10까지의 값을 printf로 출력해보시오
	// (단, for반복문은 짝수, while 반복문은 홀수)

	int forPrinting = 0;
	for (int i = 0; i < 10; i += 2)
	{
		forPrinting = forPrinting + 2;
		printf("for 반복문 출력값 : %d\n", forPrinting);
	}

	int whilePrinting = 1;
	while (whilePrinting < 10)
	{
		printf("while 반복문 출력값 : %d\n", whilePrinting);
		whilePrinting += 2;
		if (whilePrinting >= 10)
		{
			break;
		}
	}
	
}