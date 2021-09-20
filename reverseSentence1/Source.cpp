#include<stdio.h>
int main()
{
	char stn[50];
	char* ptn;
	ptn = stn;
	scanf_s("%s",stn);
	while (*ptn != '\0')
	{
		ptn++;
	}
	ptn--;
	printf("reverse : ");
	while (ptn >= stn)
	{
		printf("%c", *ptn);
		ptn--;
	}
	return 0;
}