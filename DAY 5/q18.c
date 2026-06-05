//WAP TO CHECK STRONG NUMBER
#include<stdio.h>
int main()
{
int sum =0,n,i,n1;
int fact;
printf("ENTER THE NUMBER \n");
scanf("%d",&n);
n1= n ;
while(n>0)
{
   int r = n %10;
   fact = 1;
   for(i=1;i<=r;i++)
   {

fact = fact*i;

   }

sum = sum + fact ;
n = n /10;
}

if(n1==sum)
printf("ENTERED NUMBER IS A STRONG NUMBER");
else
printf("Entered number is not a strong number") ;


return 0 ;

}