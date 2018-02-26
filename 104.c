#include <stdio.h>
int main()
{
	int a1,a2,r=1;
	printf("enter the value");
	scanf("%d %d",&a1,&a2);
	while(a2!=0)
	{
		r*=a1;
		--a2;
	}
	printf("value %d ",r);
	return 0;
}
