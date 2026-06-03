#include<stdio.h>
int main()
{
	int num,x,y;
	printf("Enter a number:");
	scanf("%d",&num);
	x=num/10;
	y=num%10;
	printf("%d",x>y);
}
