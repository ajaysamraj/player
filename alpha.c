#include<stdio.h>
int main (void)
{
    char a;
    printf("characterr\n");
    scanf("%s",a);
    if((a>=65)&&(a<=90))
    {
        printf(" alphabet it is\n");
    }
    else if((a>=97)&&(a<=122))
    {
        printf("alphabet it is\n");
    }
    else
    {
        printf("it is not alphabet\n");
    }
}
