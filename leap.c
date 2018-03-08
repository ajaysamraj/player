#include <stdio.h>

int main(void)
{
	int d,m,y;
	printf("enter your born dd mm yyyy\n");
	scanf("%d%d%d",&d,&m,&y);
	if(y%4==0)
    {
        printf(" leap year %d\n",y);
    }
    else
    {
        printf(" not  a leap year %d\n",y);
    }
	return 0;
}
