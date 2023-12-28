#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,sum=1;
clrscr();
printf("Enter a number:");
scanf("%d",&num);
for(i=1;i<=num;i++){
printf("%d\n",i);
sum*=i;
}
printf("sum=%d",sum);
getch();
}