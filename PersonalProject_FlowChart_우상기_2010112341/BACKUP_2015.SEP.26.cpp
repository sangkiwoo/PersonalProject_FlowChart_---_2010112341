/*
우 상기(SANGKI, WOO) / 2010112341

Personal Project
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

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

};

/*
메뉴 목록을 표시하는 함수 만들기
*/
void Menulist(void)
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
void Size(void)
{
	printf("\n1. Tall Size (355ml, 12oz) \n");
	printf("2. Grande Size (473ml, 16oz) \n");
	printf("3. Venti Size (591ml, 20oz) \n");
}

/*
옵션 리스트
*/
void Option(void)
{

	printf("1. 커피 \n2. Espresso Choice \n3. 시럽 \n4. 베이스 & 기타 \n");
	printf("5. 얼음 \n6. 휘핑 \n7. 드리즐 \n");

}


/////////////////////////////////////////////////////////////////////////////////
//MAIN
/////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	struct member mem1;

	int totalprice = 0;

	char membership;	//회원 유무 확인



	/*	STEP 01
	고객 이름 입력받기
	*/
	printf("고객님의 이름을 입력해주세요. \n");
	scanf_s("%s", mem1.name, sizeof(mem1.name));
	//	scanf_s함수는 scanf함수와 달리 문자와 문자열에 대해서는 저장공간의 크기값도 같이 줘야 합니다.
	system("cls");	//콘솔창 화면 지우기


	/*	STEP 02
	회원 유무 확인하기
	*/
	printf("환영합니다! %s님! \n\n%s 님은 스타벅스 회원이십니까? (Y/N) \n", mem1.name, mem1.name);
	printf("회원의 경우 무료 extra 1회 가능하십니다. \n");

	while (1)
	{
		getchar();
		scanf_s("%c", &membership, sizeof(membership));

		if (membership == 'Y' || membership == 'y')
		{
			system("cls");
			mem1.yesmem = 1;	//회원임을 기억함.
			//totalprice -= 600;
			break;
			/*
			회원이면 기존 데이터 베이스에서 잔여 포인트를 알려줄 수 잇는 루프를 만들도록 하자.
			*/
		}

		else if (membership == 'N' || membership == 'n')
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



	/* STEP 03
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
			printf("아메리카노(Americano)를 선택하셨습니다. \n");
			totalprice += 4100;
			break;
		}
		else if (mem1.menunum == 2)	//Caffe Latte
		{
			printf("카페 라떼 (Caffe Latte)를 선택하셨습니다. \n");
			totalprice += 4600;
			break;
		}
		else if (mem1.menunum == 3)
		{
			printf("카페 모카 (Caffe Mocha)를 선택하셨습니다. \n");
			totalprice += 5100;
			break;

		}
		else if (mem1.menunum == 4)
		{
			printf("바닐라 크림 프라푸치노 (Vanilla Frappuccino Blended Creme)를 선택하셨습니다. \n");
			totalprice += 4800;
			break;

		}
		else if (mem1.menunum == 5)
		{
			printf("딸기 크림 프라푸치노 (Strawberries & Creme Frappuccino Blended Creme)를 선택하셨습니다. \n");
			totalprice += 5600;
			break;

		}
		else
		{
			system("cls");
			printf("잘못된 번호를 입력하셨습니다. 새로 번호를 눌러주세요. \n\n");
		}

	}	//while(1)

	/* STEP 04
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
				printf("HOT xxx음료를 선택하셨습니다. \n");
				break;
			}
			else if (mem1.hc == 2)
			{
				system("cls");
				printf("COOL xxx음료를 선택하셨습니다. \n");
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
			printf("프라푸치노(Frappuccino) 메뉴의 경우 COOL음료만 주문 가능합니다. \n");
			break;

		}
		else
		{
			system("cls");
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n");
		}
	}


	/* STEP 05
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


	/* STEP 06
	Option 선택유무 결정하기
	*/
	while (1)
	{
		printf("퍼스널 옵션으로 나만의 음료를 만드시겠습니까? \n");
		printf("\n1. 예, 옵션을 선택합니다. \n2. 아니요, 옵션을 선택하지 않습니다. \n");
		scanf_s("%d", &mem1.opt);

		if (mem1.opt == 1)//퍼스널 옵션 선택함
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
				printf("샷 추가. 0~9까지 가능하십니다. 원하는 값을 입력해주세요. \n");
				scanf_s("%d", &mem1.opt2);
				totalprice += mem1.opt2 * 600;
				printf("추가 옵션을 선택하시겠습니까? (Y/N) \n");//subopt
				///////////////////////////////////////////////////////////////////
				//함수 써서 나타내자.

				break;
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
			//////////////////////////}


			break;
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
	}

	/* STEP 06
	Option List 결정하기
	*/
	system("cls");
	printf("TOTALPRICE = %d \n", totalprice);
	printf("TESTDRIVE \n");





	return 0;

}//main