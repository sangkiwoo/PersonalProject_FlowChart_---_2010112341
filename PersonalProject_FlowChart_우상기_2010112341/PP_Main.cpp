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
음료 내용 저장 구조체 만들기
*/
struct drink
{

	int optre = 1;	//옵션을 계속 진행하기 위한 변수
	int menunum;	//메뉴 번호
	int hc;	//HOT/COOL
	int sizenum;	//사이즈 결정 정수
	int opt_choice;	//퍼스널 옵션을 선택할지 확인 변수
	int opt1;	//옵션에 해당하는 번호
	int opt_shot;	//샷 추가 횟수
	int opt_esp_num;	//에스프레소 해당 번호
	int opt_sy_num;	//시럽 옵션
	int opt_sy_time; // 시럽 옵션 추가횟수
	int opt_bo_num;	//Base & Other Option
	int opt_bo_mag;// Base & Other magnitude
	int opt_sy_rep; //시럽 반복
	int opt_ice_mag;	//얼음 양 조절
	int opt_whip_rep;	//휘핑
	int opt_whip_num;// 휘핑 해당 번호
	int opt_driz_rep;//드리즐 추가할지 여부 묻는 변수
	int opt_driz_num;//드리즐 해당 번호
	int opt_driz_mag;//드리즐 양 결정 변ㄴ수
	int in;

	char *menuname;//메뉴 이름 문자열
	char *hclabel;//HOT/COOL 이름 문자열
	char *size_name;//사이즈 이름 문자열
	char cup = 0;//개인컵 있는지 확인 문자열
	char nick[100];//음료 별명 문자열
	char optag;//옵션 다시 선택 Y/N
	char *opt_name;//옵션 이름 문자열
	char *opt_esp_name;//옵션 에스프레소 이름 문자열
	char *opt_sy_name;//옵션 시럽 이름 문자열
	char *opt_bo_name;//옵션 Base & Others 이름 문자열
	char *opt_bo_subname;//옵션 Base & Others 물 양 이름 문자열
	char opt_sy_again;//옵션 또 다른 시럽 선택 Y/N
	char opt_lid;//리드 변경 선택 Y/N
	char *opt_lid_name;//리드 이름 문자열
	char opt_milk;//우유 선택 Y/N
	char *opt_milk_name;//우유 이름 문자열
	char *opt_ice_subname;//얼음 양 이름 문자열
	char *opt_whip_name;//휘핑크림 이름 문자열
	char *opt_driz_name;//드리즐 이름 문자열
	char *opt_driz_subname;//드리즐 양 이름 문자열
	char opt_driz_again;//또 다른 드리즐 추가 선택 Y/N

	char buffer[100]; //temporary space for saving order
	char order_check[500];	//for order display

};

