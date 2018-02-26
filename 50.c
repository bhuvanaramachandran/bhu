#include <stdio.h>
int main()
{
	int num,a;
	printf("enter the value");
	scanf("%d",&num);
	a=(num&(num-1));
	if(a==0)
	{
		printf("\n yes");
	}
	else
	{
		printf("\n no");
		}
		return 0;
}
