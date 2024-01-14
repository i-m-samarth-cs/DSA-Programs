#include<stdio.h>
#include<conio.h>
void main()
{
	char token;
	int num;
	
	printf("\n Enter any Number:");
	scanf("%c",&token);
	
	num=token-'0';
	
	printf("\n NUm:%d",num);
	
	getch();
}
