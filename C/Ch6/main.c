/*
Date : 2025-02-24
Name : 김정민
Subject : 코드의 흐름 제어
*/

/*
* main함수는 프로그램의 시작점으로
* 위에서부터 아래대로 순서대로 코드가 진행
*/

/*
* 디버깅 : 프로그램을 중단시켜서 코드를 확인하는 기능
* F9를 사용하여 중단점 생성&삭제 가능
*/

/*
* 코드의 흐름을 바꾸기 위해 필요한 것 : 조건문, 분기, branch
* 
* - if 문법 - 
* if() {}
* └ () : 조건
* └ {} : 몸체(body)
* 
* ※ 주의점 : if(); {}을 해버리면 if()와 {}가 분리되어서 조건문인 ()와 무관하게 그 다음 코드인 {}가 작동 됨
* 
* - if 문법(조건1) - 
* if // 주요 조건
* else // 나머지 모든 것
*/

/*
* 점수 기반 등급 산정 시스템
* 100점 이상 : S랭크
* 90점 이상 : A랭크
* 80점 이상 : B랭크
*/

/*
* 코드의 흐름 제어 → 조건에 따라 특정 부분만 실행하는 코드 작성
* if (true) {} 실행 / false 실행하지 않음
* 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> // time을 사용하기 위한 헤더파일

int main() // 프로그램의 시작점 main() 함수
{
	//printf("Chapter 6!\n");

	// if() ~ else 문
	printf("조건문 예제1\n"); 

	int count = 5; // int : 정수를 저장하겠다 (단, 32bit 크기 할당)

	if (count < 10) // if의 소괄호 안에는 true(1) 또는 false(0)가 뜨는 수식을 넣어야 함
	{
		printf("count의 값이 10보다 작습니다\n");
	}
	else
	{
		printf("count의 값이 10보다 크거나 같습니다.\n");
	}
	// if() ~ if else ~ else 문
	printf("예제 문제1\n");

	int score; 
	score = 89;

	if (score >= 100)
	{
		printf("S등급, 현재 점수 : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A등급, 현재 점수 : %d\n", score);
	}
	else
	{
		printf("B등급, 현재 점수 : %d\n", score);
	}

	// 숫자게임
	/*
	* 랜덤한 숫자 생성
	* 콘솔창에 숫자 입력
	* 랜덤 생성된 숫자보다 클 경우 : 숫자보다 큽니다!
	* 랜덤 생성된 숫자보다 작을 경우 : 숫자보다 작습니다!
	* 랜덤 생성된 숫자일 경우 : 정답!
	*/

	srand(time(NULL)); // 시간을 기반으로 한 시드 난수 초기화
	int randomNo = (rand() % 100) + 1; // 1~100까지의 랜덤 숫자 부여
	int searchNo = 0;
	int countNo = 1;

	printf("랜덤 숫자 : %d\n", randomNo);
	while (searchNo != randomNo)
	{
		printf("\n예상 숫자 입력 : ");
		scanf_s("%d", &searchNo);
		if (randomNo < searchNo)
		{
			printf("입력한 예상숫자가 랜덤 숫자보다 큽니다!\n");
			countNo++;
		}
		else if (randomNo > searchNo)
		{
			printf("입력한 예상숫자가 랜덤 숫자보다 작습니다!\n");
			countNo++;
		}
		else if (randomNo == searchNo)
		{
			printf("정답입니다!\n");
		}
	}
	
	printf("당신의 시도 횟수 : %d\n", countNo);

	// 예제 문제2
	// 숫자 맞추기 게임에서 문제를 맞춘 횟수에 따라 랭킹을 부여
	// 
	
	if (countNo == 1)	
		{
			printf("당신의 등급 : SS 랭크\n");
		}
	else if ((1 < countNo) && (countNo <= 3))
		{
			printf("당신의 등급 : S 랭크\n");
		}
	else if ((3 < countNo) && (countNo <= 5))
		{
			printf("당신의 등급 : B 랭크\n");
		}
	else
		{
			printf("당신의 등급 : C 랭크\n");
		}
	

	// switch문
	/* printf("switch 예제\n");
	switch (countNo)
	{
		case 1 : printf("당신의 등급 : S 랭크\n"); break;
		case 2 : printf("당신의 등급 : A 랭크\n"); break;
		case 3 : printf("당신의 등급 : B 랭크\n"); break;
		case 4 : printf("당신의 등급 : C 랭크\n"); break;
	}
	*/

	/*
	* 아래와 같은 코드일 때에는 case 1, case 2가 같은 결과값을 출력한다.
	switch (countNo)
	{
	case 1: 
	case 2: printf("당신의 등급 : A 랭크\n"); break;
	case 3: printf("당신의 등급 : B 랭크\n"); break;
	case 4: printf("당신의 등급 : C 랭크\n"); break;
	}
	*/

	/*
	* 점수 비교 랭킹, 횟수 기준 랭킹
	* 랭킹을 부여할 수 있는 스토리 작성
	*/



}