/*
Main 함수
*/
int main(void)
{
	struct drink bev[3];//beverage
	system("mode con: lines=25 cols=80");

	int start;//사이렌 오더 시작
	bev[0].order_check[0] = 0; //주문 출력 초기화
	bev[1].order_check[0] = 0; //주문 출력 초기화
	bev[2].order_check[0] = 0; //주문 출력 초기화


	//고객 정보 관련 변수값 설정
	int totalprice = 0;
	int i; //drink increase - bev[i]
	int j = 0;//최종 음료 갯수 출력을 위한 
	int yesmem = 0;	//회원 유무
	int valuepoint = 0;	//유인나 100000, 아이유 80000, 박보영 60000 
	int pomin; //포인트 차감 양
	int cash;//받는 현금 양

	char bev_again; //또 다른 음료 주문 확인
	char name[100];	//회원 이름
	char *name_m1 = "유인나";//골드레벨
	char *name_m2 = "아이유";//그린레벨
	char *name_m3 = "박보영";//웰컴레벨 
	char membership = 0;	//회원 유무 확인
	char order_fin[100];//최종 음료 주문 들어갈 때 엩너
	char pch = 0; //포인트 사용 여부 확인 Y/N



	/*	STEP 01
	Siren Order 시작하기
	*/
	printf("□■■□□□■■□□□■■■□□■■■□□■■□□□■■□□\n"); //꾸밈
	printf("■□□■□■□□■□□■□■□□■□■□■□□■□■□□■□\n");
	printf("■□□□□■□□■□□■□□□□■□□□■■■■□■■■■□\n");
	printf("■□□□□■□□■□■■■□□■■■□□■□□□□■□□□□\n");
	printf("■□□■□■□□■□□■□□□□■□□□■□□■□■□□■□\n");
	printf("□■■□□□■■□□□■□□□□■□□□□■■□□□■■□□\n");
	printf("\n스타벅스 Siren Order를 시작합니다! \n\n");

	while (1) //오타 입력시 다시 질문 받기위한 루프구성
	{
		printf("1. Siren Order를 시작하시겠습니까? \n");
		printf("2. Siren Order를 종료하시겠습니까? \n");
		scanf_s("%d", &start);

		if (start == 1)
		{
			system("cls");
			break;
		}
		else if (start == 2)
		{
			system("cls");
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
	printf("(기존 회원 : 유인나, 아이유, 박보영) \n");
	scanf_s("%s", name, sizeof(name));
	system("cls");

	/*	STEP 03
	회원 유무 확인하기
	*/

	if (!strcmp(name, name_m1)) //입력받은 이름이 유인나와 같은지 확인
	{
		yesmem = 1;	//회원임을 기억함.
		valuepoint = 100000;
		printf("환영합니다! %s님! \n%s님께서는 골드 레벨 회원 이십니다! \n", name_m1, name_m1);
		printf("회원이시므로 무료 extra 1회 가능하십니다. \n\n");
		printf("%s님께서 가지고계신 적립 포인트는 %d점 입니다. \n\n", name_m1, valuepoint);
		printf("===============================================\n\n");
	}
	else if (!strcmp(name, name_m2))//입력받은 이름이 아이유와 같은지 확인
	{
		yesmem = 1;
		valuepoint = 80000;
		printf("환영합니다! %s님! \n%s님께서는 그린 레벨 회원 이십니다! \n", name_m2, name_m2);
		printf("회원이시므로 무료 extra 1회 가능하십니다. \n\n");
		printf("%s님께서 가지고계신 적립 포인트는 %d점 입니다. \n\n", name_m2, valuepoint);
		printf("===============================================\n\n");
	}
	else if (!strcmp(name, name_m3))//입력받은 이름이 박보영과 같은지 확인
	{
		yesmem = 1;
		valuepoint = 60000;
		printf("환영합니다! %s님! \n%s님께서는 웰컴 레벨 회원 이십니다! \n", name_m3, name_m3);
		printf("회원이시므로 무료 extra 1회 가능하십니다. \n\n");
		printf("%s님께서 가지고계신 적립 포인트는 %d점 입니다. \n\n", name_m3, valuepoint);
		printf("===============================================\n\n");
	}
	else//기존 회원과 일치 하지 않으므로 회원인지 여부를 묻는다.
	{
		printf("환영합니다! %s님! \n\n%s 님은 스타벅스 회원이십니까? (Y/N) \n", name, name);
		printf("회원의 경우 무료 extra 1회 가능하십니다. \n");

		while (1)//오타 입력시 다시 질문 받기위한 루프구성
		{
			getchar();
			scanf_s("%c", &membership, sizeof(membership));

			if (membership == 'Y' || membership == 'y')
			{
				system("cls");
				yesmem = 1;//회원임을 기억함
				break;
			}
			else if (membership == 'N' || membership == 'n')
			{
				system("cls");
				yesmem = 0;	//비회원임을 기억함.
				break;
			}
			else
			{
				system("cls");
				printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n스타벅스 회원이십니까? (Y/N) \n");
			}
		}
	}


	/* STEP 04
	메뉴 선택하기
	*/

	for (i = 0; i < 3;)//음료를 3잔까지 받을 수 있는 루프 구성
	{
		printf("원하시는 메뉴를 고르시고 해당 메뉴의 번호를 입력해주세요. \n\n");
		while (1)//오타 입력시 다시 질문 받기위한 루프구성
		{
			Menulist(); //메뉴 목록 표시 함수

			getchar();
			scanf_s("%d", &bev[i].menunum);//원하는 메뉴의 이름 받음
			system("cls");

			if (bev[i].menunum == 1)	//Americano
			{
				totalprice += 4100;
				bev[i].menuname = "아메리카노(Americano)";
				break;
			}
			else if (bev[i].menunum == 2)	//Caffe Latte
			{
				totalprice += 4600;
				bev[i].menuname = "카페 라떼 (Caffe Latte)";
				break;
			}
			else if (bev[i].menunum == 3) //Caffe Mocha
			{
				totalprice += 5100;
				bev[i].menuname = "카페 모카 (Caffe Mocha)";
				break;
			}
			else if (bev[i].menunum == 4)	//Vanilla Frappuccino Blended Creme
			{
				totalprice += 4800;
				bev[i].menuname = "바닐라 크림 프라푸치노 (Vanilla Frappuccino Blended Creme)";
				break;
			}
			else if (bev[i].menunum == 5)	//Strawberries & Creme Frappuccino Blended Creme
			{
				totalprice += 5600;
				bev[i].menuname = "딸기 크림 프라푸치노 (Strawberries & Creme Frappuccino Blended Creme)";
				break;
			}
			else
			{
				system("cls");
				printf("잘못된 번호를 입력하셨습니다. 올바른 번호를 눌러주세요. \n\n");
			}

		}	//while(1)
		printf("음료 %s를 선택하셨습니다. \n\n", bev[i].menuname);
		printf("===============================================\n");

		/* STEP 05
		HOT/COOL 선택하기
		*/

		//HOT / COOL 선택 가능한 경우 - 프라푸치노 제외한 모든 경우
		while (1)//오타 입력시 다시 질문 받기위한 루프구성
		{
			if (bev[i].menunum == 1 || bev[i].menunum == 2 || bev[i].menunum == 3)
			{
				printf("\nHOT / COOL을 고르신 뒤 해당 번호를 눌러주세요. \n\n1. HOT \n2. COOL \n");
				scanf_s("%d", &bev[i].hc);

				if (bev[i].hc == 1)
				{
					system("cls");
					bev[i].hclabel = "HOT";
					break;
				}
				else if (bev[i].hc == 2)
				{
					system("cls");
					bev[i].hclabel = "COOL";
					break;
				}
				else
				{
					system("cls");
					printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
				}

			}//if (mem1.menunum == 1 || mem1.menunum == 2 || mem1.menunum == 3)

			//COOL만 선택 가능한 경우
			else if (bev[i].menunum == 4 || bev[i].menunum == 5)
			{
				system("cls");
				bev[i].hclabel = "COOL";
				printf("프라푸치노(Frappuccino) 메뉴의 경우 COOL음료만 주문 가능합니다. \n");
				break;
			}
			else
			{
				system("cls");
				printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
			}
		}//while (1)

		printf("음료 %s %s 를 선택하셨습니다. \n\n", bev[i].hclabel, bev[i].menuname);
		printf("===============================================\n");
		/* STEP 06
		SIZE 선택하기
		*/

		printf("\n음료의 사이즈를 결정해주세요. \n");
		while (1)//오타 입력시 다시 질문 받기위한 루프구성
		{
			Size(); //함수를 이용 사이즈 리스트 불러옴
			getchar();
			scanf_s("%d", &bev[i].sizenum); //사이즈 값 받음
			system("cls");

			if (bev[i].sizenum == 1)
			{
				bev[i].size_name = "Tall Size";
				totalprice = totalprice + 0;
				break;
			}
			else if (bev[i].sizenum == 2)
			{
				bev[i].size_name = "Grande Size";
				totalprice = totalprice + 500;
				break;
			}
			else if (bev[i].sizenum == 3)
			{
				bev[i].size_name = "Venti Size";
				totalprice = totalprice + 1000;
				break;
			}
			else
			{
				printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
				totalprice = totalprice + 0;
			}
		}
		printf("음료 %s %s %s 를 선택하셨습니다. \n\n", bev[i].size_name, bev[i].hclabel, bev[i].menuname);
		printf("===============================================\n\n");

		/* STEP 07
		Option 선택유무 결정하기
		*/

		while (1)//오타 입력시 다시 질문 받기위한 루프구성
		{
			printf("퍼스널 옵션으로 나만의 음료를 만드시겠습니까? \n");
			printf("\n1. 예, 옵션을 선택합니다. \n2. 아니요, 옵션을 선택하지 않습니다. \n");
			scanf_s("%d", &bev[i].opt_choice, sizeof(bev[i].opt_choice));

			if (bev[i].opt_choice == 1)//퍼스널 옵션 선택함
			{
				while (bev[i].optre != 0)//여러가지 옵션을 받기 위한 루프
				{
					system("cls");
					printf("퍼스널 옵션으로 나만의 음료 만들기 \n");
					printf("원하시는 옵션에 해당하는 번호를 입력하세요. \n");

					while (1)//오타 입력시 다시 질문 받기위한 루프구성
					{
						Option();//옵션 리스트 출력 함수
						scanf_s("%d", &bev[i].opt1);//원하는 옵션의 값을 받음

						// 	샷추가	///////////////////////////////
						if (bev[i].opt1 == 1)//커피 샷추가
						{
							bev[i].opt_name = "샷 추가";
							system("cls");
							printf("%s 옵션을 선택하셨습니다. 0~9번 추가 가능하십니다. 원하는 값을 입력해주세요. \n", bev[i].opt_name);
							scanf_s("%d", &bev[i].opt_shot);//샷추가 횟수 받음
							totalprice += bev[i].opt_shot * 600;//추가 금액

							// 최종 주문내역 출력을 위한 문자열 설정 
							sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s를 %d회 추가하셨습니다. \n", bev[i].opt_name, bev[i].opt_shot);
							strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);
							puts(bev[i].buffer);

							bev[i].optre = Option_Again();	//Option 반복 함수
							break;
						}//if (mem1.opt1 == 1)//커피 샷추가

						//	에스프레소 초이스		//////////////////////////////// 
						else if (bev[i].opt1 == 2)//Espresso Choice
						{
							bev[i].opt_name = "Espresso Choice";
							system("cls");
							while (1)//오타 입력시 다시 질문 받기위한 루프구성
							{
								printf("1. 과테말라 \n2. Esp.C(과테말라) \n");
								scanf_s("%d", &bev[i].opt_esp_num);

								if (bev[i].opt_esp_num == 1)//과테말라
								{
									bev[i].opt_esp_name = "과테말라";
									system("cls");
									// 최종 주문내역 출력을 위한 문자열 설정 
									sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s로 '%s'를 선택하셨습니다. \n", bev[i].opt_name, bev[i].opt_esp_name);
									strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

									bev[i].optre = Option_Again();	//Option 반복 함수
									break;
								}

								else if (bev[i].opt_esp_num == 2)	//Esp.C
								{
									bev[i].opt_esp_name = "Esp.C";
									system("cls");
									totalprice += 300;
									// 최종 주문내역 출력을 위한 문자열 설정 
									sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s로 '%s'를 선택하셨습니다. \n", bev[i].opt_name, bev[i].opt_esp_name);
									strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

									bev[i].optre = Option_Again();	//Option 반복 함수
									break;
								}
								else
								{
									system("cls");
									printf("잘못 입력하셨습니다. \n");
								}
							}//while(1)
							break;
						}//else if

						// 시럽 추가	///////////////////////////////
						else if (bev[i].opt1 == 3)	//시럽 추가
						{
							bev[i].opt_name = "시럽 추가";
							system("cls");
							printf("%s 옵션을 선택하셨습니다. 원하시는 시럽에 해당하는 번호 입력해주세요. \n\n", bev[i].opt_name);
							while (bev[i].opt_sy_rep != 0) //추가 시럽용 루프 구성
							{
								printf("1. 바닐라 시럽 \n2. 헤이즐럿 시럽 \n3. 카라멜 시럽 \n4. 허니바닐라 시럽\n");

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									scanf_s("%d", &bev[i].opt_sy_num);
									//해당 시럽에 대한 이름값 저장
									if (bev[i].opt_sy_num == 1)
									{
										bev[i].opt_sy_name = "바닐라 시럽";
										break;
									}
									else if (bev[i].opt_sy_num == 2)
									{
										bev[i].opt_sy_name = "헤이즐럿 시럽";
										break;
									}
									else if (bev[i].opt_sy_num == 3)
									{
										bev[i].opt_sy_name = "카라멜 시럽";
										break;
									}
									else if (bev[i].opt_sy_num == 4)
									{
										bev[i].opt_sy_name = "허니바닐라 시럽";
										break;
									}
									else
									{
										printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
										bev[i].opt_sy_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s 을 선택하셨습니다. 0~9번 추가 가능하십니다. 원하는 값을 입력해주세요. \n", bev[i].opt_sy_name);
								scanf_s("%d", &bev[i].opt_sy_time);
								totalprice += bev[i].opt_sy_time * 600;

								// 최종 주문내역 출력을 위한 문자열 설정 
								sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s 추가를 %d 회 하셨습니다.\n\n", bev[i].opt_sy_name, bev[i].opt_sy_time);
								strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

								printf("또 다른 시럽을 추가하시겠습니까? (Y/N) \n");

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									scanf_s("%c", &bev[i].opt_sy_again, sizeof(bev[i].opt_sy_again));

									if (bev[i].opt_sy_again == 'Y' || bev[i].opt_sy_again == 'y')
									{
										bev[i].opt_sy_rep = 1;
										break;
									}
									else if (bev[i].opt_sy_again == 'N' || bev[i].opt_sy_again == 'n')
									{
										bev[i].opt_sy_rep = 0;
										break;
									}
									else
									{
										printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
									}
								}//while(1) 
							}//while (mem1.opt_sy_rep != 0)

							bev[i].optre = Option_Again();	//Option 반복 함수
							break;
						}//else if (mem1.opt1 == 3) 

						// Base & Others	///////////////////////////////////////
						else if (bev[i].opt1 == 4) // Base & Others
						{
							bev[i].opt_name = "Base & Others";
							system("cls");
							printf("원하시는 옵션의 번호를 입력해주세요. \n");
							printf("1. 물 \n2. 리드 \n3. 기타 \n");
							scanf_s("%d", &bev[i].opt_bo_num);

							if (bev[i].opt_bo_num == 1)//물 선택
							{
								system("cls");
								bev[i].opt_bo_name = "물";

								printf("%s를 선택하셨습니다. 세부 옵션을 선택해주세요.\n", bev[i].opt_bo_name);
								Option_Mag(); //옵션 양 출력 함수
								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									scanf_s("%d", &bev[i].opt_bo_mag, sizeof(bev[i].opt_bo_mag));

									if (bev[i].opt_bo_mag == 1) //적게
									{
										bev[i].opt_bo_subname = "적게";
										break;
									}
									else if (bev[i].opt_bo_mag == 2)	//보통
									{
										bev[i].opt_bo_subname = "보통";
										break;
									}
									else if (bev[i].opt_bo_mag == 3)	//많이
									{
										bev[i].opt_bo_subname = "많이";
										break;
									}
									else if (bev[i].opt_bo_mag == 4)	//없이
									{
										bev[i].opt_bo_subname = "없이";
										break;
									}
									else
									{
										printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
										bev[i].opt_bo_subname = "";
									}
								}//while(1)
								system("cls");
								// 최종 주문내역 출력을 위한 문자열 설정 
								sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s를 %s선택하셨습니다. \n", bev[i].opt_bo_name, bev[i].opt_bo_subname);
								strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

								bev[i].optre = Option_Again();	//Option 반복 함수
							}//if (mem1.opt_bo == 1)

							if (bev[i].opt_bo_num == 2)//리드 선택
							{
								system("cls");
								bev[i].opt_bo_name = "리드";

								printf("%s옵션을 선택하셨습니다. 세부 옵션을 선택해주세요.\n", bev[i].opt_bo_name);

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									printf("돔리드(Dome Lid)로 변경하시겠습니까? (Y/N)\n");
									scanf_s("%c", &bev[i].opt_lid, sizeof(bev[i].opt_lid));

									if (bev[i].opt_lid == 'Y' || bev[i].opt_lid == 'y')
									{
										bev[i].opt_lid_name = "돔리드(Dome Lid)";
										break;
									}
									else if (bev[i].opt_lid == 'N' || bev[i].opt_lid == 'n')
									{
										bev[i].opt_lid_name = "플랫리드(Flat Lid)";
										break;
									}
									else
									{
										system("cls");
										printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n(Y/N) \n");
									}
									break;
								}//while(1)
								system("cls");

								// 최종 주문내역 출력을 위한 문자열 설정 
								sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s를 선택하셨습니다. \n", bev[i].opt_lid_name);
								strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

								bev[i].optre = Option_Again();	//Option 반복 함수

							}//if (mem1.opt_bo == 2)

							if (bev[i].opt_bo_num == 3)//기타 선택
							{
								system("cls");
								bev[i].opt_bo_name = "기타";

								printf("%s를 선택하셨습니다. 세부 옵션을 선택해주세요.\n", bev[i].opt_bo_name);

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									printf("우유공간을 남겨주세요. (Y/N)\n");
									scanf_s("%c", &bev[i].opt_milk, sizeof(bev[i].opt_milk));

									if (bev[i].opt_milk == 'Y' || bev[i].opt_milk == 'y')
									{
										bev[i].opt_milk_name = "남깁니다.";
										break;
									}
									else if (bev[i].opt_milk == 'N' || bev[i].opt_milk == 'n')
									{
										bev[i].opt_milk_name = "남기지 않습니다.";
										break;
									}
									else
									{
										system("cls");
										printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n(Y/N) \n");
									}
								}//while(1)
								system("cls");

								// 최종 주문내역 출력을 위한 문자열 설정 
								sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "우유공간을 %s \n", bev[i].opt_milk_name);
								strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

								bev[i].optre = Option_Again();	//Option 반복 함수
							}//if (mem1.opt_bo == 2)
							break;
						}//	else if (mem1.opt1 == 4) // Base & Others

						// 얼음 /////////////////////////////////////////
						else if (bev[i].opt1 == 5) // 얼음
						{
							bev[i].opt_name = "얼음";
							system("cls");

							printf("%s 옵션을 선택하셨습니다. 세부 옵션을 선택해주세요.\n", bev[i].opt_name);
							Option_Mag(); // 옵션 양 출력 함수

							while (1)//오타 입력시 다시 질문 받기위한 루프구성
							{
								getchar();
								scanf_s("%d", &bev[i].opt_ice_mag, sizeof(bev[i].opt_ice_mag));

								if (bev[i].opt_ice_mag == 1) //적게
								{
									bev[i].opt_ice_subname = "적게";
									break;
								}
								else if (bev[i].opt_ice_mag == 2)	//보통
								{
									bev[i].opt_ice_subname = "보통으로";
									break;
								}
								else if (bev[i].opt_ice_mag == 3)	//많이
								{
									bev[i].opt_ice_subname = "많이";
									break;
								}
								else if (bev[i].opt_ice_mag == 4)	//없이
								{
									bev[i].opt_ice_subname = "없이";
									break;
								}
								else
								{
									printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
									bev[i].opt_ice_subname = "";
								}
							}//while(1)
							system("cls");

							// 최종 주문내역 출력을 위한 문자열 설정 
							sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s를 %s 선택하셨습니다. \n", bev[i].opt_name, bev[i].opt_ice_subname);
							strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

							bev[i].optre = Option_Again();	//Option 반복 함수
							break;
						}//	else if (mem1.opt1 == 5) // 얼음

						else if (bev[i].opt1 == 6)//휘핑 옵션
						{
							bev[i].opt_name = "휘핑크림";
							system("cls");
							printf("%s 옵션을 선택하셨습니다. 원하시는 휘핑에 해당하는 번호 입력해주세요. \n", bev[i].opt_name);

							while (bev[i].opt_whip_rep != 0) // 추가 휘핑크림 받는것을 포함하는 루프
							{
								printf("1. 일반 휘핑 \n2. 두유 휘핑 \n3. 초콜릿 휘핑 \n4. 에스프레소 휘핑 \n");

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									scanf_s("%d", &bev[i].opt_whip_num);

									if (bev[i].opt_whip_num == 1)
									{
										bev[i].opt_whip_name = "일반 휘핑";
										break;
									}
									else if (bev[i].opt_whip_num == 2)
									{
										bev[i].opt_whip_name = "두유 휘핑";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_whip_num == 3)
									{
										bev[i].opt_whip_name = "초콜릿 휘핑";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_whip_num == 4)
									{
										bev[i].opt_whip_name = "에스프레소 휘핑";
										totalprice += 600;
										break;
									}
									else
									{
										printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
										bev[i].opt_whip_name = "";
									}
								}//while(1)

								system("cls");

								// 최종 주문내역 출력을 위한 문자열 설정 
								sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s로 %s을 선택하셨습니다. \n", bev[i].opt_name, bev[i].opt_whip_name);
								strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

								break;
							}//while (mem1.opt_whip_rep != 0)

							bev[i].optre = Option_Again();	//Option 반복 함수
							break;
						}//else if (mem1.opt1 == 6)//휘핑 옵션

						// 드리즐 ///////////////////////////////////////////////////
						else if (bev[i].opt1 == 7) //Drizzle Option
						{
							bev[i].opt_name = "드리즐";
							system("cls");
							printf("%s 옵션을 선택하셨습니다. 원하시는 드리즐에 해당하는 번호 입력해주세요. \n", bev[i].opt_name);

							while (bev[i].opt_driz_rep != 0)
							{
								printf("1. 카라멜 플랑 드리즐 \n2. 카라멜 드리즐 \n3. 초콜릿 드리즐 \n");

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									scanf_s("%d", &bev[i].opt_driz_num);

									if (bev[i].opt_driz_num == 1)
									{
										bev[i].opt_driz_name = "카라멜 플랑";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_driz_num == 2)
									{
										bev[i].opt_driz_name = "카라멜";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_driz_num == 3)
									{
										bev[i].opt_driz_name = "초콜릿";
										totalprice += 600;
										break;
									}
									else
									{
										printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
										bev[i].opt_driz_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s 드리즐을 선택하셨습니다. 세부 옵션을 선택해주세요.\n", bev[i].opt_driz_name);
								Option_Mag();//옵션 양 출력 함수

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									getchar();
									scanf_s("%d", &bev[i].opt_driz_mag, sizeof(bev[i].opt_driz_mag));

									if (bev[i].opt_driz_mag == 1) //적게
									{
										bev[i].opt_driz_subname = "적게";
										break;
									}
									else if (bev[i].opt_driz_mag == 2)	//보통
									{
										bev[i].opt_driz_subname = "보통";
										break;
									}
									else if (bev[i].opt_driz_mag == 3)	//많이
									{
										bev[i].opt_driz_subname = "많이";
										break;
									}
									else if (bev[i].opt_driz_mag == 4)	//없이
									{
										bev[i].opt_driz_subname = "없이";
										break;
									}
									else
									{
										printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
										bev[i].opt_driz_subname = "";
									}

								}//while(1)

								system("cls");

								// 최종 주문내역 출력을 위한 문자열 설정 
								sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "%s드리즐을 %s 만큼 선택하셨습니다. \n", bev[i].opt_driz_name, bev[i].opt_driz_subname);
								strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

								printf("또 다른 드리즐을 추가하시겠습니까? (Y/N) \n");

								while (1)//오타 입력시 다시 질문 받기위한 루프구성
								{
									scanf_s("%c", &bev[i].opt_driz_again, sizeof(bev[i].opt_driz_again));

									if (bev[i].opt_driz_again == 'Y' || bev[i].opt_driz_again == 'y')
									{
										bev[i].opt_driz_rep = 1;
										break;
									}
									else if (bev[i].opt_driz_again == 'N' || bev[i].opt_driz_again == 'n')
									{
										bev[i].opt_driz_rep = 0;
										break;
									}
									else
									{
										printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
									}
								}//while(1) 
							}//while (mem1.opt_whip_rep != 0)

							bev[i].optre = Option_Again();	//Option 반복 함수
							break;
						}//else if (mem1.opt1 == 7) //드리즐 옵션

						else
						{
							system("cls");
							printf("잘못 입력하셨습니다. 원하시는 옵션의 번호를 제대로 다시 눌러주세요. \n");
						}
					}

				}//while (bev[i].optre != 0)
				break;
			}//if (bev[i].opt_choice == 1)


			else if (bev[i].opt_choice == 2) //퍼스널 옵션 선택 안 함
			{
				// 최종 주문내역 출력을 위한 문자열 설정 
				sprintf_s(bev[i].buffer, sizeof(bev[i].buffer), "퍼스널 옵션 없음. \n");
				strcat_s(bev[i].order_check, sizeof(bev[i].order_check), bev[i].buffer);

				break;
			}
			else
			{
				system("cls");
				printf("잘못 입력하셨습니다! \n");
			}
		}//Option while(1)

		/* STEP 08
		input 정보 출력 & 출력 정보 확인
		*/
		system("cls");
		printf("%s님! 주문 내역을 확인하겠습니다. \n\n", name);
		printf("음료 %s %s %s 를 선택하셨습니다. \n", bev[i].size_name, bev[i].hclabel, bev[i].menuname);
		printf("퍼스널 옵션 선택사항은 다음과 같습니다. \n");
		puts(bev[i].order_check); // 옵션 선택 최종 구문을 출력함.
		printf("===============================================\n\n");

		/* STEP 09
		음료 별명 정하기
		*/
		printf("만드신 음료의 별명을 지어주세요! \n");
		printf("별명을 원치 않으시면 엔터(Enter)를 눌러주세요. 그냥 메뉴명이 출력 됩니다!\n");

		getchar();
		gets_s(bev[i].nick, sizeof(bev[i].nick));
		if (bev[i].nick[0] == (char)NULL) //Enter, 별명 입력하지 않은 경우
		{
			system("cls");
			printf("'%s %s %s' 레시피가 완성되었습니다. \n\n", bev[i].size_name, bev[i].hclabel, bev[i].menuname);
		}
		else
		{
			system("cls");
			printf("'%s' 레시피가 완성되었습니다. \n\n", bev[i].nick);
		}

		/* STEP 10
		추가 주문 여부 확인
		*/

		printf("===============================================\n\n");
		printf("또 다른 음료를 추가하시겠습니까? (Y/N)\n");
		printf("최대 2잔까지 추가 가능합니다.(총 3잔 주문가능)\n");

		while (1)//오타 입력시 다시 질문 받기위한 루프구성
		{
			bev_again = getchar(); // 추가음료 선택 여부 확인
			fflush(stdin);

			if (bev_again == 'Y' || bev_again == 'y')
			{
				if (i < 3)//세잔까지 추가 가능하게끔 만든 루프
				{
					j = i;//최종 몇 잔을 주문했는지 잔 수 결정변수
					i++;
					system("cls");
					break;
				}
				else//세잔 넘어간 경우
				{
					printf("3잔 이상은 주문 불가능합니다. \n");
					break;
				}
			}
			else if (bev_again == 'N' || bev_again == 'n')
			{
				j = i;
				i = 3; //추가 주문 루프 빠져나오기 위한 값으로 설정
				system("cls");
				break;
			}
			else
			{
				printf("잘못 입력하셨습니다. 제대로 입력해주세요. \n");
			}
		}//while(1)
	}//for (i = 0; i < 3;)

	/* STEP 11
	최종 주문 내용 확인
	*/

	printf("%s님! 최종주문 내역을 확인하겠습니다. \n\n", name);
	printf("총 %d 잔을 주문한셨습니다.\n\n", j + 1);

	for (i = 0; i < j + 1; i++)//선택한 음료 수에 따라 출력 가능한 루프
	{
		printf("음료 %d : ", i + 1);
		puts(bev[i].nick);
		printf("%s %s %s. \n\n", bev[i].hclabel, bev[i].menuname, bev[i].size_name);
		puts(bev[i].order_check);
	}
	printf("===============================================\n\n");

	/* STEP 13
	개인컵 존재 여부
	*/

	printf("개인 컵을 가지고 오셨습니까?? %s 님?? (Y/N)\n", name);
	printf("개인 컵이 있으시면 300원 할인 가능합니다.\n");

	while (1)//오타 입력시 다시 질문 받기위한 루프구성
	{
		bev[i].cup = getchar();//개인컵 있는지 여부 확인값 받음
		fflush(stdin);

		if (bev[i].cup == 'Y' || bev[i].cup == 'y') //개인컵 있음
		{
			system("cls");
			printf("개인컵을 가지고 오셨습니다. 300원이 할인 되었습니다! \n\n");
			totalprice -= 300;
			break;
		}
		else if (bev[i].cup == 'N' || bev[i].cup == 'n')//개인컵 없음
		{
			system("cls");
			printf("개인컵이 없으십니다. 할인이 적용되지 않습니다! \n\n");
			break;
		}
		else
		{
			system("cls");
			printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n개인컵 있으십니까? (Y/N) \n");
		}
	}

	/* STEP 14
	최종 가격정보 출력
	*/

	//회원이고 옵션을 선택했으면 1회 extra무료
	if (yesmem == 1 && bev[i].opt_choice == 1)
	{
		totalprice -= 600;
	}
	else
	{
		totalprice -= 0;
	}
	printf("===============================================\n");

	printf("\n최종 결제금액은 %d입니다. \n\n", totalprice);

	/* STEP 15
	포인트 사용
	*/

	if (yesmem == 1 && valuepoint != 0)//회원이면서 포인트 있는 경우
	{
		printf("회원님께서 현재 가지고 계신 적립 포인트는 %d 입니다. \n", valuepoint);
		printf("포인트를 사용하시겠습니까?? (Y/N) \n");

		while (1)//오타 입력시 다시 질문 받기위한 루프구성
		{
			pch = getchar();//포인트 사용여부 확인 받음
			fflush(stdin);

			if (pch == 'Y' || pch == 'y') //포인트 사용
			{
				printf("포인트에서 얼마를 차감하시겠습니까? \n");
				scanf_s("%d", &pomin, sizeof(pomin));

				valuepoint -= pomin; // 포인트 차감
				totalprice -= pomin; // 결제금액 차감

				system("cls");
				printf("잔여 포인트는 %d 입니다. \n", valuepoint);

				if (totalprice != 0)//포인트로 모두 결제하지 않은 경우
				{
					printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
				}
				else//포인트로 모두 결제한 경우
				{
					printf("포인트로 모두 결제하셨으므로 현금결제를 진행하지 않습니다. \n");
				}
				break;
			}
			else if (pch == 'N' || pch == 'n')
			{
				system("cls");
				printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
				break;
			}
			else
			{
				printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n포인트를 사용하시겠습니까? (Y/N) \n");
			}
		}
	}

	else if (yesmem == 1 && valuepoint == 0)//회원이지만 포인트가 없는 경우
	{
		printf("회원이시지만 소유하신 포인트가 없으므로 포인트 결제가 불가능합니다. \n");
		printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
	}
	else if (yesmem == 0)//비회원인 경우
	{
		printf("비회원이시므로 포인트 결제가 불가능 합니다. \n");
		printf("현금결제 하실 금액은 %d 입니다. \n", totalprice);
	}

	/* STEP 16
	현금 결제 및 잔돈
	*/

	while (totalprice != 0)
	{
		printf("지불하실 현금을 입력해 주세요. \n");
		scanf_s("%d", &cash, sizeof(cash));

		if (cash < totalprice)//최종금액보다 돈을 덜 받은 경우
		{
			system("cls");
			printf("%d만큼이 부족합니다. 부족한 금액을 더 주세요. \n", totalprice - cash);
		}
		else if (cash > totalprice)//최종 금액보다 돈을 더 받은 경우
		{
			system("cls");
			printf("현금 총 %d를 받았습니다. \n잔돈은 %d 입니다.\n", cash, cash - totalprice);
			break;
		}
		totalprice -= cash;//받은 금액만큼 최종 금액에서 차감
	}

	/* STEP 17
	음료주문이 들어감
	*/

	printf("엔터를 누르면 음료의 주문이 들어갑니다. \n주문이 들어간 뒤 잠시 뒤에 음료가 완성됩니다. 잠시만 기다려주세요! \n");

	getchar();
	gets_s(order_fin, sizeof(order_fin));
	if (order_fin[0] == (char)NULL) //Enter
	{
		//시간이 진행됨을 꾸며본 부분
		system("cls");
		printf(". \n");
		Sleep(500);
		system("cls");
		printf(".. \n");
		Sleep(500);
		system("cls");
		printf("... \n");
		Sleep(500);
		system("cls");
		printf(". \n");
		Sleep(500);
		system("cls");
		printf(".. \n");
		Sleep(500);
		system("cls");
		printf("... \n");
		Sleep(500);
		system("cls");
		printf("주문하신 음료가 완성되었습니다!\n");
	}

	/* STEP 18
	END
	*/
	printf("사이렌 오더(Siren Order)를 이용해주셔서 감사합니다! \n\n");
	return 0;

}//main
