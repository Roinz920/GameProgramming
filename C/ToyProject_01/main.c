
#include <stdio.h>
#include <stdbool.h>
#include "GameIntro.h"


/*
* F12 : [ 함수의 이름에 마우스 우클릭 → 정의로 이동 ]의 단축키
* 이름을 더블클릭 → F12 입력
* 
* Ctrl + '-'으로 되돌아가기
* 
* Ctrl + K + D : 자동 서식 맞춤 (들여쓰기를 default 방식으로 맞춰줍니다.)
* 
* Ctrl + K + C : 자동 주석 처리
* Ctrl + K + U : 자동 주석 처리 해제
*/

/*
* 간단한 약식 시스템 구현 완료
* 
* RPG - 무기강화 시스템
* - 조건문, 유저의 입력을 선택할 수 있게 만듦
* - if 조건문의 활용, printf, scanf
* - Upgrade, Currency, Random
* - 기능의 분리
* - 전역 변수 : 재화, 확률, 클리어 여부
* - extern을 사용해 전체에 필요한 변수를 공통으로 사용
* 
* 키보드 입력에 따라서 변화하는 것이 있으면 좋을 것 같다.
* 콘솔 창에서 'Player'를 구현 (InputKey를 활용)
* 이동 + 강화 시스템의 연동...? 까지는 힘들지도
*/

int main()
{
	
	IntroMenu();

	/*for (int i = 0; i < 10; i++)
	{
		int randomNumber = ReturnRandomValue();
		int randomNumber = ReturnRandomValue();
	}*/

}