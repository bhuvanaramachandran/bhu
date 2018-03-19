#include <stdio.h>
int main()
{
	char a[10]="xcode";
	int i;
	for(i=0;i<6;i++)
	{
		if(i%2==0)
		{
			printf("%c",a[i]);
		}
	}
	printf(" ");
	for(i=0;i<6;i++)
	{
	if(i%2!=0)
	{
		printf("%c",a[i]);
	}
	}
	return 0;
}
