#include <stdio.h>
int main()
{
	int n,a=1,b=1,c,i;
	scanf("%d",&n);
	printf("%d %d",a,b);
	for(i=2;i<n;i++)
	{
	
c=a+b;
	a=b;
	b=c;
	printf("the value is %d ",c);
	}
	return 0;
}
