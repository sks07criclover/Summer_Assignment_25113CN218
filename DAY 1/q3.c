// WAP TO FIND FACTORIAL OF A NUMBER
#include<stdio.h>
int main()
{ int fact =1,n,i ;
printf("ENTER THE NUMBER :\n") ;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;


}

printf("Factorial of the given number is %d",fact);


}