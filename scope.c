#include<stdio.h>

int global = 20;        

int main(void)

{

   int local = 10;         

   printf("Global variable is %d",global);

   printf("Local variable is %d",local);

   func1();

}

void func1()

{
	int local=10;
   printf("Global inside func1 is %d",global);
    printf("Local variable is %d",local);

}
