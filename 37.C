#include <stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int s=0,i;
	printf("enter the string");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>='0'&&str[i]<'9')
		
			s++;
		
	}
	printf("%d",s);
	return 0;
}
