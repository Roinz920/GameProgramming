/*
Date : 2025-02-20
Name : 김정민
Subject : Data의 표현방식
*/

/*
* 2가지의 타입 : 정수, 실수 + 문자열(숫자)
* int, char, short, long, longlong : 정수 타입
* float, double, decimal : 실수 타입
* 
* (사람 ↔ 사람) (컴퓨터 ↔ 사람)은 int를 어떻게 이해하는걸까>
*/

/*
* 정수를 표현하는 방법
* ※ 표현하는 키워드가 많다.
*    이유 : 최선의 메모리를 사용하기 위해서
* ※ 컴퓨터 정보를 읽는 최소 기본 단위 : 바이트 (byte) = 8 bit
*    비트 : □ 정보상자 하나에 (0,1)를 읽을 때의 단위
* 
*    1바이트      0000 0000   → 2^8 = 256 비트
* 
* ※ 10진수와 2진수 차이
*   16  (10진수)  0000 1000 (2진수)
*   127 (10진수)  0011 1111 (2진수)
* 
* char는 1byte                             00000000
* short는 2byte                   00000000 00000000
* int는 4byte   00000000 00000000 00000000 00000000
* 
*/

/*
* 뺼셈 : A - B 는 사실상 A + (-B)
* 정수 : 음수의 표현 방법 → byte의 한 bit를 희생하여서 표현
* 데이터 표현방식에서 가장 좌측 끝에 있는 bit에 정보를 할당 (MSB : Most Signmant Bit)
* 
* 2의 보수법 - 양수를 bit로 표현한 후, 모든 bit를 반전하여 1을 더함
*  +5는 char에서		00000101
*  -5는 char에서		11111011
*  +5 + (-5)를 하면   1 00000000
*                    ↑인식하지 못하는 숫자 제외됨
* 
* ※ 메모리 측면에서 char는 256가지의 숫자 표현 가능 (-127 ~ 128)
* unsighned char는 음수를 제외한 숫자 표현 가능 (0~256)
* 
*/

/*
*  실수를 표현하는 방식
* 2byte			00000000  00000000
* 8bit 8bit (절반은 정수? 절반은 실수?)
* 예?) 5.5 →	00000101  00000101
* 
* 그러나 5.4955 같은 숫자가 나왔을 떄에, 실수를 표현하는 bit의 수가 너무 적음 → 실수 표현 범위가 줄어드는 문제
* 
* 부동소수점 방식 : float 둥둥 떠 다니다.
* 
* 숫자를 0 <   <   10 사이의 수로 표현한다고 할 때에 (정규화 한다고 할 때에)
* * 125.88888
* → 1.2588888 * 10^2 라는 방식으로 변경
* 
* (정수)*정규화된 식^(지수)
* 
* 그 때문에 컴퓨터에서는 1과 1.0의 표현방식이 다름
* 
*/


/*
* int attackpower1 = 10 + 1 * 0.3;
* 
* 리터럴 상수
* int, double
* 1 * 0.3;
*							0.3
* → int로 정의될 때에		0
* → double로 정의될 때에	0.3
* 
* ※ 마이크로소프트 프로그램에서는 double로 정의함
* → double을 int로 정의하면 소숫점 아래의 데이터의 손실이 발생하기 때문 (계산 예측값의 오차 발생)
* 
* 참고로 float와 double의 차이는 할당되는 byte의 차이가 있음
* 
*/

/*
* 즉, 컴퓨터는 데이터 형태를 스스로 바꾸고 있음 (형변환)
* - 자동 : 묵시적 변환
* - 수동 : 명시적 변환
* 
* ※ 4byte의 데이터를 2byte나 1byte로 형변환 하면 데이터 정보가 손실 됨 (오버플로우)
* 
*/

#include <stdio.h>

int main()
{
	//printf("Chapter4!");

	int attackpower1 = 10 + 1 * 0.3;
	double attackpower2 = 10 + 1 * 0.3;

	printf("값 : %d\n", attackpower1);
	printf("값 : %lf\n", attackpower2); //%lf 좀 더 큰 범위를 표현하기 위함 (longfloat)

	printf("값의 표현 방식 실습\n");
	char num1 = 129;			// 
								// 01111111 (2진수) → +127 (10진수)
								// 10000001 (2진수) → -127 (10진수)
	printf("값 : %d\n", num1);

	int num2 = 129;				// 00000000  00000000  00000000  10000001
	char num3 = num2;
	printf("값 : %d\n", num1);
	printf("값 : %d\n", num2);
	printf("값 : %d\n", num3);

	/*
	* 컴퓨터에서는 데이터 타입이 다르면 문제가 발생할 수 있다.
	* → 해결할 수 있는 방법은?
	*/

	float num4 = 0.1;

	for (int i = 0; i < 1000; i++)
		num4 += 0.1;
	printf("값 : %f\n", num4);
}