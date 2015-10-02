#include <stdio.h>
#include <string.h>
#include <windows.h>


int main(void)
{
	int a;//, b, c;
	//int num;
	char *aa="";
	
	//getchar();
	scanf_s("%d", &a);
	if (a == 1)
	{
		//printf("SEX");
		getchar();
		aa = "SEX";
		//printf("%s 입니다.", aa);

	}
	else if (a == 2)
	{
		//printf("DUDE");
		getchar();
		aa = "DUDE";
	}
	else
	{
	}
	printf("%s 입니다.\n", aa);
	return 0;
}