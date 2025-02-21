/*
Date : 2025-02-21
Name : 김정민
Subject : 문자 표현방법, 데이터 타입의 변환
*/

/*
* 정수와 실수
* 정수를 표현하는 방법 : 부호비트 (MSB) → 음수 표현에서 보수처리 ※ unsigned
* 실수를 표현하는 방법 MSB / 가수와 지수를 통한 식 → 컴퓨터에서는 0 = 0.0 이 될 수 없음
*/

/*
* 프로그래밍을 위해서는 많은 데이터형 사용이 필요
* int, char, short, long
* float, double, decimal
* 
* 타입이 여러가지인 이유?
* → 편하게 사용하기 위해
* 
* ex.) int : 정수(그 긴거) + 4 byte ; 각각의 bit에는 0 또는 1을 저장하되, 마지막 bit는 부호를 지정한다. 단, 저장하는 bit의 개수는 32개이다. 
* ex.) char : 정수(그 긴거) + 1 byte ; 각각의 bit에는 0 또는 1을 저장하되, 마지막 bit는 부호를 지정한다. 단, 저장하는 bit의 개수는 8개이다. 
*/

/*
* 문자를 저장한다 = 컴퓨터에서 비트 값을 저장함
* Character 측면에서는 'a'라고 해석
* 정수 측면에서는 '97'이라고 해석
* 
* 숫자의 값에 단어를 매핑해 둠 (; 표준이라 함)
* ASCII (American Standard Code for Information Istitue)에 따름
* 
* 
*/

/*
* 4byte의 정수형 데이터의 이름을 'num'으로 하여 선언하시오. 이 때의 값은 10으로 초기화하시오.
*  int num = 10;
* 
*/

/*
* 상수 : 변하지 않는 수
* 
* 문자 그대로 (literal) → 리터럴 상수 : 컴퓨터 입장에서 가장 보편적으로 많이 사용하는 타입의 변환
* 10 ← 컴퓨터 '얘는 소숫점이 없네? 정수형태 저장해야지' int형
* 11.5 ← 컴퓨터 '얘는 소숫점이 있네? 실수 형태로 저장해야지' double형
* 
* 
* 
* 상징적인 (simbolic) → 심볼릭 상수 : 변하지 않는 고유한 이름을 지정하여 값이 변하지 않게 할 수 있음
* 
*/

/*
* 데이터형의 변환
* 자동 = 묵시적 변환
* 수동 = 명시적 변환
* 
* 명시적 변환 방법
* float fnum10 = 0.1f;
* int temInt = (int)fnum10;  ← 소괄호를 넣고 변수명을 지정하면 데이터형을 변환시킬 수 있음.
*/
#include <stdio.h>

