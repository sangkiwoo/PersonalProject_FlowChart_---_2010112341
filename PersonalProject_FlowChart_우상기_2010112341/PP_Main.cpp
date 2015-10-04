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
	int yesmem=0;	//ȸ�� ����
	int menunum;	//�޴� ��ȣ
	int hc;	//HOT/COOL
	int sizenum;
	int opt, subopt;
	int opt1, opt2, opt3, opt4, opt5, opt6, opt7;
	int valuepoint = 20000;
	int pomin;
	int cash;
	int opt_sy;	//�÷� �ɼ�
	int opt_sy_time; // �÷� �ɼ� �߰�Ƚ��
	int opt_bo;	//Base & Other Option
	int opt_bo_mag;// Base & Other magnitude
	int opt_sy_rep; //�÷� �ݺ�
	int opt_ice_mag;
	int opt_whip_rep;
	int opt_whip;
	int opt_driz_rep;
	int opt_driz;
	int opt_driz_mag;

	char *menuname;
	char *hclabel;
	char membership = 0;	//ȸ�� ���� Ȯ��
	char cup = 0;
	char nick[100];
	char pch = 0;
	char optag;
	char *opt_sy_name;
	char *opt_bo_name;
	char *opt_bo_subname;
	char opt_sy_again;
	char opt_lid;
	char *opt_lid_name;
	char opt_milk;
	char *opt_milk_name;
	char *opt_ice_name;
	char *opt_ice_subname;
	char *opt_whip_name;
	char *opt_whip_subname;
	char *opt_driz_name;
	char *opt_driz_subname;
	char *opt_driz_sizename;
	char opt_driz_again;
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
	}//while (1)
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
					while (1)
					{

						
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
							}//�ݺ� while(1)
							break;
						}//if (mem1.opt1 == 1)//Ŀ�� ���߰�

						else if (mem1.opt1 == 2)//Espresso Choice
						{
							system("cls");
							while (1)
							{

								printf("1. ���׸��� \n2. Esp.C(���׸���) \n");
								scanf_s("%d", &mem1.opt3);

								if (mem1.opt3 == 1)//���׸���
								{
									system("cls");
									printf("'���׸���'�� �����ϼ̽��ϴ�. \n");
									while (1)//bb�� ������� ������!
									{
										getchar();
										printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
										scanf_s("%c", &mem1.optag, sizeof(mem1.optag));
										if (mem1.optag == 'Y' || mem1.optag == 'y')
										{
											optre = 1;
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
										break;
									}//�ݺ� while(1)
									break; 
								}
								
								else if (mem1.opt3 == 2)	//Esp.C
								{
									system("cls");
									printf("'Esp.C'�� �����ϼ̽��ϴ�. \n");
									totalprice += 300;
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
										break;
									}//�ݺ� while(1)
									break;
								}
								else
								{
									system("cls");
									printf("�߸� �Է��ϼ̽��ϴ�. \n");
								}
							}//while(1)
							break;
						}//else if

						//	�÷� �߰�	////////////////////////////////////////////////////////////////////////////////////////
						else if (mem1.opt1 == 3)
						{
							system("cls");
							printf("�÷� �߰�. 0~9���� �����Ͻʴϴ�. ���Ͻô� �÷��� �ش��ϴ� ��ȣ �Է����ּ���. \n");
							while (mem1.opt_sy_rep != 0)
							{
								system("cls");
								//printf("�÷� �߰�. 0~9���� �����Ͻʴϴ�. ���Ͻô� �÷��� �ش��ϴ� ��ȣ �Է����ּ���. \n");
								printf("1. �ٴҶ� �÷� \n2. ������ �÷� \n3. ī��� �÷� \n4. ��ϹٴҶ� �÷�\n");

								while (1)
								{
									getchar();
									scanf_s("%d", &mem1.opt_sy);

									if (mem1.opt_sy == 1)
									{
										mem1.opt_sy_name = "�ٴҶ� �÷�";
										break;
									}
									else if (mem1.opt_sy == 2)
									{
										mem1.opt_sy_name = "������ �÷�";
										break;
									}
									else if (mem1.opt_sy == 3)
									{
										mem1.opt_sy_name = "ī��� �÷�";
										break;
									}
									else if (mem1.opt_sy == 4)
									{
										mem1.opt_sy_name = "��ϹٴҶ� �÷�";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem1.opt_sy_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s �÷��� �����ϼ̽��ϴ�. 0~9�� �߰� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n", mem1.opt_sy_name);
								scanf_s("%d", &mem1.opt_sy_time);
								totalprice += mem1.opt_sy_time * 600;
								printf("%s �߰��� %d ȸ �ϼ̽��ϴ�.\n", mem1.opt_sy_name, mem1.opt_sy_time);

								getchar();
								printf("�� �ٸ� �÷��� �߰��Ͻðڽ��ϱ�? (Y/N) \n");

								while (1)
								{
									scanf_s("%c", &mem1.opt_sy_again, sizeof(mem1.opt_sy_again));

									if (mem1.opt_sy_again == 'Y' || mem1.opt_sy_again == 'y')
									{
										mem1.opt_sy_rep = 1;
										break;
									}
									else if (mem1.opt_sy_again == 'N' || mem1.opt_sy_again == 'n')
									{
										mem1.opt_sy_rep = 0;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									}
								}//while(1) 
							}//while (mem1.opt_sy_rep != 0)

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
								break;
							}//�ݺ� while(1)
							break;
						}//else if (mem1.opt1 == 3) 


						else if (mem1.opt1 == 4) // Base & Others
						{
							system("cls");
							printf("���Ͻô� �ɼ��� ��ȣ�� �Է����ּ���. \n");
							printf("1. �� \n2. ���� \n3. ��Ÿ \n");
							scanf_s("%d", &mem1.opt_bo);

							if (mem1.opt_bo == 1)//�� ����
							{
								system("cls");
								mem1.opt_bo_name = "��";

								printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem1.opt_bo_name);////////////
								Option_Mag();
								while (1)
								{
									getchar();
									scanf_s("%d", &mem1.opt_bo_mag, sizeof(mem1.opt_bo_mag));

									if (mem1.opt_bo_mag == 1) //����
									{
										mem1.opt_bo_subname = "����";
										break;
									}
									else if (mem1.opt_bo_mag == 2)	//����
									{
										mem1.opt_bo_subname = "����";
										break;
									}
									else if (mem1.opt_bo_mag == 3)	//����
									{
										mem1.opt_bo_subname = "����";
										break;
									}
									else if (mem1.opt_bo_mag == 4)	//����
									{
										mem1.opt_bo_subname = "����";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem1.opt_bo_subname = "";
									}
									//printf("%s", mem1.opt_bo_subname);
									//break;
								}//while(1)
								system("cls");
								printf("%s�� �����ϼ̽��ϴ�. \n", mem1.opt_bo_subname);

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
									break;
								}//�ݺ� while(1)
								//break;
								//Sleep(10000);
							}//if (mem1.opt_bo == 1)//�� ����

							if (mem1.opt_bo == 2)//���� ����
							{
								system("cls");
								mem1.opt_bo_name = "����";

								printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem1.opt_bo_name);////////////

								while (1)
								{
									getchar();
									printf("������(Dome Lid)�� �����Ͻðڽ��ϱ�? (Y/N)\n");
									//printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
									scanf_s("%c", &mem1.opt_lid, sizeof(mem1.opt_lid));
									if (mem1.opt_lid == 'Y' || mem1.opt_lid == 'y')
									{
										mem1.opt_lid_name = "������(Dome Lid)";
										break;
									}
									else if (mem1.opt_lid == 'N' || mem1.opt_lid == 'n')
									{
										mem1.opt_lid_name = "�÷�����(Flat Lid)";
										break;
									}
									else
									{
										system("cls");
										printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n(Y/N) \n");
									}
									break;
								}//while(1)
								system("cls");

								printf("%s�� �����ϼ̽��ϴ�. \n", mem1.opt_lid_name);

								while (1)
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
									break;
								}//�ݺ� while(1)
								
							}//if (mem1.opt_bo == 2)//���� ����
							
							if (mem1.opt_bo == 3)//��Ÿ ����
							{
								system("cls");
								mem1.opt_bo_name = "��Ÿ";

								printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem1.opt_bo_name);////////////

								while (1)
								{
									getchar();
									printf("���������� �����ּ���. (Y/N)\n");
									//printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
									scanf_s("%c", &mem1.opt_milk, sizeof(mem1.opt_milk));
									if (mem1.opt_milk == 'Y' || mem1.opt_milk == 'y')
									{
										mem1.opt_milk_name = "����ϴ�.";
										break;
									}
									else if (mem1.opt_milk == 'N' || mem1.opt_milk == 'n')
									{
										mem1.opt_milk_name = "������ �ʽ��ϴ�.";
										break;
									}
									else
									{
										system("cls");
										printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n(Y/N) \n");
									}
									//break;
								}//while(1)
								system("cls");
								printf("���������� %s \n", mem1.opt_milk_name);



								while (1)
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
									break;
								}//�ݺ� while(1)

							}//if (mem1.opt_bo == 2)//���� ����
							break;
						}//	else if (mem1.opt1 == 4) // Base & Others

						else if (mem1.opt1 == 5) // ����
						{
							system("cls");
							mem1.opt_ice_name = "����";

							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem1.opt_ice_name);////////////
							Option_Mag();
							while (1)
							{
								getchar();
								scanf_s("%d", &mem1.opt_ice_mag, sizeof(mem1.opt_ice_mag));

								if (mem1.opt_ice_mag == 1) //����
								{
									mem1.opt_ice_subname = "����";
									break;
								}
								else if (mem1.opt_ice_mag == 2)	//����
								{
									mem1.opt_ice_subname = "����";
									break;
								}
								else if (mem1.opt_ice_mag == 3)	//����
								{
									mem1.opt_ice_subname = "����";
									break;
								}
								else if (mem1.opt_ice_mag == 4)	//����
								{
									mem1.opt_ice_subname = "����";
									break;
								}
								else
								{
									printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									mem1.opt_ice_subname = "";
								}
								//printf("%s", mem1.opt_bo_subname);
								//break;
							}//while(1)
							system("cls");
							printf("%s�� �����ϼ̽��ϴ�. \n", mem1.opt_ice_subname);

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
								break;
							}//�ݺ� while(1)
							break;
						}//	else if (mem1.opt1 == 5) // ����

						else if (mem1.opt1 == 6)//���� �ɼ�
						{
							system("cls");
							mem1.opt_whip_name = "����ũ��";
							//mem1.opt_ice_name = "����";
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� ���ο� �ش��ϴ� ��ȣ �Է����ּ���. \n", mem1.opt_whip_name);

							while (mem1.opt_whip_rep != 0)
							{
								//system("cls");
								//printf("�÷� �߰�. 0~9���� �����Ͻʴϴ�. ���Ͻô� �÷��� �ش��ϴ� ��ȣ �Է����ּ���. \n");
								printf("1. �Ϲ� ���� \n2. ���� ���� \n3. ���ݸ� ���� \n4. ���������� ���� \n");

								while (1)
								{
									getchar();
									scanf_s("%d", &mem1.opt_whip);

									if (mem1.opt_whip == 1)
									{
										mem1.opt_whip_subname = "�Ϲ� ����";
										break;
									}
									else if (mem1.opt_whip == 2)
									{
										mem1.opt_whip_subname = "���� ����";
										totalprice += 600;
										break;
									}
									else if (mem1.opt_whip == 3)
									{
										mem1.opt_whip_subname = "���ݸ� ����";
										totalprice += 600;
										break;
									}
									else if (mem1.opt_whip == 4)
									{
										mem1.opt_whip_subname = "���������� ����";
										totalprice += 600;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem1.opt_whip_subname = "";
									}
								}//while(1)

								system("cls");
								printf("%s�� �����ϼ̽��ϴ�. \n", mem1.opt_whip_subname);
								break;
							}//while (mem1.opt_whip_rep != 0)

							while (1)
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
								break;
							}//�ݺ� while(1)
							break;
						}//else if (mem1.opt1 == 6)//���� �ɼ�

						else if (mem1.opt1 == 7) //Drizzle Option
						{
							system("cls");
							mem1.opt_driz_name = "�帮��";
							//mem1.opt_ice_name = "����";
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� �帮�� �ش��ϴ� ��ȣ �Է����ּ���. \n", mem1.opt_driz_name);

							while (mem1.opt_driz_rep != 0)
							{
								printf("1. ī��� �ö� �帮�� \n2. ī��� �帮�� \n3. ���ݸ� �帮�� \n");

								while (1)
								{
									getchar();
									scanf_s("%d", &mem1.opt_driz);

									if (mem1.opt_driz == 1)
									{
										mem1.opt_driz_subname = "ī��� �ö�";
										totalprice += 600;
										break;
									}
									else if (mem1.opt_driz == 2)
									{
										mem1.opt_driz_subname = "ī���";
										totalprice += 600;
										break;
									}
									else if (mem1.opt_driz == 3)
									{
										mem1.opt_driz_subname = "���ݸ�";
										totalprice += 600;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem1.opt_driz_subname = "";
									}
								}//while(1)

								system("cls");
								//printf("%s�� �����ϼ̽��ϴ�. \n", mem1.opt_driz_subname);
								//break;


								printf("%s �帮���� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem1.opt_driz_subname);////////////
								Option_Mag();
								while (1)
								{
									getchar();
									scanf_s("%d", &mem1.opt_driz_mag, sizeof(mem1.opt_driz_mag));

									if (mem1.opt_driz_mag == 1) //����
									{
										mem1.opt_driz_sizename = "����";
										break;
									}
									else if (mem1.opt_driz_mag == 2)	//����
									{
										mem1.opt_driz_sizename = "����";
										break;
									}
									else if (mem1.opt_driz_mag == 3)	//����
									{
										mem1.opt_driz_sizename = "����";
										break;
									}
									else if (mem1.opt_driz_mag == 4)	//����
									{
										mem1.opt_driz_sizename = "����";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem1.opt_driz_sizename = "";
									}

								}//while(1)
								system("cls");
								printf("%s�帮���� %s ��ŭ �����ϼ̽��ϴ�. \n", mem1.opt_driz_subname, mem1.opt_driz_sizename);

								getchar();
								printf("�� �ٸ� �帮���� �߰��Ͻðڽ��ϱ�? (Y/N) \n");

								while (1)
								{
									scanf_s("%c", &mem1.opt_driz_again, sizeof(mem1.opt_driz_again));

									if (mem1.opt_driz_again == 'Y' || mem1.opt_driz_again == 'y')
									{
										mem1.opt_driz_rep = 1;
										break;
									}
									else if (mem1.opt_driz_again == 'N' || mem1.opt_driz_again == 'n')
									{
										mem1.opt_driz_rep = 0;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									}
								}//while(1) 
							}//while (mem1.opt_whip_rep != 0)

							while (1)
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
								break;
							}//�ݺ� while(1)
							break;
						}//else if (mem1.opt1 == 7) //�帮�� �ɼ�

						else
						{
							system("cls");
							printf("�߸� �Է��ϼ̽��ϴ�. ���Ͻô� �ɼ��� ��ȣ�� ����� �ٽ� �����ּ���. \n");
						}
					}
				
				}//while (optre != 0)
				break;
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
		}//Option while(1)

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
		//ȸ���̰� �ɼ��� ���������� 1ȸ extra����
		if (mem1.yesmem == 1 && mem1.opt == 1)
		{
			totalprice -= 600;
		}
		else
		{
			totalprice -= 0;
		}

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





	return 0;

}//main