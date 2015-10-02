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



/////////////////////////////////////////////////////////////////////////////////
//MAIN
/////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	struct member mem1;
	char membership;	//회원 유무 확인

	printf("회원의 경우 무료 extra 1회 가능하십니다. \n");
	while (1)
	{
		printf("회원의 경우 무료 extra 1회 가능하십니다. \n");
			printf("Y/N \n");
			while (1)
			{

				getchar();
				scanf_s("%c", &membership, sizeof(membership));

				if (membership == 'Y' || membership == 'y')
				{
					//system("cls");
					printf("YYYYYYY\n");
				}

				else if (membership == 'N' || membership == 'n')
				{
					break;
				}
				else
				{
					//system("cls");
					printf("잘못 입력하셨습니다. 'Y' 또는 'N'을 제대로 입력해주세요. \n스타벅스 회원이십니까?(Y/N) \n");
				}
			}
	}
	return 0;
}