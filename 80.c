#include <stdio.h>
int main()
{
	int m,num,i;
	printf("enter the number");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		m=num%10;
		num=num/10;
		if(m%2!=0)
		{
printf("\n");
}
			printf("\n %d",m);
		
	}

	return 0;
}
