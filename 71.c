#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],i,j,flag=0;
	printf("enter the character");
	scanf("%s",&a);
	i=0;
	j=strlen(a)-1;
	while(j>1)
	{
		if(a[i++]!=a[j--])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}
