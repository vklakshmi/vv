#include<stdio.h>
void towerofHanoi(int n,char fromrod,char torod,char auxrod)
{
if(n==1)
{
printf("\n Move disk1 from rod %c to rod %c",fromrod,torod);
getch();
}
towerofHanoi(n-1,fromrod,auxrod,torod);
printf("\n Move disk: %d from rod %c to rod %c",n,fromrod,torod);
towerofHanoi(n-1,auxrod,torod,fromrod);
}
int main()
{
int n=4;
towerofHanoi(n,'A','C','B');
return 0;
}
