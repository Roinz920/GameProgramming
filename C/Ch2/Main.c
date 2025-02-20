/*
Date : 2025-02-18
Name : 김정민
Subject : 변수에 대한 이해
*/

#include <stdio.h> // google 검색, ChatGPT에 'C언어 입출력 담당 라이브러리' or DeepL 번역

int main()
{
	//int attackPower;
	//attackPower = 10;
	float attackPower;
	//attackPower = 10.5;

		//char weapontypetext[5]="melee";
	int weaponSTR;
	int weaponINT;
	int weaponbasedmg;
	int weaponupgradelevel;
	float weaponupgradefactor;
	float succesrate = 0.7 * 100;
	float downrate = 0.05 * 100;
	float failrate = (100 - succesrate - downrate);

	weaponbasedmg = 30;
	int weapontype = 0;
	// if (weapontype = 0)
	// {
	// 	weapontypetext = "melee";
	// }
	// else
	// {
	// 	weapontypetext = "magic";
	// }
	weaponupgradelevel = 0;
	if (weapontype = 0)
	{
		weaponupgradefactor = 0.5f;
		weaponSTR = weaponupgradelevel * 5;
		attackPower = weaponbasedmg + weaponSTR * weaponupgradefactor;
	}
	else
	{
		weaponupgradefactor = 0.4f;
		weaponINT = weaponupgradelevel * 3;
		attackPower = weaponbasedmg + weaponINT * weaponupgradefactor;
	}
		
	printf("아이템 강화 시스템\n");
	printf("아이템 이름 : %s (타입 : %s)\n", "itemname", "melee");
	printf("강화 확률(성공/유지/하락)\n(%f, % f, % f)\n", succesrate, failrate, downrate);
	printf("강화 시도\n\n");
	printf("강화 후, 무기의 공격력이 %f 되었습니다.\n\n", attackPower);




	int width, height, extent;

	printf("사각형의 넓이를 구합니다\n");
	printf("가로의 길이 : \n");
	scanf_s("%d", &width );
	printf("세로의 길이 : \n");
	scanf_s("%d", &height );
	
	extent = width * height;
	
	printf("사각형의 넓이는 %d 입니다.\n", extent);


}

/*
* 지역변수
* 변수 선언 : 아래와 같이 작성하여 선언.
* (데이터 타입) (변수의 이름); // "변수의 이름이 데이터타입의 성질을 갖는다." 라는 선언. Data는 가지고 있지 않음!
* 변수 초기화 : 변수에 최초로 값을 대입하는 작업 (이미 선언한 변수에 재선언 불가
* 
* 변수 사용을 위해서는 선언 후, 초기화해야 한다.
* 
* 연산자
* 사칙연산 : +, -, *, /
* 나머지, 몫 :
* 0,1bit 연산자
* 관계연산자 a > b, a < b
* 
* 변수의 이름 규칙
* 1. 변수의 시작 이름에 숫자가 들어가면 안된다.
* 2. 이름에 특수기호가 들어가면 안된다.
* 3. underbar, alphabet, number 사용가능
* 4. 이름 사이에 공백문자 사용불가
* 5. 키워드는 이름으로 사용불가
*/

// 예제
// 사각형의 넓이를 구하는 문제

// 정수형 데이터 선언, width, height
// 넓이 = 가로 x 세로
// 사각형의 넓이를 구합니다.
// 가로와 세로를 곱합니다.
//사각형의 넓이를 n입니다.

