#include "functions.h"
#include <stdio.h>
#include <string.h>		// String Header
#include <windows.h>	// Windows OS Header
#include <time.h>		// Sleep(500)
#include <stdlib.h>		// Standard Library Header
#include <conio.h>		// Console Input Output Error

/*
�޴� ����� ǥ���ϴ� �Լ� �����
*/
void Menulist()
{
	printf("1. �Ƹ޸�ī�� (Americano)\n");
	printf("2. ī�� �� (Caffe Latte)\n");
	printf("3. ī�� ��ī (Caffe Mocha)\n");
	printf("4. �ٴҶ� ũ�� ����Ǫġ�� (Vanilla Frappuccino Blended Creme)\n");
	printf("5. ���� ũ�� ����Ǫġ�� (Strawberries & Creme Frappuccino Blended Creme)\n");
}

/*
���� ������ ���� �Լ� �����
*/
void Size()
{
	printf("\n1. Tall Size (355ml, 12oz) \n");
	printf("2. Grande Size (473ml, 16oz) \n");
	printf("3. Venti Size (591ml, 20oz) \n");
}

/*
�ɼ� ����Ʈ
*/
void Option()
{

	printf("\n1. Ŀ�� \n2. Espresso Choice \n3. �÷� \n4. ���̽� & ��Ÿ \n");
	printf("5. ���� \n6. ���� \n7. �帮�� \n");

}

/*
Option �� ����Ʈ
*/
void Option_Mag()
{
	printf("1. ���� \n2. ���� \n3. ���� \n4. ���� \n");
}


/*
Option �ݺ� �Լ�
*/
int Option_Again(void)
{
	char opt_again;
	int a;

	while (1)
	{
		getchar();
		printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
		//opt_again= getchar();
		//fflush(stdin);
		scanf_s("%c", &opt_again, sizeof(opt_again));
		// ����ü �ȿ��� ������ �������� ����, �� �Լ� ������ ������ ������ ����
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
			printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n(Y/N) \n");
		}
		//break;
	}//�ݺ� while(1)
	return a;// optre;
}
