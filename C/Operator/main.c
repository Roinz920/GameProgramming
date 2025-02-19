/*
Date : 2025-02-19
Name : 김정민
Subject : 연산자 이해 및 실습
*/

#include <stdio.h>
#include <stdbool.h>
//#include "Test.h"

/*
* #include <> : Visual Studio를 설치할 때에 설치된 소스파일을 가져올 때에 사용
* #incldue "" : 커스텀으로 제작한 파일로부터 불러올 때에 사용
*/

/*
* 
* num1 + num2
* 숫자 + 숫자
* 
* 단항 연산자
* 단일 변수와 결합하여 작동하는 연산자
* ex.) 음수인지 양수인지 표현해주는 부호 : +, - (-10, +10)
*      일치 불일치 여부 !, !=
* 
* 이항 연산자 : 2개의 '항'이 필요함
* → +,-,*,/
* 
* 삼항 연산자
* ? 1항 = 2항 : 3항
*/

/*
* 연산자의 쓰임새
* 비교 연산자 >, <, ==
* 산술 연산자 +, -, *, /, %
* 비트 연산자 (data type)
* 관계 연산자 (or , and) : || , &&
*/

/*
* 비교 연산자의 결과 : 참(true) 1, 거짓(false) 0
* stdbool.h 라이브러리를 추가 시, true & false로 표기
*/

int main()
{
	//printf("Hello Operator!");
	printf("연산자 실습1 (산술연산자)\n");

	int num1, num2;
	num1 = 10;
	num2 = 3;

	//덧셈
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	//뺄셈
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	//곱셈
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	//나누기
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	//나머지
	printf("%d 나머지 %d = % d\n", num1, num2, num1 % num2);

	printf("\n연산자 실습2 (비교연산자)\n");

	printf("비교 결과 num1 > num2 : %d\n", num1 > num2); // 참
	printf("비교 결과 num1 < num2 : %d\n", num1 < num2); // 거짓
		//num1 == num2;

	printf("\n연산자 실습3 (삼항연산자)\n");
	bool isTrue = true;
	bool isFalse = false;

	int result1 = num1 > num2;

	printf("삼항연산자 결과 출력 : %s \n", result1 ? "true" : "false");
	printf("삼항연산자 결과 출력 : %d \n", result1 ? 1 : 0);

	printf("\n연산자 실습4 (관계연산자)\n");

	// !num2 : num2가 아니다. false → true / true → false
	printf("관계 연산자 : %d\n", (num1 == num2) || (num1 < num2)); // num1 == num2 두 수가 같을 때
	printf("관계 연산자 : %d\n", (num1 != num2) && (num1 > num2)); // num1 != num2 두 수가 다를 때


	printf("\n연산자 실습5 (복합연산자)\n");

	int num3 = 2;
	int num4 = 5;
	//num3 = num3 + num4; // num3에 2+5의 값을 넣는다
	num3 != num4;

	// T += A; 자기 자신과 다음 수를 더하여 다시 자기 자신의 변수에 넣는 연산자 (T = T + A;)
	// T -= A; 자기 자신과 다음 수를 뺴서 다시 자기 자신의 변수에 넣는 연산자 (T = T - A;)
	printf("num3 + num4의 값 : %d\n", num3);

	printf("\n연산자 실습6 (후위연산자, 전위연산자)\n");

	printf("num3의 값 : %d\n", num3++);
	printf("num4의 값 : %d\n", ++num4);
	printf("num3의 값 : %d\n", num3);
	printf("num4의 값 : %d\n", num4);

	// 변수++ : 문장처리를 끝낸 후에 변수에 값을 1 추가 
	// ++변수 : 문장처리를 시작하기 전에 변수에 값을 1 추가


	//무기강화 스토리1.
		//무기를 강화할 때, n강일 떄의 무기, n+1강일 때의 무기정보를 표기하는 스토리

	float attackPower;
	int weaponSTR;
	int weaponbasedmg=30;
	int weaponupgradelevel=1;
	float weaponupgradefactor;
	float succesrate = 0.7 * 100;
	float downrate = 0.05 * 100;
	float failrate = (100 - succesrate - downrate);
	
	weaponupgradefactor = 0.5f;
	weaponSTR = weaponupgradelevel * 5;
	attackPower = weaponbasedmg + weaponSTR * weaponupgradefactor;

	printf("\n┌────  [ 강화 결과 비교 ] ───┐\n");
	printf("│ 현재 강화 단계 : %d         │\n", weaponupgradelevel );
	printf("│ 무기공격력 : %f     │\n", attackPower );
	printf("├────────────────────────────┤\n");
	weaponupgradelevel += 1;
	weaponSTR = weaponupgradelevel * 5;
	attackPower = weaponbasedmg + weaponSTR * weaponupgradefactor;
	printf("│ 다음 강화 단계 : %d         │\n", weaponupgradelevel);
	printf("│ 무기공격력 : %f     │\n", attackPower);
	printf("└────────────────────────────┘\n");
	weaponupgradelevel -= 1;

	// 게임의 스토리2.
	// 아이템의 인벤토리. Slot. 기탕 아이템 수집. Stack형 
	// 최대 아이템 개수 → 변수로 지정
	// Slot 최대 갯수 → 변수로 지정
	// A 아이템을 n개 획득, B 아이템을 m개 획득
	// 현재 인벤토리의 갯수가 가득 찼는지 안 찼는지 표현하는 결과 표현
	int SlotNo = 16;
	int ItemA;
	int ItemB;


	// 게임의 스토리3.

}