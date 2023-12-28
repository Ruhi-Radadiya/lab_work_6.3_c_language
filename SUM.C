#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,sum=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
	printf("%d\n",i);
	sum=sum+i;
	}
	printf("sum is %d",sum);
	getch();

}