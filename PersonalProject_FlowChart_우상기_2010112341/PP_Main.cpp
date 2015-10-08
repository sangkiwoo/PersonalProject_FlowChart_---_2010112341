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
���� ���� ���� ����ü �����
*/
struct drink //member //dri
{


	int point;	//����Ʈī�� ������
	int yesmem = 0;	//ȸ�� ����
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
	struct drink bev[3];//beverage
	system("mode con: lines=25 cols=80");

	int totalprice = 0;
	int start;
	int i; //drink increase - bev[i]
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
		\
			/*	STEP 02
			�� �̸� �Է¹ޱ�
			*/

			printf("������ �̸��� �Է����ּ���. \n");
		printf("(���� ȸ�� : ���γ�, ������, �ں���) \n");
		scanf_s("%s", bev[i].name, sizeof(bev[i].name));
		//	scanf_s�Լ��� scanf�Լ��� �޸� ���ڿ� ���ڿ��� ���ؼ��� ��������� ũ�Ⱚ�� ���� ��� �մϴ�.
		system("cls");	//�ܼ�â ȭ�� �����


		/*	STEP 03
		ȸ�� ���� Ȯ���ϱ�
		*/
		if (!strcmp(bev[i].name, bev[i].name_m1))
		{
			bev[i].yesmem = 1;	//ȸ������ �����.
			bev[i].valuepoint = 100000;
			printf("ȯ���մϴ�! %s��! \n%s�Բ����� ��� ���� ȸ�� �̽ʴϴ�! \n", bev[i].name_m1, bev[i].name_m1);
			printf("ȸ���̽ùǷ� ���� extra 1ȸ �����Ͻʴϴ�. \n\n");
			printf("%s�Բ��� �������� ���� ����Ʈ�� %d�� �Դϴ�. \n\n", bev[i].name_m1, bev[i].valuepoint);
			printf("\n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n");
		}
		else if (!strcmp(bev[i].name, bev[i].name_m2))
		{
			bev[i].yesmem = 1;
			bev[i].valuepoint = 80000;
			printf("ȯ���մϴ�! %s��! \n%s�Բ����� �׸� ���� ȸ�� �̽ʴϴ�! \n", bev[i].name_m2, bev[i].name_m2);
			printf("ȸ���̽ùǷ� ���� extra 1ȸ �����Ͻʴϴ�. \n\n");
			printf("%s�Բ��� �������� ���� ����Ʈ�� %d�� �Դϴ�. \n\n", bev[i].name_m2, bev[i].valuepoint);
			printf("\n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n");
		}
		else if (!strcmp(bev[i].name, bev[i].name_m3))
		{
			bev[i].yesmem = 1;
			bev[i].valuepoint = 60000;
			printf("ȯ���մϴ�! %s��! \n%s�Բ����� ���� ���� ȸ�� �̽ʴϴ�! \n", bev[i].name_m3, bev[i].name_m3);
			printf("ȸ���̽ùǷ� ���� extra 1ȸ �����Ͻʴϴ�. \n\n");
			printf("%s�Բ��� �������� ���� ����Ʈ�� %d�� �Դϴ�. \n\n", bev[i].name_m3, bev[i].valuepoint);
			printf("\n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n");
		}
		else
		{
			printf("ȯ���մϴ�! %s��! \n\n%s ���� ��Ÿ���� ȸ���̽ʴϱ�? (Y/N) \n", bev[i].name, bev[i].name);
			printf("ȸ���� ��� ���� extra 1ȸ �����Ͻʴϴ�. \n");

			while (1)
			{
				getchar();
				scanf_s("%c", &bev[i].membership, sizeof(bev[i].membership));

				if (bev[i].membership == 'Y' || bev[i].membership == 'y')
				{
					system("cls");
					bev[i].yesmem = 1;
					printf("%s��! \n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n", bev[i].name);
					break;
				}

				else if (bev[i].membership == 'N' || bev[i].membership == 'n')
				{
					system("cls");
					bev[i].yesmem = 0;	//��ȸ������ �����.
					printf("%s��! \n���Ͻô� �޴��� ���ð� �ش� �޴��� ��ȣ�� �Է����ּ���. \n\n", bev[i].name);
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
			scanf_s("%d", &bev[i].menunum);
			printf("%d", bev[i].menunum);
			system("cls");

			if (bev[i].menunum == 1)	//Americano
			{
				totalprice += 4100;
				bev[i].menuname = "�Ƹ޸�ī��(Americano)";
				break;
			}
			else if (bev[i].menunum == 2)	//Caffe Latte
			{
				totalprice += 4600;
				bev[i].menuname = "ī�� �� (Caffe Latte)";
				break;
			}
			else if (bev[i].menunum == 3) //Caffe Mocha
			{
				totalprice += 5100;
				bev[i].menuname = "ī�� ��ī (Caffe Mocha)";
				break;
			}
			else if (bev[i].menunum == 4)	//Vanilla Frappuccino Blended Creme
			{
				totalprice += 4800;
				bev[i].menuname = "�ٴҶ� ũ�� ����Ǫġ�� (Vanilla Frappuccino Blended Creme)";
				break;
			}
			else if (bev[i].menunum == 5)	//Strawberries & Creme Frappuccino Blended Creme
			{
				totalprice += 5600;
				bev[i].menuname = "���� ũ�� ����Ǫġ�� (Strawberries & Creme Frappuccino Blended Creme)";
				break;
			}
			else
			{
				system("cls");
				printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. �ùٸ� ��ȣ�� �����ּ���. \n\n");
			}

		}	//while(1)
		printf("���� %s�� �����ϼ̽��ϴ�. \n", bev[i].menuname);


		/* STEP 05
		HOT/COOL �����ϱ�
		*/

		//HOT / COOL ���� ������ ���
		while (1)
		{
			if (bev[i].menunum == 1 || bev[i].menunum == 2 || bev[i].menunum == 3)
			{
				printf("\nHOT / COOL�� ���� �� �ش� ��ȣ�� �����ּ���. \n\n1. HOT \n2. COOL \n");
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
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
				}

			}//if (mem1.menunum == 1 || mem1.menunum == 2 || mem1.menunum == 3)

			//COOL�� ���� ������ ���
			else if (bev[i].menunum == 4 || bev[i].menunum == 5)
			{
				system("cls");
				bev[i].hclabel = "COOL";
				printf("����Ǫġ��(Frappuccino) �޴��� ��� COOL���Ḹ �ֹ� �����մϴ�. \n");
				break;

			}
			else
			{
				system("cls");
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
			}
		}//while (1)
		printf("���� %s %s �� �����ϼ̽��ϴ�. \n", bev[i].hclabel, bev[i].menuname);

		/* STEP 06
		SIZE �����ϱ�
		*/
		printf("\n������ ����� �������ּ���. \n");

		while (1)
		{
			Size(); //�Լ��� �̿� ������ ����Ʈ �ҷ���
			getchar();
			scanf_s("%d", &bev[i].sizenum);
			printf("%d", bev[i].sizenum);
			system("cls");

			if (bev[i].sizenum == 1)
			{
				bev[i].size_name = "Tall Size";
				totalprice = totalprice + 0;
				break;
			}
			if (bev[i].sizenum == 2)
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
				printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
				totalprice = totalprice + 0;
			}
		}
		printf("���� %s %s %s �� �����ϼ̽��ϴ�. \n", bev[i].size_name, bev[i].hclabel, bev[i].menuname);

