#include "functions.h"
#include <stdio.h>
#include <string.h>		// String Header
#include <windows.h>	// Windows OS Header
#include <time.h>		// Sleep(500)
#include <stdlib.h>		// Standard Library Header
#include <conio.h>		// Console Input Output Error

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


/*
Option 반복 함수
*/
int Option_Again(void)
{
	char opt_again;
	int a;

	while (1)
	{
		getchar();
		printf("또 다른 옵션을 선택하시겠습니까? (Y/N) \n");
		//opt_again= getchar();
		//fflush(stdin);
		scanf_s("%c", &opt_again, sizeof(opt_again));
		// 구조체 안에서 변수를 설정하지 말고, 이 함수 내에서 변수로 설정을 하자
		if (opt_again == 'Y' || opt_again == 'y')
		{
			a = 1;
			//optre = 1;
			break;
		}
		else if (opt_again == 'N' || opt_again == 'n')
		{
			a = 0;
			//optre = 0;
			break;
		}
		else
		{
			system("cls");
			printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n(Y/N) \n");
		}
		//break;
	}//반복 while(1)
	return a;// optre;
}
