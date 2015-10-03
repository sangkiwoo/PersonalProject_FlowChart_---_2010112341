/*
우 상기(SANGKI, WOO) / 2010112341

Personal Project
Make Siren Order using Flow Chart
*/

#include <stdio.h>		// Standard Input Output Header
#include <string.h>		// String Header
#include <windows.h>	// Windows OS Header
#include <time.h>		// Sleep(500)
#include <stdlib.h>		// Standard Library Header
#include <conio.h>		// Console Input Output Error

#include "functions.h"	// Header file for functions

/*
회원정보 내용 저장 구조체 만들기
*/
struct member
{
	char name[50];	//회원 이름

	int point;	//포인트카드 적립금
	int yesmem;	//회원 유무
	int menunum;	//메뉴 번호
	int hc;	//HOT/COOL
	int sizenum;
	int opt, subopt;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int valuepoint = 20000;
	int pomin;
	int cash;
	int opt_sy;
	int opt_sy_time; // 시럽 옵션 추가횟수
	int opt_bo;	//Base & Other Option

	char *menuname;
	char *hclabel;
	char membership = 0;	//회원 유무 확인
	char cup = 0;
	char nick[100];
	char pch = 0;
	char optag;
	char *opt_sy_name;
	char *opt_bo_name;
	//char cup[10];
};


/////////////////////////////////////////////////////////////////////////////////
//MAIN
/////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	struct member mem1;

	int totalprice = 0;
	int start;
	int i=0; //Option 회귀 변수
	int optre = 1;
	//int pomin;

	//char membership;	//회원 유무 확인
	//char cup;
	//char nick[50];

/*	STEP 01
Siren Order 시작하기
*/
	

	printf("스타벅스 Siren Order를 시작합니다! \n\n");
	//꾸미자!!
	while (1)
	{
		printf("1. Siren Order를 시작하시겠습니까? \n");
		printf("2. Siren Order를 종료하시겠습니까? \n");

		scanf_s("%d", &start);// , sizeof(start));

		if (start == 1)
		{
			system("cls");
			break;
		}
		else if (start == 2)
		{
			system("cls");	//이를 위해 #include <windows.h> 를 추가함.
			printf("Siren Order를 종료합니다. \n\n");
			return 0;
		}
		else
		{
			system("cls");
			printf("잘못 입력하셨습니다! 제대로 입력해주세요!\n\n");
		}
	}

	


/*	STEP 02
고객 이름 입력받기
*/

	printf("고객님의 이름을 입력해주세요. \n");
	scanf_s("%s", mem1.name, sizeof(mem1.name));	
	//	scanf_s함수는 scanf함수와 달리 문자와 문자열에 대해서는 저장공간의 크기값도 같이 줘야 합니다.
	system("cls");	//콘솔창 화면 지우기


/*	STEP 03	
회원 유무 확인하기
*/
	printf("환영합니다! %s님! \n\n%s 님은 스타벅스 회원이십니까? (Y/N) \n", mem1.name, mem1.name);
	printf("회원의 경우 무료 extra 1회 가능하십니다. \n");

	while (1)
	{
		getchar();
		scanf_s("%c", &mem1.membership, sizeof(mem1.membership));

		if (mem1.membership == 'Y' || mem1.membership == 'y')
		{
			system("cls");
			mem1.yesmem = 1;	//회원임을 기억함.
			//totalprice -= 600;
			break;
			/*
			회원이면 기존 데이터 베이스에서 잔여 포인트를 알려줄 수 잇는 루프를 만들도록 하자.
			*/
		}
		
		else if (mem1.membership == 'N' || mem1.membership == 'n')
		{
			system("cls");
			mem1.yesmem = 0;	//비회원임을 기억함.
			//printf("%s님은 회원이 아닙니다. \n", mem1.name);
			break;
		}
		else
		{
			system("cls");
			printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n스타벅스 회원이십니까? (Y/N) \n");
		}
	}