		/* STEP 07
		Option �������� �����ϱ�
		*/
		while (1)
		{
			printf("�۽��� �ɼ����� ������ ���Ḧ ����ðڽ��ϱ�? \n");
			printf("\n1. ��, �ɼ��� �����մϴ�. \n2. �ƴϿ�, �ɼ��� �������� �ʽ��ϴ�. \n");
			scanf_s("%d", &bev[i].opt_choice);

			if (bev[i].opt_choice == 1)//�۽��� �ɼ� ������
			{
				while (optre != 0)
				{
					system("cls");
					printf("�۽��� �ɼ����� ������ ���� ����� \n");
					printf("���Ͻô� �ɼǿ� �ش��ϴ� ��ȣ�� �Է��ϼ���. \n");

					while (1)
					{
						Option();
						scanf_s("%d", &bev[i].opt1);

						if (bev[i].opt1 == 1)//Ŀ�� ���߰�
						{
							bev[i].opt_name = "�� �߰�";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. 0~9�� �߰� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n", bev[i].opt_name);
							scanf_s("%d", &bev[i].opt_shot);
							totalprice += bev[i].opt_shot * 600;
							printf("%s�� %d ȸ �ϼ̽��ϴ�.\n", bev[i].opt_name, bev[i].opt_shot);


							optre = Option_Again();	//Option �ݺ� �Լ�

							break;
						}//if (mem1.opt1 == 1)//Ŀ�� ���߰�

						else if (bev[i].opt1 == 2)//Espresso Choice
						{
							bev[i].opt_name = "Espresso Choice";
							system("cls");
							while (1)
							{

								printf("1. ���׸��� \n2. Esp.C(���׸���) \n");
								scanf_s("%d", &bev[i].opt_esp_num);

								if (bev[i].opt_esp_num == 1)//���׸���
								{
									bev[i].opt_esp_name = "���׸���";
									system("cls");
									printf("'%s'�� �����ϼ̽��ϴ�. \n", bev[i].opt_esp_name);

									optre = Option_Again();	//Option �ݺ� �Լ�
									break;
								}

								else if (bev[i].opt_esp_num == 2)	//Esp.C
								{
									bev[i].opt_esp_name = "Esp.C";
									system("cls");
									printf("'%s'�� �����ϼ̽��ϴ�. \n", bev[i].opt_esp_name);
									totalprice += 300;

									optre = Option_Again();	//Option �ݺ� �Լ�
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


						else if (bev[i].opt1 == 3)	//�÷� �߰�
						{
							bev[i].opt_name = "�÷� �߰�";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� �÷��� �ش��ϴ� ��ȣ �Է����ּ���. \n\n", bev[i].opt_name);
							while (bev[i].opt_sy_rep != 0)
							{
								//system("cls");
								printf("1. �ٴҶ� �÷� \n2. ������ �÷� \n3. ī��� �÷� \n4. ��ϹٴҶ� �÷�\n");

								while (1)
								{
									getchar();
									scanf_s("%d", &bev[i].opt_sy_num);

									if (bev[i].opt_sy_num == 1)
									{
										bev[i].opt_sy_name = "�ٴҶ� �÷�";
										break;
									}
									else if (bev[i].opt_sy_num == 2)
									{
										bev[i].opt_sy_name = "������ �÷�";
										break;
									}
									else if (bev[i].opt_sy_num == 3)
									{
										bev[i].opt_sy_name = "ī��� �÷�";
										break;
									}
									else if (bev[i].opt_sy_num == 4)
									{
										bev[i].opt_sy_name = "��ϹٴҶ� �÷�";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										bev[i].opt_sy_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s �� �����ϼ̽��ϴ�. 0~9�� �߰� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n", bev[i].opt_sy_name);
								scanf_s("%d", &bev[i].opt_sy_time);
								totalprice += bev[i].opt_sy_time * 600;
								printf("%s �߰��� %d ȸ �ϼ̽��ϴ�.\n\n", bev[i].opt_sy_name, bev[i].opt_sy_time);

								getchar();
								printf("�� �ٸ� �÷��� �߰��Ͻðڽ��ϱ�? (Y/N) \n");

								while (1)
								{
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
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									}
								}//while(1) 
							}//while (mem1.opt_sy_rep != 0)

							optre = Option_Again();	//Option �ݺ� �Լ�
							break;
						}//else if (mem1.opt1 == 3) 


						else if (bev[i].opt1 == 4) // Base & Others
						{
							bev[i].opt_name = "Base & Others";
							system("cls");
							printf("���Ͻô� �ɼ��� ��ȣ�� �Է����ּ���. \n");
							printf("1. �� \n2. ���� \n3. ��Ÿ \n");
							scanf_s("%d", &bev[i].opt_bo_num);

							if (bev[i].opt_bo_num == 1)//�� ����
							{
								system("cls");
								bev[i].opt_bo_name = "��";

								printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", bev[i].opt_bo_name);
								Option_Mag();
								while (1)
								{
									getchar();
									scanf_s("%d", &bev[i].opt_bo_mag, sizeof(bev[i].opt_bo_mag));

									if (bev[i].opt_bo_mag == 1) //����
									{
										bev[i].opt_bo_subname = "����";
										break;
									}
									else if (bev[i].opt_bo_mag == 2)	//����
									{
										bev[i].opt_bo_subname = "����";
										break;
									}
									else if (bev[i].opt_bo_mag == 3)	//����
									{
										bev[i].opt_bo_subname = "����";
										break;
									}
									else if (bev[i].opt_bo_mag == 4)	//����
									{
										bev[i].opt_bo_subname = "����";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										bev[i].opt_bo_subname = "";
									}
								}//while(1)
								system("cls");
								printf("%s�� %s�����ϼ̽��ϴ�. \n", bev[i].opt_bo_name, bev[i].opt_bo_subname);

								optre = Option_Again();	//Option �ݺ� �Լ�
							}//if (mem1.opt_bo == 1)//�� ����

							if (bev[i].opt_bo_num == 2)//���� ����
							{
								system("cls");
								bev[i].opt_bo_name = "����";

								printf("%s�ɼ��� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", bev[i].opt_bo_name);

								while (1)
								{
									getchar();
									printf("������(Dome Lid)�� �����Ͻðڽ��ϱ�? (Y/N)\n");
									scanf_s("%c", &bev[i].opt_lid, sizeof(bev[i].opt_lid));

									if (bev[i].opt_lid == 'Y' || bev[i].opt_lid == 'y')
									{
										bev[i].opt_lid_name = "������(Dome Lid)";
										break;
									}
									else if (bev[i].opt_lid == 'N' || bev[i].opt_lid == 'n')
									{
										bev[i].opt_lid_name = "�÷�����(Flat Lid)";
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

								printf("%s�� �����ϼ̽��ϴ�. \n", bev[i].opt_lid_name);

								optre = Option_Again();	//Option �ݺ� �Լ�

							}//if (mem1.opt_bo == 2)//���� ����

							if (bev[i].opt_bo_num == 3)//��Ÿ ����
							{
								system("cls");
								bev[i].opt_bo_name = "��Ÿ";

								printf("%s�� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", bev[i].opt_bo_name);

								while (1)
								{
									getchar();
									printf("���������� �����ּ���. (Y/N)\n");
									scanf_s("%c", &bev[i].opt_milk, sizeof(bev[i].opt_milk));
									if (bev[i].opt_milk == 'Y' || bev[i].opt_milk == 'y')
									{
										bev[i].opt_milk_name = "����ϴ�.";
										break;
									}
									else if (bev[i].opt_milk == 'N' || bev[i].opt_milk == 'n')
									{
										bev[i].opt_milk_name = "������ �ʽ��ϴ�.";
										break;
									}
									else
									{
										system("cls");
										printf("�߸� �Է��ϼ̽��ϴ�. 'Y' �Ǵ� 'N'�� ����� �Է����ּ���. \n(Y/N) \n");
									}
								}//while(1)
								system("cls");
								printf("���������� %s \n", bev[i].opt_milk_name);



								optre = Option_Again();	//Option �ݺ� �Լ�

							}//if (mem1.opt_bo == 2)//���� ����
							break;
						}//	else if (mem1.opt1 == 4) // Base & Others

						else if (bev[i].opt1 == 5) // ����
						{
							bev[i].opt_name = "����";
							system("cls");

							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", bev[i].opt_name);
							Option_Mag();

							while (1)
							{
								getchar();
								scanf_s("%d", &bev[i].opt_ice_mag, sizeof(bev[i].opt_ice_mag));

								if (bev[i].opt_ice_mag == 1) //����
								{
									bev[i].opt_ice_subname = "����";
									break;
								}
								else if (bev[i].opt_ice_mag == 2)	//����
								{
									bev[i].opt_ice_subname = "����";
									break;
								}
								else if (bev[i].opt_ice_mag == 3)	//����
								{
									bev[i].opt_ice_subname = "����";
									break;
								}
								else if (bev[i].opt_ice_mag == 4)	//����
								{
									bev[i].opt_ice_subname = "����";
									break;
								}
								else
								{
									printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									bev[i].opt_ice_subname = "";
								}
							}//while(1)
							system("cls");
							printf("%s�� �����ϼ̽��ϴ�. \n", bev[i].opt_ice_subname);

							optre = Option_Again();	//Option �ݺ� �Լ�
							break;
						}//	else if (mem1.opt1 == 5) // ����

						else if (bev[i].opt1 == 6)//���� �ɼ�
						{
							bev[i].opt_name = "����ũ��";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� ���ο� �ش��ϴ� ��ȣ �Է����ּ���. \n", bev[i].opt_name);

							while (bev[i].opt_whip_rep != 0)
							{
								printf("1. �Ϲ� ���� \n2. ���� ���� \n3. ���ݸ� ���� \n4. ���������� ���� \n");

								while (1)
								{
									getchar();
									scanf_s("%d", &bev[i].opt_whip_num);

									if (bev[i].opt_whip_num == 1)
									{
										bev[i].opt_whip_name = "�Ϲ� ����";
										break;
									}
									else if (bev[i].opt_whip_num == 2)
									{
										bev[i].opt_whip_name = "���� ����";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_whip_num == 3)
									{
										bev[i].opt_whip_name = "���ݸ� ����";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_whip_num == 4)
									{
										bev[i].opt_whip_name = "���������� ����";
										totalprice += 600;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										bev[i].opt_whip_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s�� �����ϼ̽��ϴ�. \n", bev[i].opt_whip_name);
								break;
							}//while (mem1.opt_whip_rep != 0)

							optre = Option_Again();	//Option �ݺ� �Լ�
							break;
						}//else if (mem1.opt1 == 6)//���� �ɼ�

						else if (bev[i].opt1 == 7) //Drizzle Option
						{
							bev[i].opt_name = "�帮��";
							system("cls");
							printf("%s �ɼ��� �����ϼ̽��ϴ�. ���Ͻô� �帮�� �ش��ϴ� ��ȣ �Է����ּ���. \n", bev[i].opt_name);

							while (bev[i].opt_driz_rep != 0)
							{
								printf("1. ī��� �ö� �帮�� \n2. ī��� �帮�� \n3. ���ݸ� �帮�� \n");

								while (1)
								{
									getchar();
									scanf_s("%d", &bev[i].opt_driz_num);

									if (bev[i].opt_driz_num == 1)
									{
										bev[i].opt_driz_name = "ī��� �ö�";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_driz_num == 2)
									{
										bev[i].opt_driz_name = "ī���";
										totalprice += 600;
										break;
									}
									else if (bev[i].opt_driz_num == 3)
									{
										bev[i].opt_driz_name = "���ݸ�";
										totalprice += 600;
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										bev[i].opt_driz_name = "";
									}
								}//while(1)

								system("cls");
								printf("%s �帮���� �����ϼ̽��ϴ�. ���� �ɼ��� �������ּ���.\n", bev[i].opt_driz_name);
								Option_Mag();

								while (1)
								{
									getchar();
									scanf_s("%d", &bev[i].opt_driz_mag, sizeof(bev[i].opt_driz_mag));

									if (bev[i].opt_driz_mag == 1) //����
									{
										bev[i].opt_driz_sizename = "����";
										break;
									}
									else if (bev[i].opt_driz_mag == 2)	//����
									{
										bev[i].opt_driz_sizename = "����";
										break;
									}
									else if (bev[i].opt_driz_mag == 3)	//����
									{
										bev[i].opt_driz_sizename = "����";
										break;
									}
									else if (bev[i].opt_driz_mag == 4)	//����
									{
										bev[i].opt_driz_sizename = "����";
										break;
									}
									else
									{
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
										bev[i].opt_driz_sizename = "";
									}

								}//while(1)

								system("cls");
								printf("%s�帮���� %s ��ŭ �����ϼ̽��ϴ�. \n", bev[i].opt_driz_name, bev[i].opt_driz_sizename);

								getchar();
								printf("�� �ٸ� �帮���� �߰��Ͻðڽ��ϱ�? (Y/N) \n");

								while (1)
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
										printf("�߸� �Է��ϼ̽��ϴ�. ����� �Է����ּ���. \n");
									}
								}//while(1) 
							}//while (mem1.opt_whip_rep != 0)

							optre = Option_Again();	//Option �ݺ� �Լ�
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
			else if (bev[i].opt_choice == 2) //�۽��� �ɼ� ���� �� ��
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
		printf("%s��! �ֹ� ������ Ȯ���ϰڽ��ϴ�. \n", bev[i].name);
		printf("���� %s %s %s �� �����ϼ̽��ϴ�. \n", bev[i].size_name, bev[i].hclabel, bev[i].menuname);
		///////////////////�ɼ� �ֹ����� ����ϱ�
		//	1st Try
		/*for (bev[i].in = 1; bev[i].in = 8; mem1.in++)
		{
		if (mem1.opt1 == mem1.in)
		printf("%s", mem1.opt_name);
		break;
		}*/

		//	2nd Try
		/*
		if (bev[i].opt1 == 1)
		{
		printf("1st\n");
		if (bev[i].opt1 == 2)
		{
		printf("2nd\n");
		if (bev[i].opt1 == 3)
		{
		printf("3rd\n");
		if (bev[i].opt1 == 4)
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
		gets_s(bev[i].nick);//////////////////////////////////////////////////////////////////bev[i]���� mem[3]���� Ȯ���ϰ� üũ!
		if (bev[i].nick[0] == (char)NULL) //Enter
		{
			system("cls");
			printf("%s %s %s \n", bev[i].size_name, bev[i].hclabel, bev[i].menuname);
		}
		else
		{
			system("cls");
			printf("%s\n", bev[i].nick);
		}

		/* STEP 13
		�߰� �ֹ� ���� Ȯ��
		*/

		/* STEP 14
		������ ���� ����
		*/

		printf("���� ���� ������ ���̽��ϱ�?? %s ��?? (Y/N)\n", bev[i].name);
		printf("���� ���� �����ø� 300�� ���� �����մϴ�.\n");

		while (1)
		{
			scanf_s("%c", &bev[i].cup, sizeof(bev[i].cup));

			if (bev[i].cup == 'Y' || bev[i].cup == 'y')
			{
				system("cls");
				printf("�������� ������ ���̽��ϴ�. 300���� ���� �Ǿ����ϴ�! \n");
				// �߰��ֹ� ����ؼ� AND�������� ���� �� ������ �� �ְ� ����.
				totalprice -= 300;
				break;
			}
			else if (bev[i].cup == 'N' || bev[i].cup == 'n')
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
		if (bev[i].yesmem == 1 && bev[i].opt_choice == 1)
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

		if (bev[i].yesmem == 1)
		{
			printf("ȸ���Բ��� ���� ������ ��� ���� ����Ʈ�� %d �Դϴ�. \n", bev[i].valuepoint);
			printf("����Ʈ�� ����Ͻðڽ��ϱ�?? (Y/N) \n");

			while (1)
			{
				getchar();
				scanf_s("%c", &bev[i].pch, sizeof(bev[i].pch));

				if (bev[i].pch == 'Y' || bev[i].pch == 'y') //����Ʈ ���
				{
					printf("����Ʈ���� �󸶸� �����Ͻðڽ��ϱ�? \n");
					scanf_s("%d", &bev[i].pomin, sizeof(bev[i].pomin));

					bev[i].valuepoint -= bev[i].pomin;
					totalprice -= bev[i].pomin;

					system("cls");
					printf("�ܿ� ����Ʈ�� %d �Դϴ�. \n", bev[i].valuepoint);
					printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
					break;
				}
				else if (bev[i].pch == 'N' || bev[i].pch == 'n')
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
		else if (bev[i].yesmem == 0)
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
			scanf_s("%d", &bev[i].cash, sizeof(bev[i].cash));

			if (bev[i].cash < totalprice)
			{
				system("cls");
				printf("���ݰ��� �Ͻ� �ݾ��� %d �Դϴ�. \n", totalprice);
				printf("%d��ŭ�� �����մϴ�. ������ �ݾ��� �� �ּ���. \n", totalprice - bev[i].cash);
			}
			else// if (bev[i].cash >= totalprice)
			{
				system("cls");
				printf("���� �� %d�� �޾ҽ��ϴ�. \n�ܵ��� %d �Դϴ�.\n", bev[i].cash, bev[i].cash - totalprice);
				break;
			}
			totalprice -= bev[i].cash;
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