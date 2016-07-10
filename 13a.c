#include<stdio.h>
#include<math.h>
#include<conio.h>
void move(int,int,int,int);
void main()
{
int d=3,count;
printf("follow these moves:\n");
move(d,1,3,2);
getch();
}
void move(int count,int start,int finish,int temp)
{
if(count>0)
{
move(count-1,start,temp,finish);
printf("move disk %d from %d\n",count,start,finish);
move(count-1,temp,finish,start);
}
}
