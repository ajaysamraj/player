#include <stdio.h>

int main(void)
{
	int a,b,c;
	printf("enter three number\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("%d is greater",a);
	}
	else if((b>a)&&(b>c))
	{
		printf("%d is greater",b);
	}
	else if((c>b)&&(c>a))
	{
		printf("%d is greater",c);
	}
	else
	{
		printf("all re equal");
	}
	return 0;
}
