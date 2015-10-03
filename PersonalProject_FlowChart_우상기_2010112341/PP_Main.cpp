/*
�� ���(SANGKI, WOO) / 2010112341

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
	int valuepoint = 20000;
	int pomin;
	int cash;
	int opt_sy;
	int opt_sy_time; // �÷� �ɼ� �߰�Ƚ��
	int opt_bo;	//Base & Other Option

	char *menuname;
	char *hclabel;
	char membership = 0;	//ȸ�� ���� Ȯ��
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
	int i=0; //Option ȸ�� ����
	int optre = 1;
	//int pomin;

	//char membership;	//ȸ�� ���� Ȯ��
	//char cup;
	//char nick[50];

/*	STEP 01
Siren Order �����ϱ�
*/
	

	printf("��Ÿ���� Siren Order�� �����մϴ�! \n\n");
	//�ٹ���!!
	while (1)
	{
		printf("1. Siren Order�� �����Ͻðڽ��ϱ�? \n");
		printf("2. Siren Order�� �����Ͻðڽ��ϱ�? \n");

		scanf_s("%d", &start);// , sizeof(start));

		if (start == 1)
		{
			system("cls");
			break;
		}
		else if (start == 2)
		{
			system("cls");	//�̸� ���� #include <windows.h> �� �߰���.
			printf("Siren Order�� �����մϴ�. \n\n");
			return 0;
		}
		else
		{
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�! ����� �Է����ּ���!\n\n");
		}
	}

	


/*	STEP 02
�� �̸� �Է¹ޱ�
*/

	printf("������ �̸��� �Է����ּ���. \n");
	scanf_s("%s", mem1.name, sizeof(mem1.name));	
	//	scanf_s�Լ��� scanf�Լ��� �޸� ���ڿ� ���ڿ��� ���ؼ��� ��������� ũ�Ⱚ�� ���� ��� �մϴ�.
	system("cls");	//�ܼ�â ȭ�� �����


/*	STEP 03	
ȸ�� ���� Ȯ���ϱ�
*/
	printf("ȯ���մϴ�! %s��! \n\n%s ���� ��Ÿ���� ȸ���̽ʴϱ�? (Y/N) \n", mem1.name, mem1.name);
	printf("ȸ���� ��� ���� extra 1ȸ �����Ͻʴϴ�. \n");

	while (1)
	{
		getchar();
		scanf_s("%c", &mem1.membership, sizeof(mem1.membership));

		if (mem1.membership == 'Y' || mem1.membership == 'y')
		{
			system("cls");
			mem1.yesmem = 1;	//ȸ������ �����.
			//totalprice -= 600;
			break;
			/*
			ȸ���̸� ���� ������ ���̽����� �ܿ� ����Ʈ�� �˷��� �� �մ� ������ ���鵵�� ����.
			*/
		}
		
		else if (mem1.membership == 'N' || mem1.membership == 'n')
		{
			system("cls");
			mem1.yesmem = 0;	//��ȸ������ �����.
			//printf("%s���� ȸ���� �ƴմϴ�. \n", mem1.name);
			break;
		}
		else
		{
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n��Ÿ���� ȸ���̽ʴϱ�? (Y/N) \n");
		}
	}



/* STEP 04
�޴� �����ϱ�
*/
	printf("%s��! \n�޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n", mem1.name);
	while (1)
	{
		Menulist(); //�Լ��� �̿��Ͽ� �޴� ��� ǥ��

		getchar();
		scanf_s("%d", &mem1.menunum);
		printf("%d", mem1.menunum);
		system("cls");

		if (mem1.menunum == 1)	//Americano
		{
			totalprice += 4100;
			mem1.menuname = "�Ƹ޸�ī��(Americano)";
			break;
		}
		else if (mem1.menunum == 2)	//Caffe Latte
		{
			totalprice += 4600;
			mem1.menuname = "ī�� �� (Caffe Latte)";
			break;
		}
		else if (mem1.menunum == 3)
		{
			totalprice += 5100;
			mem1.menuname = "ī�� ��ī (Caffe Mocha)";
			break;
		}
		else if (mem1.menunum == 4)
		{
			totalprice += 4800;
			mem1.menuname = "�ٴҶ� ũ�� ����Ǫġ�� (Vanilla Frappuccino Blended Creme)";
			break;
		}
		else if (mem1.menunum == 5)
		{
			totalprice += 5600;
			mem1.menuname = "���� ũ�� ����Ǫġ�� (Strawberries & Creme Frappuccino Blended Creme)";
			break;
		}
		else 
		{
			system("cls");
			printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. �ùٸ� ��ȣ�� �����ּ���. \n\n");
		}
		
	}	//while(1)
		printf("%s�� �����ϼ̽��ϴ�. \n", mem1.menuname);


