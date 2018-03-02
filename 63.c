#include<stdio.h>
int main()
{
	char a[20]="hello world";
	int b=0,i;
	for(i=0;i<28;i++)
	{
		if(a[i]==' ')
		{
			b++;
		}
	}
	printf("%d",b+1);
	return 0;
}