/* STEP 04
메뉴 선택하기
*/
	printf("%s님! \n메뉴를 고르시고 해당 메뉴의 번호를 입력해주세요. \n\n", mem1.name);
	while (1)
	{
		Menulist(); //함수를 이용하여 메뉴 목록 표시

		getchar();
		scanf_s("%d", &mem1.menunum);
		printf("%d", mem1.menunum);
		system("cls");

		if (mem1.menunum == 1)	//Americano
		{
			totalprice += 4100;
			mem1.menuname = "아메리카노(Americano)";
			break;
		}
		else if (mem1.menunum == 2)	//Caffe Latte
		{
			totalprice += 4600;
			mem1.menuname = "카페 라떼 (Caffe Latte)";
			break;
		}
		else if (mem1.menunum == 3)
		{
			totalprice += 5100;
			mem1.menuname = "카페 모카 (Caffe Mocha)";
			break;
		}
		else if (mem1.menunum == 4)
		{
			totalprice += 4800;
			mem1.menuname = "바닐라 크림 프라푸치노 (Vanilla Frappuccino Blended Creme)";
			break;
		}
		else if (mem1.menunum == 5)
		{
			totalprice += 5600;
			mem1.menuname = "딸기 크림 프라푸치노 (Strawberries & Creme Frappuccino Blended Creme)";
			break;
		}
		else 
		{
			system("cls");
			printf("잘못된 번호를 입력하셨습니다. 올바른 번호를 눌러주세요. \n\n");
		}
		
	}	//while(1)
		printf("%s를 선택하셨습니다. \n", mem1.menuname);


/* STEP 05
HOT/COOL 선택하기
*/

	//HOT / COOL 선택 가능한 경우
	while (1)
	{

		if (mem1.menunum == 1 || mem1.menunum == 2 || mem1.menunum == 3)
		{
			printf("\nHOT / COOL을 고르신 뒤 해당 번호를 눌러주세요. \n\n1. HOT \n2. COOL \n");
			scanf_s("%d", &mem1.hc);

				if (mem1.hc == 1)
				{
					system("cls");
					mem1.hclabel = "HOT";
					//printf("%s %s 음료를 선택하셨습니다. \n", mem1.hclabel, mem1.menuname);
					//printf("%s", a);
					break;
				}
				else if (mem1.hc == 2)
				{
					system("cls");
					mem1.hclabel = "COOL";
					//printf("%s %s 음료를 선택하셨습니다. \n", mem1.hclabel, mem1.menuname);
					break;
				}
				else
				{
					system("cls");
					printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
				}

		}//if (mem1.menunum == 1 || mem1.menunum == 2 || mem1.menunum == 3)

		//COOL만 선택 가능한 경우
		else if (mem1.menunum == 4 || mem1.menunum == 5)
		{
			system("cls");
			mem1.hclabel = "COOL";
			printf("프라푸치노(Frappuccino) 메뉴의 경우 COOL음료만 주문 가능합니다. \n");
			//printf("%s 음료를 선택하셨습니다. \n", mem1.menuname);
			break;

		}
		else
		{
			system("cls");
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
		}
	}
	printf("%s %s 음료를 선택하셨습니다. \n", mem1.hclabel, mem1.menuname);

/* STEP 06
SIZE 선택하기
*/



		printf("주문 확인하자 \n");
		printf("음료의 사이즈를 결정해주세요. \n");
		
		while (1)
		{
			Size(); //함수를 이용 사이즈 리스트 불러옴
			getchar();
			scanf_s("%d", &mem1.sizenum);
			printf("%d", mem1.sizenum);
			system("cls");

			if (mem1.sizenum == 1)
			{
				totalprice = totalprice + 0;
				break;
			}
			if (mem1.sizenum == 2)
			{
				totalprice = totalprice + 500;
				break;
			}
			else if (mem1.sizenum == 3)
			{
				totalprice = totalprice + 1000;
				break;
			}
			else
			{
				printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
				totalprice = totalprice + 0;
			}
		}
		
		
