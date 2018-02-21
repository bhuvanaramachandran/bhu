#include <stdio.h>
int main()
{
	int a[10],n,i,j,t;
	printf("enter the num");
	scanf("%d",&n);
	for(i=0;i<=10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[j]=a[i];
				a[j]=t;
			}
		}
	}
	printf(" %d is the largest number",a[i]);
	
	return 0;
}
