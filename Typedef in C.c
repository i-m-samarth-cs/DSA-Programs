#include<stdio.h>
#include<conio.h>

void main()
{
	typedef int amount;
	
	amount ruppees ;
	amount dollar ;
	
	
	printf("\n Enter Ruppees: ");
	scanf("%d",&ruppees);
	
	printf("\n Enter Dollar: ");
	scanf("%d",&dollar);
	
	printf("\n Ruppees=%d Rs \n\n Dollars=%d $\n\n",ruppees,dollar);
	
	getch();
	 
}