/* STEP 05
HOT/COOL �����ϱ�
*/

	//HOT / COOL ���� ������ ���
	while (1)
	{

		if (mem1.menunum == 1 || mem1.menunum == 2 || mem1.menunum == 3)
		{
			printf("\nHOT / COOL�� ���� �� �ش� ��ȣ�� �����ּ���. \n\n1. HOT \n2. COOL \n");
			scanf_s("%d", &mem1.hc);

				if (mem1.hc == 1)
				{
					system("cls");
					mem1.hclabel = "HOT";
					//printf("%s %s ���Ḧ �����ϼ̽��ϴ�. \n", mem1.hclabel, mem1.menuname);
					//printf("%s", a);
					break;
				}
				else if (mem1.hc == 2)
				{
					system("cls");
					mem1.hclabel = "COOL";
					//printf("%s %s ���Ḧ �����ϼ̽��ϴ�. \n", mem1.hclabel, mem1.menuname);
					break;
				}
				else
				{
					system("cls");
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
				}

		}//if (mem1.menunum == 1 || mem1.menunum == 2 || mem1.menunum == 3)

		//COOL�� ���� ������ ���
		else if (mem1.menunum == 4 || mem1.menunum == 5)
		{
			system("cls");
			mem1.hclabel = "COOL";
			printf("����Ǫġ��(Frappuccino) �޴��� ��� COOL���Ḹ �ֹ� �����մϴ�. \n");
			//printf("%s ���Ḧ �����ϼ̽��ϴ�. \n", mem1.menuname);
			break;

		}
		else
		{
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
		}
	}
	printf("%s %s ���Ḧ �����ϼ̽��ϴ�. \n", mem1.hclabel, mem1.menuname);

/* STEP 06
SIZE �����ϱ�
*/



		printf("�ֹ� Ȯ������ \n");
		printf("������ ����� �������ּ���. \n");
		
		while (1)
		{
			Size(); //�Լ��� �̿� ������ ����Ʈ �ҷ���
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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
				totalprice = totalprice + 0;
			}
		}
		
		
