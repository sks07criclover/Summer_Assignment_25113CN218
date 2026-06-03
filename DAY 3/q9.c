// WAP TO CHECK WHETHER A NUMBER IS PRIME OR NOT
#include<stdio.h>
int main()
{

int n ,i,count;
count = 0;
printf("ENTER THE NUMBER \n");
scanf("%d", &n);
for(i=2;i<=n/2;i++)
{

if(n%i == 0)
{

count ++;

}

}
 
if (count ==0)
printf ("ENTERED NUMBER IS A PRIME NUMBER \n");
else 
printf("ENTERED NUMBER IS NON - PRIME");
return 0 ;






}