#include <stdio.h>
#include<string.h>
int main()
{
	char b[10];
	int i,n;
	n=strlen(b);
	printf("enter the word");
	scanf("%s",b);
	for(i=0;i<n;i++)
	{
		if(i==n/2)
		{
			b[i]='*';
			break;
		}
	}
	printf("\n the value is %s",b);
	return 0;
}
