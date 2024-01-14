#include <stdio.h>
#include <conio.h>
void hanoi(int,char,char,char);
int main()
{
int disk;
setbuf(stdout, NULL);
printf("\n ENTER NUMBER OF DISKS: ");
scanf("%d",&disk);
printf("\n TOWER OF HANOI FOR %d NUMBER OF DISKS:\n", disk);
hanoi(disk,'A','B', 'C');
return 0;
}
void hanoi(int n, char src, char dest, char aux)
{
if(n<=0)
printf("\n ILLEGAL NUMBER OF DISKS");
 if(n==1)
printf("\n MOVE DISK FROM %c TO %c",src,aux); 
if(n>1)
{
hanoi(n-1,src,aux,dest);
printf("\n MOVE DISK FROM %c TO %c",src,aux);
hanoi(n-1,dest,src,aux);
}
} 
