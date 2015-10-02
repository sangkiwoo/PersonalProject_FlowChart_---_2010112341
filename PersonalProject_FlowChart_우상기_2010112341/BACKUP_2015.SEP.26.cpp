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

/*
�޴� ����� ǥ���ϴ� �Լ� �����
*/
void Menulist(void)
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
void Size(void)
{
	printf("\n1. Tall Size (355ml, 12oz) \n");
	printf("2. Grande Size (473ml, 16oz) \n");
	printf("3. Venti Size (591ml, 20oz) \n");
}

/*
�ɼ� ����Ʈ
*/
void Option(void)
{

	printf("1. Ŀ�� \n2. Espresso Choice \n3. �÷� \n4. ���̽� & ��Ÿ \n");
	printf("5. ���� \n6. ���� \n7. �帮�� \n");

}


/////////////////////////////////////////////////////////////////////////////////
//MAIN
/////////////////////////////////////////////////////////////////////////////////
int main(void)
{
	struct member mem1;

	int totalprice = 0;

	char membership;	//ȸ�� ���� Ȯ��



	/*	STEP 01
	�� �̸� �Է¹ޱ�
	*/
	printf("������ �̸��� �Է����ּ���. \n");
	scanf_s("%s", mem1.name, sizeof(mem1.name));
	//	scanf_s�Լ��� scanf�Լ��� �޸� ���ڿ� ���ڿ��� ���ؼ��� ��������� ũ�Ⱚ�� ���� ��� �մϴ�.
	system("cls");	//�ܼ�â ȭ�� �����


	/*	STEP 02
	ȸ�� ���� Ȯ���ϱ�
	*/
	printf("ȯ���մϴ�! %s��! \n\n%s ���� ��Ÿ���� ȸ���̽ʴϱ�? (Y/N) \n", mem1.name, mem1.name);
	printf("ȸ���� ��� ���� extra 1ȸ �����Ͻʴϴ�. \n");

	while (1)
	{
		getchar();
		scanf_s("%c", &membership, sizeof(membership));

		if (membership == 'Y' || membership == 'y')
		{
			system("cls");
			mem1.yesmem = 1;	//ȸ������ �����.
			//totalprice -= 600;
			break;
			/*
			ȸ���̸� ���� ������ ���̽����� �ܿ� ����Ʈ�� �˷��� �� �մ� ������ ���鵵�� ����.
			*/
		}

		else if (membership == 'N' || membership == 'n')
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



	/* STEP 03
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
			printf("�Ƹ޸�ī��(Americano)�� �����ϼ̽��ϴ�. \n");
			totalprice += 4100;
			break;
		}
		else if (mem1.menunum == 2)	//Caffe Latte
		{
			printf("ī�� �� (Caffe Latte)�� �����ϼ̽��ϴ�. \n");
			totalprice += 4600;
			break;
		}
		else if (mem1.menunum == 3)
		{
			printf("ī�� ��ī (Caffe Mocha)�� �����ϼ̽��ϴ�. \n");
			totalprice += 5100;
			break;

		}
		else if (mem1.menunum == 4)
		{
			printf("�ٴҶ� ũ�� ����Ǫġ�� (Vanilla Frappuccino Blended Creme)�� �����ϼ̽��ϴ�. \n");
			totalprice += 4800;
			break;

		}
		else if (mem1.menunum == 5)
		{
			printf("���� ũ�� ����Ǫġ�� (Strawberries & Creme Frappuccino Blended Creme)�� �����ϼ̽��ϴ�. \n");
			totalprice += 5600;
			break;

		}
		else
		{
			system("cls");
			printf("�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. ���� ��ȣ�� �����ּ���. \n\n");
		}

	}	//while(1)

	/* STEP 04
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
				printf("HOT xxx���Ḧ �����ϼ̽��ϴ�. \n");
				break;
			}
			else if (mem1.hc == 2)
			{
				system("cls");
				printf("COOL xxx���Ḧ �����ϼ̽��ϴ�. \n");
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
			printf("����Ǫġ��(Frappuccino) �޴��� ��� COOL���Ḹ �ֹ� �����մϴ�. \n");
			break;

		}
		else
		{
			system("cls");
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
		}
	}


	/* STEP 05
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


	/* STEP 06
	Option �������� �����ϱ�
	*/
	while (1)
	{
		printf("�۽��� �ɼ����� ������ ���Ḧ ����ðڽ��ϱ�? \n");
		printf("\n1. ��, �ɼ��� �����մϴ�. \n2. �ƴϿ�, �ɼ��� �������� �ʽ��ϴ�. \n");
		scanf_s("%d", &mem1.opt);

		if (mem1.opt == 1)//�۽��� �ɼ� ������
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
				printf("�� �߰�. 0~9���� �����Ͻʴϴ�. ���ϴ� ���� �Է����ּ���. \n");
				scanf_s("%d", &mem1.opt2);
				totalprice += mem1.opt2 * 600;
				printf("�߰� �ɼ��� �����Ͻðڽ��ϱ�? (Y/N) \n");//subopt
				///////////////////////////////////////////////////////////////////
				//�Լ� �Ἥ ��Ÿ����.

				break;
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
			//////////////////////////}


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
	}

	/* STEP 06
	Option List �����ϱ�
	*/
	system("cls");
	printf("TOTALPRICE = %d \n", totalprice);
	printf("TESTDRIVE \n");





	return 0;

}//main