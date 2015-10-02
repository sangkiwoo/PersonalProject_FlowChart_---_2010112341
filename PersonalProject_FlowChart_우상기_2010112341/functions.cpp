#include "functions.h"
#include <stdio.h>
/*
메뉴 목록을 표시하는 함수 만들기
*/
void Menulist()
{
	printf("1. 아메리카노 (Americano)\n");
	printf("2. 카페 라떼 (Caffe Latte)\n");
	printf("3. 카페 모카 (Caffe Mocha)\n");
	printf("4. 바닐라 크림 프라푸치노 (Vanilla Frappuccino Blended Creme)\n");
	printf("5. 딸기 크림 프라푸치노 (Strawberries & Creme Frappuccino Blended Creme)\n");
}

/*
음료 사이즈 관련 함수 만들기
*/
void Size()
{
	printf("\n1. Tall Size (355ml, 12oz) \n");
	printf("2. Grande Size (473ml, 16oz) \n");
	printf("3. Venti Size (591ml, 20oz) \n");
}

/*
옵션 리스트
*/
void Option()
{

	printf("\n1. 커피 \n2. Espresso Choice \n3. 시럽 \n4. 베이스 & 기타 \n");
	printf("5. 얼음 \n6. 휘핑 \n7. 드리즐 \n");

}

/*
Option 양 리스트
*/
void Option_Mag()
{
	printf("1. 적게 \n2. 보통 \n3. 많이 \n4. 없이 \n");
}
