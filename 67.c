#include <stdio.h>
int main()
{
	int num,q,r,s;
	printf("enter the number");
	scanf("%d",&num);
	q=num/10;
	r=num%10;
	s=q*10;
	if(r!=0)
	{
		s=s+10;
		printf("the value is %d %d",s,num);
	}
	return 0;
}
