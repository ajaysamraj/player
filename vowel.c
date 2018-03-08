#include<stdio.h>
int main (void)
{
	int a;
	printf("vowels\n");
	scanf("%d",&a);
	char c;
	printf("enter the charecter\n");
	scanf("%s",c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("its a vowel%c\n",c);
	}
	else
	{
		printf("its not vowels%c\n",c);
	}
	
	return 0;
}
