#include<stdio.h>
int main()
{
	int a,c;
	printf("enter the value");
	scanf("%d ",&a);
	if(a%2!=0)
	{
		c=a-1;
		printf("the value is \n %d",c);
	}
	else
	{
		printf("not apllicable");
	}
	return 0;
}