/* STEP 07
Option 선택유무 결정하기
*/
		//while (mem1.opt1 != 0)
		while (1)
		{
			printf("퍼스널 옵션으로 나만의 음료를 만드시겠습니까? \n");
			printf("\n1. 예, 옵션을 선택합니다. \n2. 아니요, 옵션을 선택하지 않습니다. \n");
			printf("옵션 선택 아직 불완전하다!\n");
			scanf_s("%d", &mem1.opt);

			if (mem1.opt == 1)//퍼스널 옵션 선택함
			{
				while (optre != 0)
				{
					system("cls");
					printf("퍼스널 옵션으로 나만의 음료 만들기 \n");
					printf("원하시는 옵션에 해당하는 번호를 입력하세요. \n");
					Option();
					////////////////////////////////////////////////////////////////////////////////////////
					// 옵션 선택으로 들어갑니다. 
					/////////////////////////////////////////////
					scanf_s("%d", &mem1.opt1);// , sizeof(mem1.opt1));

					if (mem1.opt1 == 1)//커피 샷추가
					{
						system("cls");
						printf("샷 추가. 0~9번 추가 가능하십니다. 원하는 값을 입력해주세요. \n");
						scanf_s("%d", &mem1.opt2);
						totalprice += mem1.opt2 * 600;
						printf("샷 추가를 %d 회 하셨습니다.\n", mem1.opt2);

						///////////////////////////////////////////////////////////////////
						//함수 써서 나타내자.
						while (1)//bb는 상수여도 괜찮음!
						{
							getchar();
							printf("또 다른 옵션을 선택하시겠습니까? (Y/N) \n");
							scanf_s("%c", &mem1.optag, sizeof(mem1.optag));
							if (mem1.optag == 'Y' || mem1.optag == 'y')
							{
								optre = 1;
								printf("AGAIN \n");
								break;
							}
							else if (mem1.optag == 'N' || mem1.optag == 'n')
							{
								optre = 0;
								break;
							}
							else
							{
								system("cls");
								printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n(Y/N) \n");
							}
							//break;
						}
						/////////////////////////////


						//break;
					}//if (mem1.opt1 == 1)//커피 샷추가

					else if (mem1.opt1 == 2)//Espresso Choice
					{
						system("cls");
						while (1)
						{

							printf("1. 과테말라 \n2. Esp.C(과테말라) \n");
							scanf_s("%d", &mem1.opt3);

							if (mem1.opt3 == 1)
							{
								system("cls");
								printf("'과테말라'를 선택하셨습니다. \n");
								break;
							}
							else if (mem1.opt3 == 2)
							{
								system("cls");
								printf("'Esp.C'를 선택하셨습니다. \n");
								totalprice += 300;
								break;
							}
							else
							{
								system("cls");
								printf("잘못 입력하셨습니다. \n");
							}
						}//while(1)
					}//else if
					else if (mem1.opt1 == 3) // 시럽 추가
					{
						system("cls");
						printf("시럽 추가. 0~9까지 가능하십니다. 원하시는 시럽에 해당하는 번호 입력해주세요. \n");
						printf("1. 바닐라 시럽 \n2. 헤이즐럿 시럽 \n3. 카라멜 시럽 \n4. 허니바닐라 시럽\n");
						scanf_s("%d", &mem1.opt_sy);
						if (mem1.opt_sy == 1)
						{
							mem1.opt_sy_name = "바닐라 시럽";
						}
						else if (mem1.opt_sy == 2)
						{
							mem1.opt_sy_name = "헤이즐럿 시럽";
						}
						else if (mem1.opt_sy == 3)
						{
							mem1.opt_sy_name = "카라멜 시럽";
						}
						else if (mem1.opt_sy == 4)
						{
							mem1.opt_sy_name = "허니바닐라 시럽";
						}
						printf("%s 시럽을 선택하셨습니다. 0~9번 추가 가능하십니다. 원하는 값을 입력해주세요. \n", mem1.opt_sy_name);
						scanf_s("%d", &mem1.opt_sy_time);
						totalprice += mem1.opt_sy_time * 600;
						printf("%s 추가를 %d 회 하셨습니다.\n", mem1.opt_sy_name, mem1.opt_sy_time);
					}
					else if (mem1.opt1 == 4) // Base & Others
					{
						system("cls");
						printf("원하시는 옵션의 번호를 입력해주세요. \n");
						printf("1. 물 \n2. 리드 \n3. 기타 \n");
						scanf_s("%d", &mem1.opt_bo);
						
						if (mem1.opt_bo == 1)//물 선택
						{
							system("cls");

							printf("%s를 선택하셨습니다. 세부 옵션을 선택해주세요.\n", mem1.opt_bo_name);////////////
							Option_Mag();

							//sacnf_s("%d", &mem1.opt_bo_mag);


						}
					}
					//break;
				}//while (optre != 0)
				
			}
			else if (mem1.opt == 2) //퍼스널 옵션 선택 안 함
			{
				break;
			}
			else
			{
				system("cls");
				printf("잘못 입력하셨습니다! \n");
			}
		}//while(1)

/* STEP 08
Option List 결정하기
*/


/* STEP 09
Option 증가 내용
*/

/* STEP 10
다른 옵션
*/
/* STEP 11
input 정보 출력
*/
		system("cls");
		printf("%s님! 주문 내역을 확인하겠습니다. \n", mem1.name);

/* STEP 12
음료 이름 정하기
*/
		//system("cls");
		printf("만드신 음료의 별명을 지어주세요! \n");
		printf("별명을 원치 않으시면 엔터(Enter)를 눌러주세요. 그냥 메뉴명이 출력 됩니다!\n");
		
		getchar();
		gets_s(mem1.nick);
		if (mem1.nick[0] == (char)NULL) //Enter
		{
			system("cls");
			printf("%s %s \n", mem1.hclabel, mem1.menuname); //옵션 관련 내용 추가하자!
		}
		else
		{
			system("cls");
			printf("%s\n", mem1.nick);
		}
			
