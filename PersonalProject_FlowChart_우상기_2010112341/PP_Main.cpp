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
	

	int point;	//����Ʈī�� ������
	int yesmem=0;	//ȸ�� ����
	int menunum;	//�޴� ��ȣ
	int hc;	//HOT/COOL
	int sizenum;
	int opt_choice;
	int opt1, opt_shot, opt_esp_num;
	int valuepoint;	//���γ� 100000, ������ 80000, �ں��� 60000 
	int pomin;
	int cash;
	int opt_sy_num;	//�÷� �ɼ�
	int opt_sy_time; // �÷� �ɼ� �߰�Ƚ��
	int opt_bo_num;	//Base & Other Option
	int opt_bo_mag;// Base & Other magnitude
	int opt_sy_rep; //�÷� �ݺ�
	int opt_ice_mag;	//���� �� ����
	int opt_whip_rep;	//����
	int opt_whip_num;
	int opt_driz_rep;
	int opt_driz_num;
	int opt_driz_mag;
	int in;

	char name[100];	//ȸ�� �̸�
	char *name_m1 = "���γ�";
	char *name_m2 = "������";
	char *name_m3 = "�ں���";
	char *menuname;
	char *hclabel;
	char *size_name;
	char membership = 0;	//ȸ�� ���� Ȯ��
	char cup = 0;
	char nick[100];
	char pch = 0;
	char optag;
	char *opt_name;
	char *opt_esp_name;
	char *opt_sy_name;
	char *opt_bo_name;
	char *opt_bo_subname;
	char opt_sy_again;
	char opt_lid;
	char *opt_lid_name;
	char opt_milk;
	char *opt_milk_name;
	//char *opt_ice_name;
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
	struct member mem[3];
	system("mode con: lines=25 cols=80");

	int totalprice = 0;
	int start;
	int i; //drink increase - mem[i]
	int optre = 1;

	int again;

