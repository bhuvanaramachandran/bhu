#include <stdio.h>
int main()
{
	int  a[10],i,large;
	printf("enter the value");
	scanf("%d ",&a[i]);
	large=a[0];
	for(i=0;i<=10;i++)
	{
		if(large>a[i])
		{
			large=a[i];
		}
	}
	printf("large is %d",large);
	return 0;
}
