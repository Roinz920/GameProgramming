/*
Date : 2025-02-28
Name : 김정민
Subject : 함수의 사용법
*/

/*
* 함수 : input을 전달하면 output을 반환(return)한다.
		   A				B
* A데이터를 어딘가에 전달하여 B라는 결과값으로 반환한다.
* 
* A,B 변수	: 데이터타입과 이름 선언, 전달하기위한 변수 선언과 반환하기 위한 선언
* 어딘가	: 함수의 이름
* 전달		: 호출된 함수의 위치
* 
* void Uprgae() {}
  1.	void	: 반환 형태. B변수의 결과값의 타입을 정의. 반환값이 없다는 뜻
  2.	Uprage	: 함수의 이름
  3.	()		: 결과를 도출하기 위하 변수(매개변수)를 선언하는 장소. 이번의 경우에는 A변수 타입을 정의하는 곳. 아무것도 기입되지 않을 경우, void 타입
  4.	{}		: 코드가 정의되는 부분. body
*/

/*
* void 형태. 반환 형태에서는 생략이 불가능하지만, 매개변수에서는 해당 내용을 생략할 수 있음
   Upgrade(){} // 컴퓨터에서 인식 불가능
   → void Upgrade(){}
*/

#include <stdio.h>
#include <stdbool.h>

/*
* 반환값의 형태 → 없으면 void. 있으면 형태 정의 (int)
*/

int CurrentMoney = 100;

//아이템의 가치가 amount 구입할 수 있는지 없는지
// 조건문으로 코드를 나누어서 구현
// 비교 연산자 : 소지금 < 아이템 가치 → 돈 부족 → false 반환

bool IsMoneyEnough(int amount)
{
	return ((CurrentMoney >= amount) ? true : false);
}

void BuyItem(int price)
{
	if (IsMoneyEnough(price))
	{
		printf("아이템을 구매합니다.\n");
	}
	else
	{
		printf("소지금이 부족합니다.\n");
	}
}

void Example()
{
	printf("예시 출력\n");
}

int MultiplyNo(int input)
{
	int a = 10;
	return 10 * input; // 이 반환 명령어는 함수에 선언된 형태와 동일한 데이터타입을 반환함.
}

int main()
{
	//printf("Ch10!\n");

	//void 형태 함수 
	Example();
	//int를 반환하는 함수
	printf("결과값 출력 : %d\n", MultiplyNo(5));
	
	//true, false 반환 함수

	BuyItem(50);

}