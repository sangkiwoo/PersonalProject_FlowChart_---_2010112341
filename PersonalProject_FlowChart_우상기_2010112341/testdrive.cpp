/*
�� ���(SANGKI, WOO) / 2010112341

Personal Project
*/

#include <stdio.h>
#include <string.h>
#include <windows.h>

/*
ȸ������ ���� ���� ����ü �����
*/
struct member
{
	char name[50];	//ȸ�� �̸�
	int point;	//����Ʈī�� ������
	int yesmem;	//ȸ�� ����
	int menunum;	//�޴� ��ȣ
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
	char membership;	//ȸ�� ���� Ȯ��

	printf("ȸ���� ��� ���� extra 1ȸ �����Ͻʴϴ�. \n");
	while (1)
	{
		printf("ȸ���� ��� ���� extra 1ȸ �����Ͻʴϴ�. \n");
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
					printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n��Ÿ���� ȸ���̽ʴϱ�?(Y/N) \n");
				}
			}
	}
	return 0;
}