/* STEP 13
추가 주문 여부 확인
*/

/* STEP 14
개인컵 존재 여부
*/
		
		printf("개인 컵을 가지고 오셨습니까?? %s 님?? (Y/N)\n", mem1.name);
		printf("개인 컵이 있으시면 300원 할인 가능합니다.\n");

		while (1)
		{
			//getchar();
			scanf_s("%c", &mem1.cup, sizeof(mem1.cup));
			
			if (mem1.cup == 'Y' || mem1.cup == 'y')
			{
				system("cls");
				printf("개인컵을 가지고 오셨습니다. 300원이 할인 되었습니다! \n");
				// 추가주문 고려해서 AND구문으로 할인 양 조절할 수 있게 하자.
				totalprice -= 300;
				break;
			}
			else if (mem1.cup == 'N' || mem1.cup == 'n')
			{
				system("cls");
				printf("개인컵이 없으십니다. 할인이 적용되지 않습니다! \n");
				break;
			}
			else
			{
				system("cls");
				printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n개인컵 있으십니까? (Y/N) \n");
			}
		}

/* STEP 15
최종 가격정보 출력
*/
		//system("cls");
		printf("\n최종 결제금액은 %d입니다. \n\n", totalprice);


		
/* STEP 16
포인트 사용
*/

		if (mem1.yesmem == 1)
		{
			printf("회원님께서 현재 가지고 계신 적립 포인트는 %d 입니다. \n", mem1.valuepoint);//값을 표시하자
			printf("포인트를 사용하시겠습니까?? (Y/N) \n");
			while (1)
			{
				getchar();
				scanf_s("%c", &mem1.pch, sizeof(mem1.pch));

				if (mem1.pch == 'Y' || mem1.pch == 'y') //포인트 사용
				{
					//system("cls");
					printf("포인트에서 얼마를 차감하시겠습니까? \n");
					scanf_s("%d", &mem1.pomin, sizeof(mem1.pomin));
					
					mem1.valuepoint -= mem1.pomin;
					totalprice -= mem1.pomin;

					system("cls");
					printf("잔여 포인트는 %d 입니다. \n", mem1.valuepoint);
					printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
					break;
				}
				else if (mem1.pch == 'N' || mem1.pch == 'n')
				{
					system("cls");
					printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
					break;
				}
				else
				{
					//system("cls");
					printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n포인트를 사용하시겠습니까? (Y/N) \n");
				}
			}
	

		}//if (mem1.yesmem == 1)
		else if (mem1.yesmem == 0)
		{
			printf("비회원이시므로 포인트 결제가 불가능 합니다. \n");
			printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
			//break;
		}

/* STEP 17
현금 결제 및 잔돈
*/
		///////////////수정 필요하다. 좀 더 깔끔하게!!
		while (1)
		{
			printf("현금을 주세요. \n");
			scanf_s("%d", &mem1.cash, sizeof(mem1.cash));

			if (mem1.cash < totalprice)
			{
				system("cls");
				printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
				printf("%d만큼이 부족합니다. 부족한 금액을 더 주세요. \n", totalprice - mem1.cash);
			}
			else if (mem1.cash >= totalprice)
			{
				system("cls");
				printf("현금 총 %d를 받았습니다. \n잔돈은 %d 입니다.\n", mem1.cash, mem1.cash - totalprice);
				break;
			}
			totalprice -= mem1.cash;
			//mem1.cash += mem1.cash;
		}
/* STEP 18
음료주문이 들어감
*/
		printf("주문하신 블라블라가 주문들어갔습니다. 3초 뒤에 음료가 완성됩니다. 잠시만 기다려주세요! \n");
		Sleep(1000);
		system("cls");
		printf(". \n");
		Sleep(500);
		system("cls");
		printf(".. \n");
		//system("cls");
		Sleep(500);
		system("cls");
		printf("... \n");
		//system("cls");
		Sleep(500);
		system("cls");
		printf(". \n");
		//system("cls");
		Sleep(500);
		system("cls");
		printf(".. \n");
		//system("cls");
		Sleep(500);
		system("cls");
		printf("... \n");
		system("cls");
		printf("음료가 완성되었습니다!\n");

/* STEP 19
END
*/
		printf("사이렌 오더(Siren Order)를 이용해주셔서 감사합니다! \n");
		system("PAUSE"); // Wait to exit program till the key input




	return 0;

}//main