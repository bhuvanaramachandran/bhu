#include <stdio.h>
int main()
{
	int i,c=0,x=1,num;
	printf("enter the number is");
	scanf("%d",&num);
	while(num!=1)
	{
		 num/=2; 
		 c++;
	}
	for(i=0;i<=c;i++)
	{
		x*=2;
	}
	printf("\n nearest multiple of 2 %d",x);
return 0;
}