/* STEP 07
Option �������� �����ϱ�
*/
		//while (mem1.opt1 != 0)
		while (1)
		{
			printf("�۽��� �ɼ����� ������ ���Ḧ ����ðڽ��ϱ�? \n");
			printf("\n1. ��, �ɼ��� �����մϴ�. \n2. �ƴϿ�, �ɼ��� �������� �ʽ��ϴ�. \n");
			printf("�ɼ� ���� ���� �ҿ����ϴ�!\n");
			scanf_s("%d", &mem1.opt);

			if (mem1.opt == 1)//�۽��� �ɼ� ������
			{
				while (optre != 0)
				{
					system("cls");
					printf("�۽��� �ɼ����� ������ ���� ����� \n");
					printf("���Ͻô� �ɼǿ� �ش��ϴ� ��ȣ�� �Է��ϼ���. \n");
					Option();
					////////////////////////////////////////////////////////////////////////////////////////
					// �ɼ� �������� ���ϴ�. 
					/////////////////////////////////////////////
					scanf_s("%d", &mem1.opt1);// , sizeof(mem1.opt1));

					if (mem1.opt1 == 1)//Ŀ�� ���߰�
					{
						system("cls");
						printf("�� �߰�. 0~9�� �߰� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n");
						scanf_s("%d", &mem1.opt2);
						totalprice += mem1.opt2 * 600;
						printf("�� �߰��� %d ȸ �ϼ̽��ϴ�.\n", mem1.opt2);

						///////////////////////////////////////////////////////////////////
						//�Լ� �Ἥ ��Ÿ����.
						while (1)//bb�� ������� ������!
						{
							getchar();
							printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
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
								printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n(Y/N) \n");
							}
							//break;
						}
						/////////////////////////////


						//break;
					}//if (mem1.opt1 == 1)//Ŀ�� ���߰�

					else if (mem1.opt1 == 2)//Espresso Choice
					{
						system("cls");
						while (1)
						{

							printf("1. ���׸��� \n2. Esp.C(���׸���) \n");
							scanf_s("%d", &mem1.opt3);

							if (mem1.opt3 == 1)
							{
								system("cls");
								printf("'���׸���'�� �����ϼ̽��ϴ�. \n");
								break;
							}
							else if (mem1.opt3 == 2)
							{
								system("cls");
								printf("'Esp.C'�� �����ϼ̽��ϴ�. \n");
								totalprice += 300;
								break;
							}
							else
							{
								system("cls");
								printf("�߸� �Է��ϼ̽��ϴ�. \n");
							}
						}//while(1)
					}//else if
					else if (mem1.opt1 == 3) // �÷� �߰�
					{
						system("cls");
						printf("�÷� �߰�. 0~9���� �����Ͻʴϴ�. ���Ͻô� �÷��� �ش��ϴ� ��ȣ �Է����ּ���. \n");
						printf("1. �ٴҶ� �÷� \n2. ������ �÷� \n3. ī��� �÷� \n4. ��ϹٴҶ� �÷�\n");
						scanf_s("%d", &mem1.opt_sy);
						if (mem1.opt_sy == 1)
						{
							mem1.opt_sy_name = "�ٴҶ� �÷�";
						}
						else if (mem1.opt_sy == 2)
						{
							mem1.opt_sy_name = "������ �÷�";
						}
						else if (mem1.opt_sy == 3)
						{
							mem1.opt_sy_name = "ī��� �÷�";
						}
						else if (mem1.opt_sy == 4)
						{
							mem1.opt_sy_name = "��ϹٴҶ� �÷�";
						}
						printf("%s �÷��� �����ϼ̽��ϴ�. 0~9�� �߰� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n", mem1.opt_sy_name);
						scanf_s("%d", &mem1.opt_sy_time);
						totalprice += mem1.opt_sy_time * 600;
						printf("%s �߰��� %d ȸ �ϼ̽��ϴ�.\n", mem1.opt_sy_name, mem1.opt_sy_time);
					}
					else if (mem1.opt1 == 4) // Base & Others
					{
						system("cls");
						printf("���Ͻô� �ɼ��� ��ȣ�� �Է����ּ���. \n");
						printf("1. �� \n2. ���� \n3. ��Ÿ \n");
						scanf_s("%d", &mem1.opt_bo);
						
						if (mem1.opt_bo == 1)//�� ����
						{
							system("cls");

							printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem1.opt_bo_name);////////////
							Option_Mag();

							//sacnf_s("%d", &mem1.opt_bo_mag);


						}
					}
					//break;
				}//while (optre != 0)
				
			}
			else if (mem1.opt == 2) //�۽��� �ɼ� ���� �� ��
			{
				break;
			}
			else
			{
				system("cls");
				printf("�߸� �Է��ϼ̽��ϴ�! \n");
			}
		}//while(1)

/* STEP 08
Option List �����ϱ�
*/


/* STEP 09
Option ���� ����
*/

/* STEP 10
�ٸ� �ɼ�
*/
/* STEP 11
input ���� ���
*/
		system("cls");
		printf("%s��! �ֹ� ������ Ȯ���ϰڽ��ϴ�. \n", mem1.name);

/* STEP 12
���� �̸� ���ϱ�
*/
		//system("cls");
		printf("����� ������ ������ �����ּ���! \n");
		printf("������ ��ġ �����ø� ����(Enter)�� �����ּ���. �׳� �޴����� ��� �˴ϴ�!\n");
		
		getchar();
		gets_s(mem1.nick);
		if (mem1.nick[0] == (char)NULL) //Enter
		{
			system("cls");
			printf("%s %s \n", mem1.hclabel, mem1.menuname); //�ɼ� ���� ���� �߰�����!
		}
		else
		{
			system("cls");
			printf("%s\n", mem1.nick);
		}
			
/* STEP 13
�߰� �ֹ� ���� Ȯ��
*/

