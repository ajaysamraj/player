#include <stdio.h>
int main(void) 
{ 
int i;
printf("enter the nuber\n"); 
scanf("%d",&i);   
if(i==0)   
{    
  printf("the number is %d",i);   
}   
else if(i<0)   
{    
  printf("the number is negative %d",i);  
}   
else   
{   
  printf("the number is postive%d",i );   
}
return 0;
}
