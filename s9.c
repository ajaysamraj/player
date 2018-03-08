#include<stdio.h>
int main (void)
{
    int a[100],i,k,sum=0,n;
    printf("range\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=2;
    for(i=0;i<k;i++)
    {
        sum=sum+a[i];
    }
    printf("the sum of the first is %d",sum);
}
