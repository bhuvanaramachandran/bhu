#include <stdio.h>
int main()
{
char a[20];
int b=0,c=0,i;
printf("enter the word and number:");
for(i=0;i<=20;i++)
{
	scanf("%s" ,&a[i]);
}
for(i=0;i<=20;i++)
{
	if(a[i]>='a'||a[i]>='A'&&a[i]<='z'&&a[i]<='Z')
	{
		c++;
	}
	if(a[i]>='0'&&a[i]<='9')
	{
		b++;
	}
	
}
	if(b>0&&c>0)
	{
		printf(" \t yes contain  word with number");
	}
	else
	{
		printf("no contain word with number\n");
	}
	return 0;
}