int main()
{
	//printf("Chapter5!");

	int num1 = 10;
	char num2 = 2;
	short num3 = 5;

	printf("정수 데이터의 byte 크기 : %d\n", sizeof(num1));
	printf("정수 데이터의 byte 크기 : %d\n", sizeof(num2));
	printf("정수 데이터의 byte 크기 : %d\n", sizeof(num3));

	float fnum1 = 0.1f;
	double fnum2 = 0.1;
	printf("실수 데이터의 byte 크기 : %d\n", sizeof(fnum1));
	printf("실수 데이터의 byte 크기 : %d\n", sizeof(fnum2));

	printf("문자를 출력한다.\n");

	char c1 = 'a';
	printf("문자 : %c\n", c1); // 출력값 : a  
	printf("문자 : %d\n", c1); // 출력값 : 97 
	printf("문자 : %f\n", c1); // 출력값 : 0.000000

	// A~Z, a~z, 특수기호를 char에 매핑 됨 (할당해야할 숫자가 128개가 넘지 않았기 때문에)
	// 하지만 한글은 128개로 모두 표현 못하기 때문에 다른 데이터형 사용

	wchar_t charNum = L'뷁';

	printf("유니코드 값 : %d\n", charNum);

	printf("심볼릭 상수 예시\n");

	const double PI = 3.14;

	//PI = 3.141592; // 심볼릭 상수로 지정되어있어서 해당 이름에 새로운 숫자를 지정할 수 없음

	printf("값 출력 : %lf\n", PI);

	printf("예제 문제\n");
	//원의 넓이를 구하는 공식 = pi * r^2;
	//단, pi의 값을 무엇으로 고정할지 이야기하여 3.14로 고정되어있음. 다른 사람이 pi 값에 접근할 수 없도록 지정할 것.

	printf("원의 넓이 계산\n");
	const double pi = 3.14;
	double r;
	printf("반지름의 길이 :\n");
	scanf_s("%lf", &r);
	double circlearea = pi * r * r;
	printf("원의 넓이 : %lf\n", circlearea);

	//플레이어 요소
	// 체력, 공격력
	// 사망 (체력 <= 0) → 원래 체력으로 부활
	// 사망 후 기본 체력으로 부활해야함

	const int HP_max_player = 1000;
	int HP_current_player = 0;

	printf("현재 체력 : %d\n", HP_current_player);
	printf("캐릭터가 사망하였습니다.\n");
	printf("부활하시겠습니까?\n [ Y / N]\n");
	HP_current_player = HP_max_player;
	printf("현재 체력 : %d\n", HP_current_player);

	//명시적 변환
	float fnum10 = 0.1f;
	int tempInt = (int)fnum10;

	printf("값 : %d\n", tempInt);			// 출력값 : 0		← 형변환으로 인해 실수 부분 삭제
	printf("값 : %f\n", (float)tempInt);		// 출력값 : 0.000000 ← 삭제된 실수부분은 다시 형 변환을 하여도 복구되지 않고 휘발 됨

	//묵시적 변환
	// (case.1) 대입 연산자를 사용할 때에 두 변수의 타입이 다를 경우 발생

	float fnum11 = 0.1f;
	int tempInt2 = fnum11; 
	//데이터 선언 및 초기화의 목적으로 보았을 때에, tempInt2를 정수형으로 선언하기 위해 코드가 작성되었기 때문에 
	//오른쪽 타입을 자동으로 int 변환

	printf("값 : %d\n", tempInt2);
	printf("값 : %f\n", (float)tempInt2);

	// (case.2) 정수의 승격에 의한 자동 형변환
	// 컴퓨터 입장에서는 char, short를 4byte로 변환하여 계산 (int로 자동 형변환)
	// 레지스트리에 등록된 내용으로, 컴퓨터는 int로 계산하는게 제일 빠르기 때문임

	short ex1 = 15; // 15 → int로 변환
	short ex2 = 25; // 25 → int로 변환
	short ex3 = ex1 + ex2; // 15 + 25를 각각 int로 변환하여 계산 → short로 다시 변환

	// (case.3) 연산자의 자료 불일치가 생길 경우

	int baseattack = 10;
	int level = 1;
	double weight = 0.5;
	int AP = baseattack + level * weight; // 10 + ( 1 * 0.5 ) → 1 * 0.5 를 계산할 때에 자료형이 불일치
	// 정수 * 실수 → 실수형으로 계산하는게 데이터의 소실이 발생하지 않음.
	// 그러므로 (double)1 * 0.5 으로 계산
	// 10 + 0.5 → 10.5 로 double 형태로 계산
	// (int)AP = (int)(double) 10.5;

	// (case.3-2) 자료형의 불일치 (정수,정수)

	int abc = 128;
	char ccc = abc; //-128
	
	printf("%d\n", abc);
	printf("%d\n", ccc);

	// int 타입과 char 타입 교환
	// [ ]  [ ]  [ ]  [ ] ←                [ ] 일떄
	// [ ]  [ ]  [ ]  [ ] ← [ ]  [ ]  [ ]  [ ] 으로 변환하여 대입

	// 거꾸로
	// [ ]  [ ]  [ ]  [ ] →                [ ] 일떄
	//                [ ] →                [ ] 으로 변환하여 3byte에 대한 내용이 소실 됨
	
	// 그러므로 데이터형을 변활할 때에는 데이터의 손실이 가장 적은 방향으로 변환이 됨
	// (char → short →) int → long → float → double


}