/* STEP 14
������ ���� ����
*/
		
		printf("���� ���� ������ ���̽��ϱ�?? %s ��?? (Y/N)\n", mem1.name);
		printf("���� ���� �����ø� 300�� ���� �����մϴ�.\n");

		while (1)
		{
			//getchar();
			scanf_s("%c", &mem1.cup, sizeof(mem1.cup));
			
			if (mem1.cup == 'Y' || mem1.cup == 'y')
			{
				system("cls");
				printf("�������� ������ ���̽��ϴ�. 300���� ���� �Ǿ����ϴ�! \n");
				// �߰��ֹ� ����ؼ� AND�������� ���� �� ������ �� �ְ� ����.
				totalprice -= 300;
				break;
			}
			else if (mem1.cup == 'N' || mem1.cup == 'n')
			{
				system("cls");
				printf("�������� �����ʴϴ�. ������ ������� �ʽ��ϴ�! \n");
				break;
			}
			else
			{
				system("cls");
				printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n������ �����ʴϱ�? (Y/N) \n");
			}
		}

/* STEP 15
���� �������� ���
*/
		//system("cls");
		printf("\n���� �����ݾ��� %d�Դϴ�. \n\n", totalprice);


		
/* STEP 16
����Ʈ ���
*/

		if (mem1.yesmem == 1)
		{
			printf("ȸ���Բ��� ���� ������ ��� ���� ����Ʈ�� %d �Դϴ�. \n", mem1.valuepoint);//���� ǥ������
			printf("����Ʈ�� ����Ͻðڽ��ϱ�?? (Y/N) \n");
			while (1)
			{
				getchar();
				scanf_s("%c", &mem1.pch, sizeof(mem1.pch));

				if (mem1.pch == 'Y' || mem1.pch == 'y') //����Ʈ ���
				{
					//system("cls");
					printf("����Ʈ���� �󸶸� �����Ͻðڽ��ϱ�? \n");
					scanf_s("%d", &mem1.pomin, sizeof(mem1.pomin));
					
					mem1.valuepoint -= mem1.pomin;
					totalprice -= mem1.pomin;

					system("cls");
					printf("�ܿ� ����Ʈ�� %d �Դϴ�. \n", mem1.valuepoint);
					printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
					break;
				}
				else if (mem1.pch == 'N' || mem1.pch == 'n')
				{
					system("cls");
					printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
					break;
				}
				else
				{
					//system("cls");
					printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n����Ʈ�� ����Ͻðڽ��ϱ�? (Y/N) \n");
				}
			}
	

		}//if (mem1.yesmem == 1)
		else if (mem1.yesmem == 0)
		{
			printf("��ȸ���̽ùǷ� ����Ʈ ������ �Ұ��� �մϴ�. \n");
			printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
			//break;
		}

/* STEP 17
���� ���� �� �ܵ�
*/
		///////////////���� �ʿ��ϴ�. �� �� ����ϰ�!!
		while (1)
		{
			printf("������ �ּ���. \n");
			scanf_s("%d", &mem1.cash, sizeof(mem1.cash));

			if (mem1.cash < totalprice)
			{
				system("cls");
				printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
				printf("%d��ŭ�� �����մϴ�. ������ �ݾ��� �� �ּ���. \n", totalprice - mem1.cash);
			}
			else if (mem1.cash >= totalprice)
			{
				system("cls");
				printf("���� �� %d�� �޾ҽ��ϴ�. \n�ܵ��� %d �Դϴ�.\n", mem1.cash, mem1.cash - totalprice);
				break;
			}
			totalprice -= mem1.cash;
			//mem1.cash += mem1.cash;
		}
/* STEP 18
�����ֹ��� ��
*/
		printf("�ֹ��Ͻ� ����� �ֹ������ϴ�. 3�� �ڿ� ���ᰡ �ϼ��˴ϴ�. ��ø� ��ٷ��ּ���! \n");
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
		printf("���ᰡ �ϼ��Ǿ����ϴ�!\n");

/* STEP 19
END
*/
		printf("���̷� ����(Siren Order)�� �̿����ּż� �����մϴ�! \n");
		system("PAUSE"); // Wait to exit program till the key input




	return 0;

}//main