/*	STEP 01
Siren Order �����ϱ�
*/
	

	printf("��Ÿ���� Siren Order�� �����մϴ�! \n\n");
	//�ٹ���!!
	while (1)
	{
		printf("1. Siren Order�� �����Ͻðڽ��ϱ�? \n");
		printf("2. Siren Order�� �����Ͻðڽ��ϱ�? \n");

		scanf_s("%d", &start);

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

	
	for (i = 0; i < 3;)
	{

/*	STEP 02
�� �̸� �Է¹ޱ�
*/

	printf("������ �̸��� �Է����ּ���. \n");
	printf("(���� ȸ�� : ���γ�, ������, �ں���) \n");
	scanf_s("%s", mem[i].name, sizeof(mem[i].name));
	//	scanf_s�Լ��� scanf�Լ��� �޸� ���ڿ� ���ڿ��� ���ؼ��� ��������� ũ�Ⱚ�� ���� ��� �մϴ�.
	system("cls");	//�ܼ�â ȭ�� �����


/*	STEP 03	
ȸ�� ���� Ȯ���ϱ�
*/
	if (!strcmp(mem[i].name, mem[i].name_m1))
	{
		mem[i].yesmem = 1;	//ȸ������ �����.
		mem[i].valuepoint = 100000;
		printf("ȯ���մϴ�! %s��! \n%s�Բ����� ��� ���� ȸ�� �̽ʴϴ�! \n", mem[i].name_m1, mem[i].name_m1);
		printf("ȸ���̽ùǷ� ���� extra 1ȸ �����Ͻʴϴ�. \n\n");
		printf("%s�Բ��� �������� ���� ����Ʈ�� %d�� �Դϴ�. \n\n", mem[i].name_m1, mem[i].valuepoint);
		printf("\n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n");
	}
	else if (!strcmp(mem[i].name, mem[i].name_m2))
	{
		mem[i].yesmem = 1;
		mem[i].valuepoint = 80000;
		printf("ȯ���մϴ�! %s��! \n%s�Բ����� �׸� ���� ȸ�� �̽ʴϴ�! \n", mem[i].name_m2, mem[i].name_m2);
		printf("ȸ���̽ùǷ� ���� extra 1ȸ �����Ͻʴϴ�. \n\n");
		printf("%s�Բ��� �������� ���� ����Ʈ�� %d�� �Դϴ�. \n\n", mem[i].name_m2, mem[i].valuepoint);
		printf("\n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n");
	}
	else if (!strcmp(mem[i].name, mem[i].name_m3))
	{
		mem[i].yesmem = 1;
		mem[i].valuepoint = 60000;
		printf("ȯ���մϴ�! %s��! \n%s�Բ����� ���� ���� ȸ�� �̽ʴϴ�! \n", mem[i].name_m3, mem[i].name_m3);
		printf("ȸ���̽ùǷ� ���� extra 1ȸ �����Ͻʴϴ�. \n\n");
		printf("%s�Բ��� �������� ���� ����Ʈ�� %d�� �Դϴ�. \n\n", mem[i].name_m3, mem[i].valuepoint);
		printf("\n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n");
	}
	else
	{
		printf("ȯ���մϴ�! %s��! \n\n%s ���� ��Ÿ���� ȸ���̽ʴϱ�? (Y/N) \n", mem[i].name, mem[i].name);
		printf("ȸ���� ��� ���� extra 1ȸ �����Ͻʴϴ�. \n");

		while (1)
		{
			getchar();
			scanf_s("%c", &mem[i].membership, sizeof(mem[i].membership));

			if (mem[i].membership == 'Y' || mem[i].membership == 'y')
			{
				system("cls");
				mem[i].yesmem = 1;
				printf("%s��! \n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n", mem[i].name);
				break;
			}

			else if (mem[i].membership == 'N' || mem[i].membership == 'n')
			{
				system("cls");
				mem[i].yesmem = 0;	//��ȸ������ �����.
				printf("%s��! \n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n", mem[i].name);
				break;
			}
			else
			{
				system("cls");
				printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n��Ÿ���� ȸ���̽ʴϱ�? (Y/N) \n");
			}
		}
	}


/* STEP 04
�޴� �����ϱ�
*/
	while (1)
	{
		Menulist(); //�Լ��� �̿��Ͽ� �޴� ��� ǥ��

		getchar();
		scanf_s("%d", &mem[i].menunum);
		printf("%d", mem[i].menunum);
		system("cls");

		if (mem[i].menunum == 1)	//Americano
		{
			totalprice += 4100;
			mem[i].menuname = "�Ƹ޸�ī��(Americano)";
			break;
		}
		else if (mem[i].menunum == 2)	//Caffe Latte
		{
			totalprice += 4600;
			mem[i].menuname = "ī�� �� (Caffe Latte)";
			break;
		}
		else if (mem[i].menunum == 3) //Caffe Mocha
		{
			totalprice += 5100;
			mem[i].menuname = "ī�� ��ī (Caffe Mocha)";
			break;
		}
		else if (mem[i].menunum == 4)	//Vanilla Frappuccino Blended Creme
		{
			totalprice += 4800;
			mem[i].menuname = "�ٴҶ� ũ�� ����Ǫġ�� (Vanilla Frappuccino Blended Creme)";
			break;
		}
		else if (mem[i].menunum == 5)	//Strawberries & Creme Frappuccino Blended Creme
		{
			totalprice += 5600;
			mem[i].menuname = "���� ũ�� ����Ǫġ�� (Strawberries & Creme Frappuccino Blended Creme)";
			break;
		}
		else 
		{
			system("cls");
			printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. �ùٸ� ��ȣ�� �����ּ���. \n\n");
		}
		
	}	//while(1)
		printf("���� %s�� �����ϼ̽��ϴ�. \n", mem[i].menuname);


/* STEP 05
HOT/COOL �����ϱ�
*/

	//HOT / COOL ���� ������ ���
	while (1)
	{
		if (mem[i].menunum == 1 || mem[i].menunum == 2 || mem[i].menunum == 3)
		{
			printf("\nHOT / COOL�� ���� �� �ش� ��ȣ�� �����ּ���. \n\n1. HOT \n2. COOL \n");
			scanf_s("%d", &mem[i].hc);

				if (mem[i].hc == 1)
				{
					system("cls");
					mem[i].hclabel = "HOT";
					break;
				}
				else if (mem[i].hc == 2)
				{
					system("cls");
					mem[i].hclabel = "COOL";
					break;
				}
				else
				{
					system("cls");
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
				}

		}//if (mem1.menunum == 1 || mem1.menunum == 2 || mem1.menunum == 3)

		//COOL�� ���� ������ ���
		else if (mem[i].menunum == 4 || mem[i].menunum == 5)
		{
			system("cls");
			mem[i].hclabel = "COOL";
			printf("����Ǫġ��(Frappuccino) �޴��� ��� COOL���Ḹ �ֹ� �����մϴ�. \n");
			break;

		}
		else
		{
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
		}
	}//while (1)
	printf("���� %s %s �� �����ϼ̽��ϴ�. \n", mem[i].hclabel, mem[i].menuname);

/* STEP 06
SIZE �����ϱ�
*/
		printf("\n������ ����� �������ּ���. \n");
		
		while (1)
		{
			Size(); //�Լ��� �̿� ������ ����Ʈ �ҷ���
			getchar();
			scanf_s("%d", &mem[i].sizenum);
			printf("%d", mem[i].sizenum);
			system("cls");

			if (mem[i].sizenum == 1)
			{
				mem[i].size_name = "Tall Size";
				totalprice = totalprice + 0;
				break;
			}
			if (mem[i].sizenum == 2)
			{
				mem[i].size_name = "Grande Size";
				totalprice = totalprice + 500;
				break;
			}
			else if (mem[i].sizenum == 3)
			{
				mem[i].size_name = "Venti Size";
				totalprice = totalprice + 1000;
				break;
			}
			else
			{
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
				totalprice = totalprice + 0;
			}
		}
		printf("���� %s %s %s �� �����ϼ̽��ϴ�. \n", mem[i].size_name, mem[i].hclabel, mem[i].menuname);
		
/* STEP 07
Option �������� �����ϱ�
*/
		while (1)
		{
			printf("�۽��� �ɼ����� ������ ���Ḧ ����ðڽ��ϱ�? \n");
			printf("\n1. ��, �ɼ��� �����մϴ�. \n2. �ƴϿ�, �ɼ��� �������� �ʽ��ϴ�. \n");
			scanf_s("%d", &mem[i].opt_choice);

			if (mem[i].opt_choice == 1)//�۽��� �ɼ� ������
			{
				while (optre != 0)
				{
					system("cls");
					printf("�۽��� �ɼ����� ������ ���� ����� \n");
					printf("���Ͻô� �ɼǿ� �ش��ϴ� ��ȣ�� �Է��ϼ���. \n");
					
					while (1)
					{						
						Option();
						scanf_s("%d", &mem[i].opt1);

						if (mem[i].opt1 == 1)//Ŀ�� ���߰�
						{
							mem[i].opt_name = "�� �߰�";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. 0~9�� �߰� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n", mem[i].opt_name);
							scanf_s("%d", &mem[i].opt_shot);
							totalprice += mem[i].opt_shot * 600;
							printf("%s�� %d ȸ �ϼ̽��ϴ�.\n", mem[i].opt_name, mem[i].opt_shot);

							///////////////////////////////////////////////////////////////////
							//�Լ� �Ἥ ��Ÿ����.
							while (1)
							{
								getchar();
								printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
								scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
								if (mem[i].optag == 'Y' || mem[i].optag == 'y')
								{
									optre = 1;
									break;
								}
								else if (mem[i].optag == 'N' || mem[i].optag == 'n')
								{
									optre = 0;
									break;
								}
								else
								{
									system("cls");
									printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n(Y/N) \n");
								}
							}//�ݺ� while(1)
							break;
						}//if (mem1.opt1 == 1)//Ŀ�� ���߰�

						else if (mem[i].opt1 == 2)//Espresso Choice
						{
							mem[i].opt_name = "Espresso Choice";
							system("cls");
							while (1)
							{

								printf("1. ���׸��� \n2. Esp.C(���׸���) \n");
								scanf_s("%d", &mem[i].opt_esp_num);

								if (mem[i].opt_esp_num == 1)//���׸���
								{
									mem[i].opt_esp_name = "���׸���";
									system("cls");
									printf("'%s'�� �����ϼ̽��ϴ�. \n", mem[i].opt_esp_name);

									while (1)
									{
										getchar();
										printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
										scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
										if (mem[i].optag == 'Y' || mem[i].optag == 'y')
										{
											optre = 1;
											break;
										}
										else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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
								
								else if (mem[i].opt_esp_num == 2)	//Esp.C
								{
									mem[i].opt_esp_name = "Esp.C";
									system("cls");
									printf("'%s'�� �����ϼ̽��ϴ�. \n", mem[i].opt_esp_name);
									totalprice += 300;
									
									while (1)
									{
										getchar();
										printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
										scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
										if (mem[i].optag == 'Y' || mem[i].optag == 'y')
										{
											optre = 1;
											break;
										}
										else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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

						
						else if (mem[i].opt1 == 3)	//�÷� �߰�
						{
							mem[i].opt_name = "�÷� �߰�";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� �÷��� �ش��ϴ� ��ȣ �Է����ּ���. \n\n", mem[i].opt_name);
							while (mem[i].opt_sy_rep != 0)
							{
								//system("cls");
								printf("1. �ٴҶ� �÷� \n2. ������ �÷� \n3. ī��� �÷� \n4. ��ϹٴҶ� �÷�\n");

								while (1)
								{
									getchar();
									scanf_s("%d", &mem[i].opt_sy_num);

									if (mem[i].opt_sy_num == 1)
									{
										mem[i].opt_sy_name = "�ٴҶ� �÷�";
										break;
									}
									else if (mem[i].opt_sy_num == 2)
									{
										mem[i].opt_sy_name = "������ �÷�";
										break;
									}
									else if (mem[i].opt_sy_num == 3)
									{
										mem[i].opt_sy_name = "ī��� �÷�";
										break;
									}
									else if (mem[i].opt_sy_num == 4)
									{
										mem[i].opt_sy_name = "��ϹٴҶ� �÷�";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem[i].opt_sy_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s �� �����ϼ̽��ϴ�. 0~9�� �߰� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n", mem[i].opt_sy_name);
								scanf_s("%d", &mem[i].opt_sy_time);
								totalprice += mem[i].opt_sy_time * 600;
								printf("%s �߰��� %d ȸ �ϼ̽��ϴ�.\n\n", mem[i].opt_sy_name, mem[i].opt_sy_time);

								getchar();
								printf("�� �ٸ� �÷��� �߰��Ͻðڽ��ϱ�? (Y/N) \n");

								while (1)
								{
									scanf_s("%c", &mem[i].opt_sy_again, sizeof(mem[i].opt_sy_again));

									if (mem[i].opt_sy_again == 'Y' || mem[i].opt_sy_again == 'y')
									{
										mem[i].opt_sy_rep = 1;
										break;
									}
									else if (mem[i].opt_sy_again == 'N' || mem[i].opt_sy_again == 'n')
									{
										mem[i].opt_sy_rep = 0;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									}
								}//while(1) 
							}//while (mem1.opt_sy_rep != 0)

							while (1)
							{
								getchar();
								printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
								scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
								if (mem[i].optag == 'Y' || mem[i].optag == 'y')
								{
									optre = 1;
									break;
								}
								else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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


						else if (mem[i].opt1 == 4) // Base & Others
						{
							mem[i].opt_name = "Base & Others";
							system("cls");
							printf("���Ͻô� �ɼ��� ��ȣ�� �Է����ּ���. \n");
							printf("1. �� \n2. ���� \n3. ��Ÿ \n");
							scanf_s("%d", &mem[i].opt_bo_num);

							if (mem[i].opt_bo_num == 1)//�� ����
							{
								system("cls");
								mem[i].opt_bo_name = "��";

								printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem[i].opt_bo_name);
								Option_Mag();
								while (1)
								{
									getchar();
									scanf_s("%d", &mem[i].opt_bo_mag, sizeof(mem[i].opt_bo_mag));

									if (mem[i].opt_bo_mag == 1) //����
									{
										mem[i].opt_bo_subname = "����";
										break;
									}
									else if (mem[i].opt_bo_mag == 2)	//����
									{
										mem[i].opt_bo_subname = "����";
										break;
									}
									else if (mem[i].opt_bo_mag == 3)	//����
									{
										mem[i].opt_bo_subname = "����";
										break;
									}
									else if (mem[i].opt_bo_mag == 4)	//����
									{
										mem[i].opt_bo_subname = "����";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem[i].opt_bo_subname = "";
									}
								}//while(1)
								system("cls");
								printf("%s�� %s�����ϼ̽��ϴ�. \n", mem[i].opt_bo_name, mem[i].opt_bo_subname);

								while (1)
								{
									getchar();
									printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
									scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
									if (mem[i].optag == 'Y' || mem[i].optag == 'y')
									{
										optre = 1;
										break;
									}
									else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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
							}//if (mem1.opt_bo == 1)//�� ����

							if (mem[i].opt_bo_num == 2)//���� ����
							{
								system("cls");
								mem[i].opt_bo_name = "����";

								printf("%s�ɼ��� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem[i].opt_bo_name);

								while (1)
								{
									getchar();
									printf("������(Dome Lid)�� �����Ͻðڽ��ϱ�? (Y/N)\n");
									scanf_s("%c", &mem[i].opt_lid, sizeof(mem[i].opt_lid));
									
									if (mem[i].opt_lid == 'Y' || mem[i].opt_lid == 'y')
									{
										mem[i].opt_lid_name = "������(Dome Lid)";
										break;
									}
									else if (mem[i].opt_lid == 'N' || mem[i].opt_lid == 'n')
									{
										mem[i].opt_lid_name = "�÷�����(Flat Lid)";
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

								printf("%s�� �����ϼ̽��ϴ�. \n", mem[i].opt_lid_name);

								while (1)
								{
									getchar();
									printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
									scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
									if (mem[i].optag == 'Y' || mem[i].optag == 'y')
									{
										optre = 1;
										break;
									}
									else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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
							
							if (mem[i].opt_bo_num == 3)//��Ÿ ����
							{
								system("cls");
								mem[i].opt_bo_name = "��Ÿ";

								printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem[i].opt_bo_name);

								while (1)
								{
									getchar();
									printf("���������� �����ּ���. (Y/N)\n");
									scanf_s("%c", &mem[i].opt_milk, sizeof(mem[i].opt_milk));
									if (mem[i].opt_milk == 'Y' || mem[i].opt_milk == 'y')
									{
										mem[i].opt_milk_name = "����ϴ�.";
										break;
									}
									else if (mem[i].opt_milk == 'N' || mem[i].opt_milk == 'n')
									{
										mem[i].opt_milk_name = "������ �ʽ��ϴ�.";
										break;
									}
									else
									{
										system("cls");
										printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n(Y/N) \n");
									}
								}//while(1)
								system("cls");
								printf("���������� %s \n", mem[i].opt_milk_name);



								while (1)
								{
									getchar();
									printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
									scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
									if (mem[i].optag == 'Y' || mem[i].optag == 'y')
									{
										optre = 1;
										break;
									}
									else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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

						else if (mem[i].opt1 == 5) // ����
						{
							mem[i].opt_name = "����";
							system("cls");
							
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem[i].opt_name);
							Option_Mag();
							
							while (1)
							{
								getchar();
								scanf_s("%d", &mem[i].opt_ice_mag, sizeof(mem[i].opt_ice_mag));

								if (mem[i].opt_ice_mag == 1) //����
								{
									mem[i].opt_ice_subname = "����";
									break;
								}
								else if (mem[i].opt_ice_mag == 2)	//����
								{
									mem[i].opt_ice_subname = "����";
									break;
								}
								else if (mem[i].opt_ice_mag == 3)	//����
								{
									mem[i].opt_ice_subname = "����";
									break;
								}
								else if (mem[i].opt_ice_mag == 4)	//����
								{
									mem[i].opt_ice_subname = "����";
									break;
								}
								else
								{
									printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									mem[i].opt_ice_subname = "";
								}
							}//while(1)
							system("cls");
							printf("%s�� �����ϼ̽��ϴ�. \n", mem[i].opt_ice_subname);

							while (1)
							{
								getchar();
								printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
								scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
								if (mem[i].optag == 'Y' || mem[i].optag == 'y')
								{
									optre = 1;
									break;
								}
								else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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

						else if (mem[i].opt1 == 6)//���� �ɼ�
						{
							mem[i].opt_name = "����ũ��";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� ���ο� �ش��ϴ� ��ȣ �Է����ּ���. \n", mem[i].opt_name);

							while (mem[i].opt_whip_rep != 0)
							{
								printf("1. �Ϲ� ���� \n2. ���� ���� \n3. ���ݸ� ���� \n4. ���������� ���� \n");

								while (1)
								{
									getchar();
									scanf_s("%d", &mem[i].opt_whip_num);

									if (mem[i].opt_whip_num == 1)
									{
										mem[i].opt_whip_name = "�Ϲ� ����";
										break;
									}
									else if (mem[i].opt_whip_num == 2)
									{
										mem[i].opt_whip_name = "���� ����";
										totalprice += 600;
										break;
									}
									else if (mem[i].opt_whip_num == 3)
									{
										mem[i].opt_whip_name = "���ݸ� ����";
										totalprice += 600;
										break;
									}
									else if (mem[i].opt_whip_num == 4)
									{
										mem[i].opt_whip_name = "���������� ����";
										totalprice += 600;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem[i].opt_whip_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s�� �����ϼ̽��ϴ�. \n", mem[i].opt_whip_name);
								break;
							}//while (mem1.opt_whip_rep != 0)

							while (1)
							{
								getchar();
								printf("�� �ٸ� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");
								scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
								if (mem[i].optag == 'Y' || mem[i].optag == 'y')
								{
									optre = 1;
									break;
								}
								else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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

						else if (mem[i].opt1 == 7) //Drizzle Option
						{
							mem[i].opt_name = "�帮��";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� �帮�� �ش��ϴ� ��ȣ �Է����ּ���. \n", mem[i].opt_name);

							while (mem[i].opt_driz_rep != 0)
							{
								printf("1. ī��� �ö� �帮�� \n2. ī��� �帮�� \n3. ���ݸ� �帮�� \n");

								while (1)
								{
									getchar();
									scanf_s("%d", &mem[i].opt_driz_num);

									if (mem[i].opt_driz_num == 1)
									{
										mem[i].opt_driz_name = "ī��� �ö�";
										totalprice += 600;
										break;
									}
									else if (mem[i].opt_driz_num == 2)
									{
										mem[i].opt_driz_name = "ī���";
										totalprice += 600;
										break;
									}
									else if (mem[i].opt_driz_num == 3)
									{
										mem[i].opt_driz_name = "���ݸ�";
										totalprice += 600;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem[i].opt_driz_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s �帮���� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", mem[i].opt_driz_name);
								Option_Mag();
								while (1)
								{
									getchar();
									scanf_s("%d", &mem[i].opt_driz_mag, sizeof(mem[i].opt_driz_mag));

									if (mem[i].opt_driz_mag == 1) //����
									{
										mem[i].opt_driz_sizename = "����";
										break;
									}
									else if (mem[i].opt_driz_mag == 2)	//����
									{
										mem[i].opt_driz_sizename = "����";
										break;
									}
									else if (mem[i].opt_driz_mag == 3)	//����
									{
										mem[i].opt_driz_sizename = "����";
										break;
									}
									else if (mem[i].opt_driz_mag == 4)	//����
									{
										mem[i].opt_driz_sizename = "����";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										mem[i].opt_driz_sizename = "";
									}

								}//while(1)
								
								system("cls");
								printf("%s�帮���� %s ��ŭ �����ϼ̽��ϴ�. \n", mem[i].opt_driz_subname, mem[i].opt_driz_sizename);

								getchar();
								printf("�� �ٸ� �帮���� �߰��Ͻðڽ��ϱ�? (Y/N) \n");

								while (1)
								{
									scanf_s("%c", &mem[i].opt_driz_again, sizeof(mem[i].opt_driz_again));

									if (mem[i].opt_driz_again == 'Y' || mem[i].opt_driz_again == 'y')
									{
										mem[i].opt_driz_rep = 1;
										break;
									}
									else if (mem[i].opt_driz_again == 'N' || mem[i].opt_driz_again == 'n')
									{
										mem[i].opt_driz_rep = 0;
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
								scanf_s("%c", &mem[i].optag, sizeof(mem[i].optag));
								if (mem[i].optag == 'Y' || mem[i].optag == 'y')
								{
									optre = 1;
									break;
								}
								else if (mem[i].optag == 'N' || mem[i].optag == 'n')
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
			else if (mem[i].opt_choice == 2) //�۽��� �ɼ� ���� �� ��
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
Option List �����ϱ�	-	STEP 07�ȿ� ����!
*/


/* STEP 09
Option ���� ����	-	STEP 07�ȿ� ����!
*/

/* STEP 10
�ٸ� �ɼ�	-	STEP 07�ȿ� ����!
*/

/* STEP 11
input ���� ��� & ��� ���� Ȯ��
*/
		system("cls");
		printf("%s��! �ֹ� ������ Ȯ���ϰڽ��ϴ�. \n", mem[i].name);
		printf("���� %s %s %s �� �����ϼ̽��ϴ�. \n", mem[i].size_name, mem[i].hclabel, mem[i].menuname);
		///////////////////�ɼ� �ֹ����� ����ϱ�
		/*	1st Try
		for (mem1.in = 1; mem1.in = 8; mem1.in++)
		{
			if (mem1.opt1 == mem1.in)
				printf("%s", mem1.opt_name);
			break;
		}*

		/*	2nd Try
		if (mem1.opt1 == 1)
		{
			printf("1st\n");
			if (mem1.opt1 == 2)
			{
				printf("2nd\n");
				if (mem1.opt1 == 3)
				{
					printf("3rd\n");
					if (mem1.opt1 == 4)
					{
						printf("4th\n");
						
					}
				}
			}
		}*/

/* STEP 12
���� �̸� ���ϱ�
*/
		printf("����� ������ ������ �����ּ���! \n");
		printf("������ ��ġ �����ø� ����(Enter)�� �����ּ���. �׳� �޴����� ��� �˴ϴ�!\n");
		
		getchar();
		gets_s(mem[i].nick);//////////////////////////////////////////////////////////////////mem[i]���� mem[3]���� Ȯ���ϰ� üũ!
		if (mem[i].nick[0] == (char)NULL) //Enter
		{
			system("cls");
			printf("%s %s %s \n", mem[i].size_name, mem[i].hclabel, mem[i].menuname);
		}
		else
		{
			system("cls");
			printf("%s\n", mem[i].nick);
		}
			
/* STEP 13
�߰� �ֹ� ���� Ȯ��
*/

/* STEP 14
������ ���� ����
*/
		
		printf("���� ���� ������ ���̽��ϱ�?? %s ��?? (Y/N)\n", mem[i].name);
		printf("���� ���� �����ø� 300�� ���� �����մϴ�.\n");

		while (1)
		{
			scanf_s("%c", &mem[i].cup, sizeof(mem[i].cup));
			
			if (mem[i].cup == 'Y' || mem[i].cup == 'y')
			{
				system("cls");
				printf("�������� ������ ���̽��ϴ�. 300���� ���� �Ǿ����ϴ�! \n");
				// �߰��ֹ� ����ؼ� AND�������� ���� �� ������ �� �ְ� ����.
				totalprice -= 300;
				break;
			}
			else if (mem[i].cup == 'N' || mem[i].cup == 'n')
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
		if (mem[i].yesmem == 1 && mem[i].opt_choice == 1)
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

		if (mem[i].yesmem == 1)
		{
			printf("ȸ���Բ��� ���� ������ ��� ���� ����Ʈ�� %d �Դϴ�. \n", mem[i].valuepoint);
			printf("����Ʈ�� ����Ͻðڽ��ϱ�?? (Y/N) \n");
			
			while (1)
			{
				getchar();
				scanf_s("%c", &mem[i].pch, sizeof(mem[i].pch));

				if (mem[i].pch == 'Y' || mem[i].pch == 'y') //����Ʈ ���
				{
					printf("����Ʈ���� �󸶸� �����Ͻðڽ��ϱ�? \n");
					scanf_s("%d", &mem[i].pomin, sizeof(mem[i].pomin));
					
					mem[i].valuepoint -= mem[i].pomin;
					totalprice -= mem[i].pomin;

					system("cls");
					printf("�ܿ� ����Ʈ�� %d �Դϴ�. \n", mem[i].valuepoint);
					printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
					break;
				}
				else if (mem[i].pch == 'N' || mem[i].pch == 'n')
				{
					system("cls");
					printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
					break;
				}
				else
				{
					printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n����Ʈ�� ����Ͻðڽ��ϱ�? (Y/N) \n");
				}
			}
	

		}//if (mem1.yesmem == 1)
		else if (mem[i].yesmem == 0)
		{
			printf("��ȸ���̽ùǷ� ����Ʈ ������ �Ұ��� �մϴ�. \n");
			printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
			//break;
		}

/* STEP 17
���� ���� �� �ܵ�
*/
		///////////////���� �ʿ��ϴ�. �� �� ����ϰ�!!
		// �ܵ� 0���̾ ���� �Է��� �޴´� - �� �κ� ����!
		while (1)
		{
			printf("������ �ּ���. \n");
			scanf_s("%d", &mem[i].cash, sizeof(mem[i].cash));

			if (mem[i].cash < totalprice)
			{
				system("cls");
				printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
				printf("%d��ŭ�� �����մϴ�. ������ �ݾ��� �� �ּ���. \n", totalprice - mem[i].cash);
			}
			else if (mem[i].cash >= totalprice)
			{
				system("cls");
				printf("���� �� %d�� �޾ҽ��ϴ�. \n�ܵ��� %d �Դϴ�.\n", mem[i].cash, mem[i].cash - totalprice);
				break;
			}
			totalprice -= mem[i].cash;
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
		//system("PAUSE"); // Wait to exit program till the key input
		
		//�ϴ� ����ü ���� �ϰ� �� �� ������ Ȯ��, ��ġ�� �����ؼ� ���ῡ ���� ����ü ������ �ٲ�� �ٽ� ��������.
		printf("Keep going?\n");
		scanf_s("%d", &again);
		if (again == 1)
		{
			i = 3;
		}
		else
		{
			i++;
		}
	}//for(i=0;;)
	
	
	return 0;

}//main